#include<iostream>
#include<string>

using namespace std;
int main(){
  string input;
  int left=0,right=0;
  while(getline(cin,input)){
  	string result;
  	for(int i = 0 ; i < input.size() ; i ++){
  		if(input[i] == '"'){
  			
  			if(left==0)
  				{left++;result+="``";}
  			else if(right==0){
  				right++;result+="\'\'";
  				if(left==1&&right==1){left=0;right=0;}
  			}
  			
  		}
  		else{
  			result+=input[i];
  		}
  		
  	}
  	cout<<result<<endl;
  	
  }
  
  return 0;
}

