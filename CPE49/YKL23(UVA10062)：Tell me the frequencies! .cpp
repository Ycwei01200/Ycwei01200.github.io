#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
  char input;
  int  list[1000]={};
  bool last=false;
  while(cin.get(input)){
  	if(last){cout<<endl;last=false;}
  	int maxvalue=*max_element(list,list+1000);
  	
  	if(input=='\n'){
  		for(int i=1;i<=maxvalue;i++){
  			for(int k=999;k>=0;k--){
  				if(list[k]==i)cout<<k<<" "<<i<<endl;
  			}
  		}
  		fill(list,list+1000,0);
  		last=true;
  	}
  	else{
  		list[int(input)]++;
  	}
  
  
  }
  
  return 0;
}
