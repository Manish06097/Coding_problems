#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,i,j,c;
	cin>>a;
	int b[a][a];
	while(a--){
		cin>>c;
		for(int i=0;i<c;i++){
			for(int j=0;j<=i;j++){
				cin>>b[i][j];
			}
		}
		for(int i=c-2;i>=0;i--){
			for(int j=0;j<=i;j++){
				b[i][j]+=((b[i+1][j]>b[i+1][j+1])?b[i+1][j]:b[i+1][j+1]);
			}
		}
		cout<<b[0][0]<<endl;
	}
}