#include<iostream>
#include<vector>
using namespace std;
int main(){
  int n;bool check=true;
  while(cin>>n&&n!=0){
  	if(!check){cout<<endl;}
  	vector<int> a(n);
  	for(auto&c:a)cin>>c;
  	for(int q=0;q<n-5;q++){
  	for(int w=q+1;w<n-4;w++){
  	for(int e=w+1;e<n-3;e++){
  	for(int r=e+1;r<n-2;r++){
  	for(int t=r+1;t<n-1;t++){
  	for(int y=t+1;y<n;y++){
  		cout<<a[q]<<" "<<a[w]<<" "<<a[e]<<" "<<a[r]<<" "<<a[t]<<" "<<a[y]<<endl;
  	}}}}}}
  	check=false;
  
  }
  return 0;
}
