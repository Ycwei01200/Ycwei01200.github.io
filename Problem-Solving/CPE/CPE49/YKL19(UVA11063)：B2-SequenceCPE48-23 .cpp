#include<iostream>
#include<vector>

using namespace std;
int main(){
  int n,m,cases=1;
  while(cin>>n){
  	bool check=false;
  	vector<int> a,b;
  	for(int i=0;i<n;i++){cin>>m;a.push_back(m);}
  	for(int i=0;i<n;i++){
  		for(int l=i+1;l<n;l++){
  			b.push_back(a[i]+a[l]);
  		}
  	}
  	for(int i=0;i<b.size();i++){
  		for(int l=i+1;l<b.size();l++){
  			if(b[i]==b[l]){check=true;break;}
  		}
  		if(check)break;
  	}
  	if(check)cout<<"Case #"<<cases<<": It is not a B2-Sequence.\n\n";
  	else	 cout<<"Case #"<<cases<<": It is a B2-Sequence.\n\n";
  	cases++;
  }
  return 0;
}
