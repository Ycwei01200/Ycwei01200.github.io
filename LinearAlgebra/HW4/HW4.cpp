/*
    * description: HW4 program which translates a matrix into its row echelon form by Gaussian elimination.

    * developer: <Yucheng-Wei> s1131556@mail.yzu.edu.tw

*/

#include<iostream>
#include<sstream>
#include<fstream>
#include<vector>
#include<cmath>
#define ll long long

int col_total_index = 0;
int row_total_index = 0;

using namespace std;

class matrix_solve{
public:
    void read_csv(double matrix[50][50]){
        ifstream in;
        in.open("matrix.csv");
        if(!in.is_open()){
            cout<<"Wrong archive"<<endl;
            return;
        }
        string row;
        
        while(getline(in, row)){
            stringstream ss(row);
            int current_row_index = 0;
            string val_str;

            while(getline(ss, val_str, ',')){ 
                //stod 把字串轉成 double，解決負數和小數點問題
                matrix[col_total_index][current_row_index] = stod(val_str);
                current_row_index++;
            }
            if(col_total_index==0){
                row_total_index = current_row_index;
            }
            col_total_index++;
        }

        in.close();
    }

        
    
    void matirx_print(double matrix[50][50]){
    
        for(int i=0;i<col_total_index;i++){
            for(int j=0;j<row_total_index;j++){
                cout<<matrix[i][j]<<" ";
            }
            cout<<endl;
        }

    }


        
        
    




};

int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    matrix_solve solver;
    double matrix[50][50]={};
    solver.read_csv(matrix);
    solver.matirx_print(matrix);
    
    return 0;
}