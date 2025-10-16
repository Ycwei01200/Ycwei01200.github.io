#include<iostream>
#include<string>
#include<sstream>
#include<vector>
using namespace std;
using ll = long long;
int main(){
  ll test,level,entry,number=1;char x,y;
  cin>>test;
  while(test--){
  	bool check=false;
  	cin>>x>>y>>level;
  	vector<ll> matrix(level*level);
  	for(auto&c:matrix)cin>>c;
  	for(int i=0;i<level*level;i++){
  		if(matrix[i]<0){check=false;break;}
  		if(matrix[i]==matrix[level*level-1-i]){check=true;}
  		else								  {check=false;break;}
  	}
  	if(check)cout<<"Test #"<<number<<": Symmetric.\n";
  	else	 cout<<"Test #"<<number<<": Non-symmetric.\n";
  	number++;
  }
  return 0;
}
