#include <iostream>
#include <cstdio>

using namespace std;

int main(){
	int a[100][100];
	int n,m;
	cin >> n >> m;
	int i,j,k;
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			cin >> a[i][j];

	for(k=0;k<(m+n-1);k++){
		for(i=0;i<=k;i++){
			j=k-i;
			if(i < n && j < m)
				printf("%d\n",a[i][j]);
		}
	}
	return 0;
}