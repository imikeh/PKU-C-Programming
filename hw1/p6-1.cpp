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
		for(l=0;l<n;l++){
			for(m=0;m<n;m++){
				if(a[l][m]=='!')a[l][m]='@';
			}
		}
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
                if(a[i][j] == '@'){
                    if(i + 1 <n && a[i + 1][j] == '.')
                        a[i + 1][j]='!';
                    if(j - 1 >= 0 && a[i][j - 1] == '.')
                        a[i][j - 1] = '!';
                    if(j + 1 < n && a[i][j + 1] == '.')
                        a[i][j + 1]='!';
                    if(i - 1 >= 0 && a[i - 1][j] == '.')
                        a[i - 1][j] = '!';
                }				
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