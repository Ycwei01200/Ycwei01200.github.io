#include<iostream>
#include<string>
using namespace std;
int main(){
  string input;int count=1;
  string word[6]   ={"HELLO","BONJOUR","CIAO","ZDRAVSTVUJTE","HOLA","HALLO"};
  string country[6]={"ENGLISH","FRENCH","ITALIAN","RUSSIAN","SPANISH","GERMAN"};
  	
  while(getline(cin,input)){
  	if(input[0]=='#')break;
  	auto site=find(word,word+6,input)-word;
  	if(site!=6)cout<<"Case "<<count<<": "<<country[site]<<endl;
  	else	   cout<<"Case "<<count<<": "<<"UNKNOWN"<<endl;
	count++;
  }
  return 0;
}
