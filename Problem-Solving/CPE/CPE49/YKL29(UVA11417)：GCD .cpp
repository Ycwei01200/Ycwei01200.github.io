#include<iostream>
#include<algorithm>
using namespace std;
using ll = long long ;
int GCD(ll i,ll j){
	int x=min(i,j);
	for(int k=x;k>=1;k--){
		if(i%k==0&&j%k==0)return k;
	}

}
int main(){

	ll N,G;
	while(cin>>N){
		G=0;
		if(!N)break;
		for(int i=1;i<N;i++){
			for(int j=i+1;j<=N;j++){
      			G+=GCD(i,j);

			}
		}
		cout<<G<<endl;
	}
	

  return 0;
}
