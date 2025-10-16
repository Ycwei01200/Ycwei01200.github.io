#include<iostream>
#include<string>
using namespace std;
int main(){
  int n;string input;
  while(cin>>n){
  	if(!n)break;
  	int top=1,bottom=6,left=3,right=4,front=2,behind=5;
  	getline(cin,input);
  	while(n--){
  		getline(cin,input);
  		if(input=="north"){
  			top=behind;
  			behind=bottom;
  			bottom=front;
  			front=7-behind;
  		}
  		if(input=="south"){
  			top=front;
  			front=bottom;
  			bottom=behind;
  			behind=7-front;
  		}
  		if(input=="east"){
  			top=left;
  			left=bottom;
  			bottom=right;
  			right=7-left;
  		}
  		if(input=="west"){
  			top=right;
  			right=bottom;
  			bottom=left;
  			left=7-right;
  		}
	}
	cout<<top<<endl;  
  }
  return 0;
}
