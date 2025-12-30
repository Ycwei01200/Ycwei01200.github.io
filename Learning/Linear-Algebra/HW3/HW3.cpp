/*
 * description: HW4 program which translates a matrix into its row echelon form by Gaussian elimination.
 * developer: <Yucheng-Wei> s1131556@mail.yzu.edu.tw
 * development history: 
 * 2025/11/27: created file.
 * 2025/11/28 11:32: modified read.csv and matrix_print function to fit the requirement.
 * 2025/11/28 22:50: added rank calculation and solution checking function.
 * 2025/12/06: fixed I/O format and solution output order.
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
 
    int rank_calc(ld matrix[100][100], int col_limit){
        int rank = 0;
        for(int i=0; i<num_rows; i++){
            bool non_zero_row = false;
           
            for(int j=0; j<col_limit; j++){
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
        in.open("case3_input.csv");
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
               
                if (!val_str.empty() && val_str.back() == '\r') val_str.pop_back();
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

    void gaussian_elimination(ld matrix[100][100]){
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


    void write_output(ld matrix[100][100]){
        ofstream out("case3_output.txt"); 
        if(!out.is_open()) return;

        
        for(int i=0; i<num_rows; i++){
            for(int j=0; j<num_cols; j++){
                ld val = matrix[i][j];
                if(fabs(val) < 1e-9) val = 0; 
                out << val;
                if(j < num_cols-1) out << "\t";
            }
            out << endl;
        }

       
        int rank_A = rank_calc(matrix, num_cols - 1);
        
        int rank_Ab = rank_calc(matrix, num_cols);

        out << "Rank(A)=" << rank_A << endl;
        out << "Rank(Ab)=" << rank_Ab << endl;

        
        if(rank_A != rank_Ab){
            out << "Not consistent";
        }
        else{
            int num_variables = num_cols - 1;
            if(rank_A == num_variables){
                out << "Consistent" << endl;
                for(int var=0; var<num_variables; var++){
                    for(int row=0; row<num_rows; row++){
                        if(fabs(matrix[row][var] - 1.0) < 1e-9){
                            double val = matrix[row][num_cols-1];
                            if(fabs(val) < 1e-9) val = 0;
                      
                            out << "x" << var+1 << "=" << val << endl;
                            break;
                        }
                    }
                }
            }
            else{
                out << "Consistent" << endl;
                int n_vars = num_cols - 1; 
                for(int i = 0; i < num_rows; i++){
                    int pivot_col = -1;
                    for(int j = 0; j < n_vars; j++){
                        if(fabs(matrix[i][j] - 1.0) < 1e-9){
                            pivot_col = j;
                            break; 
                        }
                    }
                    if(pivot_col == -1) continue;
                    out << "x" << pivot_col + 1 << "=";
                    double constant = matrix[i][num_cols - 1];
                    bool has_printed = false; 
                    if(fabs(constant) > 1e-9){
                        out << constant;
                        has_printed = true;
                    }
                    for(int j = pivot_col + 1; j < n_vars; j++){
                        double coeff = matrix[i][j];
                        if(fabs(coeff) > 1e-9){
                            double rhs_val = -coeff; 
                            if(rhs_val > 0 && has_printed){
                                out << "+";
                            }
                            if(fabs(rhs_val + 1.0) < 1e-9) out << "-"; 
                            else if(fabs(rhs_val - 1.0) < 1e-9) { } 
                            else out << rhs_val; 
                            out << "x" << j + 1;
                            has_printed = true;
                        }
                    }

                    if(!has_printed){
                        out << "0";
                    }

                    out << endl;
                }
            }
        }
        out.close();
    }
};

int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    matrix_solve solver;
    ld matrix[100][100]={};
    
    solver.read_csv(matrix);
    solver.gaussian_elimination(matrix);
    solver.write_output(matrix); 

    return 0;
}