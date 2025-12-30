#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
  string input1,input2;
  while(cin>>input1>>input2){
  	int checkfinal=stoi(input1);
  	if(!checkfinal)break;
  	int maxsize=max(input1.size(),input2.size());
  	reverse(input2.begin(),input2.end());
  	reverse(input1.begin(),input1.end());
  	while(input1.size()<=maxsize){input1+='0';}
  	while(input2.size()<=maxsize){input2+='0';}
  	int count=0;bool check=false;
  	for(int i=0;i<input1.size();i++){
  		int tot=(input1[i]-'0')+(input2[i]-'0');
  		if(check){tot++;check=false;}
  		if(tot>=10){count++;check=true;}
  	}
  	if(count>=2){cout<<count<<" carry operations.\n"; }
  	else if(count==1){cout<<count<<" carry operation.\n"; }
    else	  {cout<<"No carry operation.\n";} 
  
  }
  return 0;
}
