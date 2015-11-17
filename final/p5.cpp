#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

int main(){
	int m,n,i,j;
	cin >> m >> n;
	int a[m][n];
	int b[m][n];
	for(i=0;i<m;++i)
		for(j=0;j<n;j++)
			cin >> *(*(a+i)+j);

	for(i=0;i<m;++i){
		for(j=0;j<n;j++){
			if(i==0 && j==0){
				if(*(*(a+i)+j) >= *(*(a+i)+j+1) && *(*(a+i)+j) >= *(*(a+i+1)+j))*(*(b+i)+j)=1;
			}
			else if(i>0 && i<m-1 && j==0){
				if(*(*(a+i)+j) >= *(*(a+i-1)+j) && *(*(a+i)+j) >= *(*(a+i)+j+1) && *(*(a+i)+j) >= *(*(a+i+1)+j))*(*(b+i)+j)=1;
			}
			else if(i==m-1 && j==0){
				if(*(*(a+i)+j) >= *(*(a+i-1)+j) &&  *(*(a+i)+j) >= *(*(a+i)+j+1))*(*(b+i)+j)=1;
			}
			else if(i==m-1 && j>0 && j<n-1){
				if(*(*(a+i)+j) >= *(*(a+i-1)+j) &&  *(*(a+i)+j) >= *(*(a+i)+j+1) &&  *(*(a+i)+j) >= *(*(a+i)+j-1))*(*(b+i)+j)=1;
			}
			else if(i==m-1 && j==n-1){
				if(*(*(a+i)+j) >= *(*(a+i-1)+j) &&  *(*(a+i)+j) >= *(*(a+i)+j-1))*(*(b+i)+j)=1;
			}
			else if(i>0 && i<m-1 && j==n-1){
				if(*(*(a+i)+j) >= *(*(a+i-1)+j) &&  *(*(a+i)+j) >= *(*(a+i+1)+j) &&  *(*(a+i)+j) >= *(*(a+i)+j-1))*(*(b+i)+j)=1;
			}
			else if(i==0 && j==n-1){
				if(*(*(a+i)+j) >= *(*(a+i+1)+j) &&  *(*(a+i)+j) >= *(*(a+i)+j-1))*(*(b+i)+j)=1;
			}
			else if(i==0 && j>0 && j<n-1){
				if(*(*(a+i)+j) >= *(*(a+i)+j+1) &&  *(*(a+i)+j) >= *(*(a+i)+j-1) &&  *(*(a+i)+j) >= *(*(a+i+1)+j))*(*(b+i)+j)=1;
			}
			else if(*(*(a+i)+j) >= *(*(a+i)+j+1) &&  *(*(a+i)+j) >= *(*(a+i)+j-1) && *(*(a+i)+j) >= *(*(a+i+1)+j) && *(*(a+i)+j) >= *(*(a+i-1)+j))*(*(b+i)+j)=1;
		}
	}

	for(i=0;i<m;++i){
		for(j=0;j<n;j++){
			if(*(*(b+i)+j)==1){
				cout << i << " " << j << endl;
			}
		}
	}


	return 0;
}