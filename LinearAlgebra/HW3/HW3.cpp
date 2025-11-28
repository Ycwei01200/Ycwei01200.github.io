/*
    * description: HW4 program which translates a matrix into its row echelon form by Gaussian elimination.
    * developer: <Yucheng-Wei> s1131556@mail.yzu.edu.tw
    * development history: 
    *    2025/11/27: created file.
    *    2025/11/28 11:32:modified read.csv and matrix_print function to fit the requirement.
    *    2025/11/28 22:50: added rank calculation and solution checking function.
*/
#include<iostream>
#include<sstream>
#include<fstream>
#include<vector>
#include<cmath>
#include<iomanip>
#define ld long double
using namespace std;

class matrix_solve{
public:
    int num_rows = 0;
    int num_cols = 0;
    
    int rank_calc(ld matrix[100][100]){
        int rank = 0;
        for(int i=0; i<num_rows; i++){
            bool non_zero_row = false;
            for(int j=0; j<num_cols-1; j++){
                if(fabs(matrix[i][j]) > 1e-9){
                    non_zero_row = true;
                    break;
                }
            }
            if(non_zero_row) rank++;
        }
        return rank;
    }
    void read_csv(ld matrix[100][100]){
        ifstream in;
        in.open("matrix(1).csv");
        if(!in.is_open()){
            cout<<"Wrong archive"<<endl;
            return;
        }
        string line;
        num_rows = 0;
        
        while(getline(in, line)){
            stringstream ss(line);
            int current_col_index = 0;
            string val_str;

            while(getline(ss, val_str, ',')){ 
                matrix[num_rows][current_col_index] = stod(val_str);
                
                current_col_index++;
            }
            
            if(num_rows == 0){
                num_cols = current_col_index;
            }
            num_rows++;
        }
        in.close();
    }

    void matrix_print_aug(ld matrix[100][100]){
        for(int i=0; i<num_rows; i++){
            for(int j=0; j<num_cols; j++){
                ld val = matrix[i][j];
                if(fabs(val) < 1e-9) val = 0;
                cout << val << " ";
            }
            cout<<endl;
        }
    }
    void matrix_print(ld matrix[100][100]){
        for(int i=0; i<num_rows; i++){
            for(int j=0; j<num_cols-1; j++){
                ld val = matrix[i][j];
                if(fabs(val) < 1e-9) val = 0;
                cout << val << " ";
            }
            cout<<endl;
        }
    }

    void gaussian_elimination(ld matrix[100][100]){//高斯消去法
        int pivot_row = 0;
        
        for (int col = 0; col < num_cols && pivot_row < num_rows; col++) {
            int max_row = pivot_row;
            for(int k = pivot_row + 1; k < num_rows; k++){
                if(fabs(matrix[k][col]) > fabs(matrix[max_row][col])){
                    max_row = k;
                }
            }

            if(fabs(matrix[max_row][col]) < 1e-9){
                continue;
            }

            if(max_row != pivot_row){
                for(int j = 0; j < num_cols; j++){
                    swap(matrix[pivot_row][j], matrix[max_row][j]);
                }
            }

            double pivot_val = matrix[pivot_row][col];
            for(int j = col; j < num_cols; j++){
                matrix[pivot_row][j] /= pivot_val;
            }

            for(int i = 0; i < num_rows; i++){
                if(i != pivot_row){
                    double factor = matrix[i][col];
                    for(int j = col; j < num_cols; j++){
                        matrix[i][j] -= factor * matrix[pivot_row][j];
                    }
                }
            }
            pivot_row++;
        }
    }
 
void check_solution(ld matrix[100][100]){
    
    for(int i=0; i<num_rows; i++){
        bool all_zeros = true;
        
        for(int j=0; j<num_cols-1; j++){  
            if(fabs(matrix[i][j]) > 1e-9){
                all_zeros = false;
                break;
            }
        }
        
        // 如果係數全為0,但常數項不為0 → 無解
        if(all_zeros && fabs(matrix[i][num_cols-1]) > 1e-9){
            cout << "No solution" << endl;
            return;
        }
    }
    
    int rank_num = rank_calc(matrix);
    int num_variables = num_cols - 1;  
    
    if(rank_num == num_variables){
        // 唯一解:找出每個主元所在的列
        cout << "Unique solution:" << endl;
        for(int var=0; var<num_variables; var++){
            // 找到第 var 行的主元所在列
            for(int row=0; row<num_rows; row++){
                if(fabs(matrix[row][var] - 1.0) < 1e-9){  
                    double val = matrix[row][num_cols-1];
                    if(fabs(val) < 1e-9) val = 0;
                    cout << "x" << var+1 << " = " << val << endl;
                    break;
                }
            }
        }
    }
    else{
        cout << "Infinitely many solutions" << endl;
    }
}


};

int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    matrix_solve solver;
    ld matrix[100][100]={};
    solver.read_csv(matrix);
    cout<<"-----------------"<<endl;
    cout<<"Before Gaussian elimination:augmented version"<<endl;
    solver.matrix_print_aug(matrix);
    cout<<"Before Gaussian elimination:non-augmented version"<<endl;
    solver.matrix_print(matrix);
    cout<<"-----------------"<<endl;
    solver.gaussian_elimination(matrix);
    cout<<"-----------------"<<endl;
    cout<<"After Gaussian elimination:augmented version"<<endl;
    solver.matrix_print_aug(matrix);
    cout<<"After Gaussian elimination:non-augmented version"<<endl;
    solver.matrix_print(matrix);
    cout<<"-----------------"<<endl;
    solver.check_solution(matrix);

    return 0;
}
