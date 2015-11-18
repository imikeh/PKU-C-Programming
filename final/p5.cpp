#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

int count(char (*p)[100], int x,int y, int num, int m, int n){
	int i,j;
	bool temp=false;
	if(p[x][y+1]=='.' && y+1<=n)p[x][y+1]='*',temp=true;
	if(p[x+1][y]=='.' && x+1<=m)p[x+1][y]='*',temp=true;
	if(p[x][y-1]=='.' && y-1>=0)p[x][y-1]='*',temp=true;
	if(p[x-1][y]=='.' && x-1>=0)p[x-1][y]='*',temp=true;

	if(temp==true)return ++num;
	else return num;
}


int count2(char (*p)[100], int x,int y, int num, int m, int n){
	int i,j;
	bool temp=false;
	if(p[x][y]=='*'){
		if(p[x][y+1]=='.' && y+1<=n)p[x][y+1]='*',temp=true;
		if(p[x+1][y]=='.' && x+1<=m)p[x+1][y]='*',temp=true;
		if(p[x][y-1]=='.' && y-1>=0)p[x][y-1]='*',temp=true;
		if(p[x-1][y]=='.' && x-1>=0)p[x-1][y]='*',temp=true;
	}
	if(temp==true)return ++num;
	else return num;
}


int main(){
	int n,m,i,j;
	int x,xx,y,yy; //S(x,y), T(xx,yy)
	cin >> n >> m;
	char a[100][100]; //m=column, n=row

	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			cin >> *(*(a+i)+j);
			if(*(*(a+i)+j)=='S')
				x=i,y=j;
			else if(*(*(a+i)+j)=='T')
				xx=i,yy=j;
		}
	}

	int num=0;(a,x,y,num,m,n);
	cout << num << endl;
	num = count
	num = count(a,1,0,num,m,n);


	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			cout << *(*(a+i)+j) << " ";
		}
		cout << endl;
	}

	while(1){
		for(i=0;i<m;i++){
			for(j=0;j<n;j++){
				num = count(a,i,j,num,m,n);
			}
		}
		if(judge==true)
	}


	return 0;
}