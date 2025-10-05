#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
  char c;
  vector<char> p;
  while(cin.get(c)){
  	
  	if(c==' '){
  		reverse(p.begin(),p.end());
  		for(auto&c:p)cout<<c;
  		cout<<" ";
  		p.clear();
  	}
  	else if(c=='.'){
  		cout<<'.';
   		reverse(p.begin(),p.end());
  		for(auto&c:p)cout<<c;
  		
  		p.clear();
    
    }
  	else if(c=='\n'){cout<<endl;p.clear();}
  	else 			{p.push_back(c);}
  }
  return 0;
}

