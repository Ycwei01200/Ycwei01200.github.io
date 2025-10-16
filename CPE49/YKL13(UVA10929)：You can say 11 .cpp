#include<iostream>
#include<string>
using namespace std;
int main(){
  string input;
  while(getline(cin,input)){
  	int odddigit=0,evendigit=0;
  	for(int i=0;i<input.size();i++){
  		
  		if(i&1)odddigit+=input[i]-'0';
  		else   evendigit+=input[i]-'0';
  	}
  	if(odddigit==0&&evendigit==0)break;
  	if(abs(odddigit-evendigit)==0||abs(odddigit-evendigit)%11==0){
  		cout<<input<<" is a multiple of 11.\n";
  	}
  	else{
  		cout<<input<<" is not a multiple of 11.\n";
  	}
  
  }
  return 0;
}
