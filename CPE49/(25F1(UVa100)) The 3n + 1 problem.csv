#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
  int n,m;
  
  while(cin>>n>>m){
  	cout<<n<<" "<<m<<" ";
  	vector<int> p;
  	if(n>m)swap(n,m);
  	for(int i=n;i<=m;i++){
  		int count=1,k=i;
		while(k!=1){
			if(k%2==0){k/=2;count++;}
			else	  {k=k*3+1;count++;}
		}
		p.push_back(count);
  		
  	}
  	cout<<*max_element(p.begin(),p.end())<<endl;
  }
  return 0;
}

