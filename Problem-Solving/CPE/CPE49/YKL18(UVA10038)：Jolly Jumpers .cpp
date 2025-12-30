#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
  int n;
  while(cin>>n){
  	bool check=false;
  	vector<int> list(n);vector<int>	jolly;
  	for(auto&c:list)cin>>c;
  	if(list.size()==1){cout<<"Jolly\n";continue;}
  	for(int i=0;i<n;i++){
  		if((i+1)>=n)break;
  		jolly.push_back(abs(list[i]-list[i+1]));
  	}
  	sort(jolly.begin(),jolly.end());
  	int x=1;
  	for(int i=0;i<jolly.size();i++){
  		
  		if(jolly[i]==x)check=true;
  		else		   check=false;
  		if(x!=n-1)x++;
  	}
  	if(check)cout<<"Jolly\n";
  	else	 cout<<"Not jolly\n";
  }
  return 0;
}
