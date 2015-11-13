#include <iostream>

using namespace std;

int main()
{
	int pair,m,n,k=0,l;
	int b[100];
	cin >> pair;
	l=pair;
	while(pair--){
		int i,j,ans=0;
		cin >> m >> n;
		int a[m][n];
		for(i=0;i<m;i++)
			for(j=0;j<n;j++)
				cin >> a[i][j];

		for(i=0;i<m;i++){
			for(j=0;j<n;j++){
				if(i==0 && j<n)ans=ans+a[i][j];
				else if(i==m-1 && j<n)ans=ans+a[i][j];
				else if(i>0 && i<m-1 && j==0)ans=ans+a[i][j];
				else if(i>0 && i<m-1 && j==n-1)ans=ans+a[i][j];
			}
		}
		b[k]=ans;
		k++;
	}

	for(int i=0;i<l;i++)
		cout << b[i] << endl;

	return 0;
}