#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main(){
	int n;
	cin >> n;
	while(1){
		if(n==1){
			cout << "End" << endl;
			break;
		}		
		if(n%2==0){
			printf("%d/2=%d\n",n,n/2);
			n=n/2;
		}else{
			printf("%d*3+1=%d\n",n,n*3+1);
			n=n*3+1;
		}
	}
    return 0;
}
