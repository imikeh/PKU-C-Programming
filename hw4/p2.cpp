#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

int main(){
	int n,i,j;
	cin >> n;
	char a[n][256];
	for(i=0;i<n;++i){
			cin >> *(a+i);
	}

	char (*p)[256];
	p=a;
	for(i=0;i<n;++i){
		for(j=0;j<255;j++){
			if(*(*(a+i)+j)=='A')*(*(p+i)+j)='T';
			else if(a[i][j]=='T')a[i][j]='A';
			else if(a[i][j]=='G')a[i][j]='C';
			else if(a[i][j]=='C')a[i][j]='G';
		}
	}

	for(i=0;i<n;++i){
		cout << *(a+i) << endl;
	}

	return 0;
}