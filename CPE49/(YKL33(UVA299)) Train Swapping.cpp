#include<iostream>
#include<vector>
using namespace std;
int main(){
  int test,input,n;
  cin>>test;
  
  while(test--){
  	cin>>n;
  	int count=0;
  	vector<int> p(n);
  	for(auto&c:p)cin>>c;
  	for(int x=0;x<n;x++){
  		for(int y=1;y<n;y++){
  			if(p[y-1]>p[y]){swap(p[y],p[y-1]);count++;}
  		}
  	}
  	cout<<"Optimal train swapping takes "<<count<<" swaps.\n";
  	
  }
  
  return 0;
}
