#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main(){
	int n,d,i,j,k,l,m,ans=0;
	cin >> n;
	char a[n][n];
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			cin >> a[i][j];
		}
	}

	cin >> d;

	for(k=0;k<d;k++){
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
					if(a[i][j]=='@' && i>=1 && j>=1 && i<n-1 && j<n-1){
						if(a[i-1][j]=='.')a[i-1][j]='!';
						else if(a[i+1][j]=='.')a[i+1][j]='!';
						else if(a[i][j-1]=='.')a[i][j-1]='!';
						else if(a[i][j+1]=='.')a[i][j+1]='!';
					}
					else if(a[i][j]=='@' && i==0 && j>0 && j<n-1){
						if(a[i+1][j]=='.')a[i+1][j]='!';
						else if(a[i][j-1]=='.')a[i][j-1]='!';
						else if(a[i][j+1]=='.')a[i][j+1]='!';		
					}
					else if(a[i][j]=='@' && i==n-1 && j>0 && j<n-1){
						if(a[i-1][j]=='.')a[i-1][j]='!';
						else if(a[i][j-1]=='.')a[i][j-1]='!';
						else if(a[i][j+1]=='.')a[i][j+1]='!';
					}
					else if(a[i][j]=='@' && j==0 && i>0 && i<n-1){
						if(a[i-1][j]=='.')a[i-1][j]='!';
						else if(a[i+1][j]=='.')a[i+1][j]='!';
						else if(a[i][j+1]=='.')a[i][j+1]='!';
					}
					else if(a[i][j]=='@' && j==n-1 && i>0 && i<n-1){
						if(a[i-1][j]=='.')a[i-1][j]='!';
						else if(a[i+1][j]=='.')a[i+1][j]='!';
						else if(a[i][j-1]=='.')a[i][j-1]='!';
					}
					else if(a[i][j]=='@' && i==0 && j==0){
						if(a[i+1][j]=='.')a[i+1][j]='!';
						else if(a[i][j+1]=='.')a[i][j+1]='!';
					}
					else if(a[i][j]=='@' && i==n-1 && j==0){
						if(a[i-1][j]=='.')a[i-1][j]='!';
						else if(a[i][j+1]=='.')a[i][j+1]='!';
					}
					else if(a[i][j]=='@' && i==0 && j==n-1){
						if(a[i+1][j]=='.')a[i+1][j]='!';
						else if(a[i][j-1]=='.')a[i][j-1]='!';
					}
					else if(a[i][j]=='@' && i==n-1 && j==n-1){
						if(a[i-1][j]=='.')a[i-1][j]='!';
						else if(a[i][j-1]=='.')a[i][j-1]='!';
					}					
			}
		}
		for(l=0;l<n;l++){
			for(m=0;m<n;m++){
				if(a[l][m]=='!')a[l][m]='@';
			}
		}
	}
	for(l=0;l<n;l++){
		for(m=0;m<n;m++){
			if(a[l][m]=='@')ans++;
		}
	}
	cout << ans << endl;

	return 0;
}