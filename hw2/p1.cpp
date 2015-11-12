#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main(){
	char a[501],temp;
	int i=0,j,k; 
	gets(a);
	while(a[i]){
		while(a[i]==' ')i++;
		if(!a[i])break;
		j=i;
		while(a[j]!=' ' && a[j])j++;
		for(k=i;k<(i+j)/2;k++){
			temp = a[k];
			a[k]=a[j-1+i-k];
			a[j-1+i-k]=temp;
		}		
		i=j;
	}
	cout << a << endl;
    return 0;
}
