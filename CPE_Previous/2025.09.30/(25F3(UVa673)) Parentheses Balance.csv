#include<iostream>
#include<string>
using namespace std;
int main(){
  int n;cin>>n;
  string input;
  getline(cin,input);
  while(getline(cin,input)){
  	int left1=0,left2=0,right1=0,right2=0;
  	if(input[input.size()-1]=='['||input[input.size()-1]=='('){cout<<"No\n";continue;}
  	for(int i=0;i<input.size();i++){
  		if(input[i]=='(')left1++;
  		else if(input[i]=='[')left2++;
  		else if(input[i]==')')right1++;
  		else if(input[i]==']')right2++;
  	}
  	if(left1==right1&&left2==right2)cout<<"Yes\n";
  	else							cout<<"No\n";
  }
  
  return 0;
}
