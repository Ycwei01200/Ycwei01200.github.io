#include<iostream>
#include<algorithm>
using namespace std;
int main(){
  int n;cin>>n;
  char c;int times[26]={};
  while(cin.get(c)){
  	if(isalpha(c)&&islower(c)){
  		times[int(c)-'a']++;
  	}
  	else if(isalpha(c)&&isupper(c)){
  		times[int(c)-'A']++;
  	}
  }
  int m=*max_element(times,times+26);
  
  
  for(int l=m;l>0;l--){
  	for(int i=0;i<26;i++){
  		if(times[i]==l)cout<<char(i+'A')<<" "<<times[i]<<endl;
  	}
  }
  
  return 0;
}
