#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int calc(string input,int deg){
	int count=0;
	for(int i=0;i<input.size();i++){
		count+=input[i]-'0';
	}
	input="";
	if(count%9==0){
		deg++;
		if(count>=10){
			while(count!=0){
				input.push_back((count%10)+'0');
				count/=10;
			}
			reverse(input.begin(),input.end());
			return calc(input,deg);
		}
		else{
			return deg;
		}
	}
	else{
		return deg;
	}
		
		

}
int main(){
  string input;
  while(getline(cin,input)){
  	int deg=0;
  	if(input[0]=='0')break;
  	deg=calc(input,deg);
  	if(deg>=1)cout<<input<<" is a multiple of 9 and has 9-degree "<<deg<<".\n";
  	else   	  cout<<input<<" is not a multiple of 9.\n";
  }
  
  
  return 0;
}
