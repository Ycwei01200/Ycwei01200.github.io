#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int n,m;
bool cmp(int x,int y){
	if((x%m)!=(y%m)){
		return (x%m)<(y%m);
	}
	else{
		if((x&1)&&(y&1)){
			return x>y;
		}
		else if(!(x&1)&&!(y&1)){
			return x<y;
		}
		else{
			return x&1;
		}
	}
}
int main(){
	cin>>n>>m;
  	vector<int> list(n);
  	cout<<n<<" "<<m<<endl;
  	for(auto&c:list)cin>>c;
  	sort(list.begin(),list.end(),cmp);
  	for(auto&c:list)cout<<c<<endl;
  	cout<<"0 0\n";
  	
  	
  	
  
  return 0;
}
