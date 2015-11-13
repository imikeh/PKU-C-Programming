#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
	
	char a[100];
	char b[100];
	gets(a);

	int i=0,j=0,k,l=0;

	while(1){
		if(a[i]==' '){
			for(k=i-1;k>=l;k--,j++){
				b[j]=a[k];
			}
			b[i]=' ';
			l=i+1;
			j=i+1;
		}
		else if(a[i]=='\0'){
			for(k=i-1;k>=l;k--,j++){
				b[j]=a[k];
			}
			break;		
		}
		i++;
	}
	cout << b << endl;
	return 0;
}