#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
  int n,input;
  
  while(cin>>n){
  	int x=n;
  	vector<int> list(x);
  	int count=0;
  	for(auto&c:list)cin>>c;
  	sort(list.begin(),list.end());
  	int size=list.size(),mid1,mid2;
  
  	if(size&1){mid1=list[size/2];}
  	else	  {mid1=list[(size-1)/2];mid2=list[size/2];}
  	for(auto&c:list){
  		if(c==mid1||c==mid2)count++;
  	}
  	int ans3=list[size/2]-list[size/2-1]+1;
	cout<<mid1<<" "<<count<<" "<<ans3<<endl;

  }
  return 0;
}
