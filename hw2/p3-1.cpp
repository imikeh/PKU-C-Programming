#include <iostream>
#include <cstdio>

using namespace std;

int main(){

	char a[101];
	char boy,temp;
	scanf("%c",&boy);
	int bottom=0,num=0;
	a[0]=0;
	while(scanf("%c",&temp)!=EOF){
		if(temp==boy){
			bottom++;
			num++;
			a[bottom]=num;
		}
		else{
			num++;
			printf("%d %d\n",a[bottom],num);
			bottom--;
			if(bottom<0)break;
		}
	}

	return 0;
}