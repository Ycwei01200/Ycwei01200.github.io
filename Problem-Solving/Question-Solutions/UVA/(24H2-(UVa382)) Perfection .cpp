#include<iostream>
#include<vector>
#include<iomanip>
using namespace std;
void div(int n,vector<int> a){
	int tot=1;
	for(int i=2;i<n;i++){
		if(n%i==0)tot+=i;
	}
	if	   (tot==n){cout<<"PERFECT\n";  }
	else if(tot< n){cout<<"DEFICIENT\n";}
	else if(tot> n){cout<<"ABUNDANT\n"; }

}
int main(){
  int n;
  
  cout<<"PERFECTION OUTPUT\n";
  while(cin>>n&&n!=0){
  	vector<int> a;int m=n,count=0;
  	while(m!=0){m/=10;count++;}
  	if(count>=5){cout<<n<<"  ";}
  	else		{cout<<setw(5-count)<<" "<<n<<"  ";}
  	div(n,a);
  }
  cout<<"END OF OUTPUT\n";
  return 0;
}

