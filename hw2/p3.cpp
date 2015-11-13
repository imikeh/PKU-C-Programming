#include <iostream>
#include <cstdio>

using namespace std;

int main(){
	char a[101];
	gets(a);
	int i=0,j,k,l,m,n;

	if(a[0]=='('){
		for(i=0;a[i]!='\0';i++){
			if(a[i]==')'){
				for(m=i-1;m>=0;m--){
					if(a[m]=='('){
						cout << m << " " << i << endl;
						a[m]=' ';
						break;
					}
				}
			}	
		}
	}
	else{
		for(i=0;a[i]!='\0';i++){
			if(a[i]=='('){
				for(m=i-1;m>=0;m--){
					if(a[m]==')'){
						cout << m << " " << i << endl;
						a[m]=' ';
						break;
					}
				}
			}	
		}

	}

    return 0;
}
