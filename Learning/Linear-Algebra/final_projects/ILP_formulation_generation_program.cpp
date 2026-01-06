#include <fstream>
#include <iostream>
const int N = 25;
int dist[N][N];
using namespace std;
int main() {
  ifstream infile("data.txt");
  // read the data
  if (!infile) {
    cerr << "No such file" << endl;
    return 1;
  }
  // write the ILP model
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      infile >> dist[i][j];
    }
  }
  infile.close();
  cout << "reading finished" << endl;
  // write the ILP model

  ofstream outFile("ILP_model.lg4");
  if (!outFile) {
    cerr << "No such file" << endl;
    return 1;
  }
  return 0;
}