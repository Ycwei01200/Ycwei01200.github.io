#include<iostream>
#include<string>
using namespace std;
string g(string input){
	int count=0;string input2;
	for(int i=0;i<input.size();i++){
		count+=(input[i]-'0');
	
	}
	
	input2=to_string(count);
	
	
	if(input2.size()==1)return input2;
	else			    return g(input2);
	
	
	
}
int main(){
  string input;
  while(getline(cin,input)){
    if(stoi(input)==0)break;
  	cout<<g(input)<<endl;
  }
  return 0;
}
