#include <iostream>
#include <cstdio>

using namespace std;

int main(){

	while(1){
		char a[101];
		char b[101];
		int c[101]={0};
		int i,j,k;
		j=0;
		gets(a);
		for(i=0;a[i]!='\0';i++){
			if(a[i]=='(' || a[i]==')'){
				b[j]=a[i];
				c[j]=i;
				j++;
			}
		}
		i=0;
		while(1){
			if(b[i]==')' && i!=0){
				for(k=i-1;k>=0;k--){
					if(b[k]=='('){
						b[k]=' ';
						b[i]=' ';
						break;
					}
				}
			}
			i++;
			if(i==strlen(b))break;
		}
		j=0;
		cout << a << endl;
		for(i=0;i<strlen(a);i++){
			if(i==c[j]){
				if(b[j]=='('){
					cout << "$";
				}
				else if(b[j]==')'){
					cout << "?";
				}
				else{
					cout << " ";
				}
				j++;
			}
			else{
				cout << " ";
			}
		}
		cout << endl;
	}

	return 0;
}