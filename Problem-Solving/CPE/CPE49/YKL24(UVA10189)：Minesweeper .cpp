#include<iostream>
#include<vector>
using namespace std;
int main(){
  int n,m,count=1;char x;
  while(cin>>n>>m){
  	if(!n){break;}
  	if(count==2)cout<<endl;
  	cout<<"Field #"<<count<<":\n";count++;
  	vector<vector<int>> field(n+2,vector<int>(m+2,0));
  	for(int i=1;i<=n;i++){
  		for(int j=1;j<=m;j++){
  			cin>>x;
  			if(x=='*')field[i][j]=-1;
  			
  		}
  	}
  	for(int dy=1;dy<=n;dy++){
  		for(int dx=1;dx<=m;dx++){
  			if(field[dy][dx]==(-1))cout<<"*";
  			else{
  				int total=0;
  				for(int d1y=-1;d1y<=1;d1y++){
  					for(int d1x=-1;d1x<=1;d1x++){
  						if(field[dy+d1y][dx+d1x]==0)continue;
  						if(field[dy+d1y][dx+d1x]==(-1))total++;
  					}
  				}
  				cout<<total;
  			}
  		}
  		cout<<endl;
  	}
  	
  }	
  	
  
  return 0;
}
