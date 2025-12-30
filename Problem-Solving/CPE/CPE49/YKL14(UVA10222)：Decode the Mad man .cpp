#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
  string keyboard={"`1234567890-=qwertyuiop[]asdfghjkl;'zxcvbnm,./"};
  string input;
  while(getline(cin,input)){
  	
  	transform(input.begin(),input.end(),input.begin(),::tolower);
  	for(int i=0;i<input.size();i++){
  		auto site=keyboard.find(input[i])-2;
  		if(input[i]==' '){cout<<" ";}
  		else			 {cout<<keyboard[site];}
  	}
  	cout<<endl;
  
  }
  
  return 0;
}
