#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

struct check{
	char ch;
	int count;
};

int main(){

	char a[501],temp;
	cin >> a ;

	int i,j,k=0;

	struct check b[501],first,second;

	for(i=0;a[i]!='\0';i++){
		if ((a[i] >= 'A' && a[i] <= 'Z') || (a[i] >= 'a' && a[i] <= 'z')) {
			if(a[i]>='a')temp = a[i]-32;
			else temp = a[i];
 			bool found = false;
			for(j=0;j<k;j++){
				if(b[j].ch==temp){
					b[j].count++;
					found = true;
				}
			}
			if(!found){
				b[k].ch=temp;
				b[k].count=1; 
				k++;
			}
		}
	}

	first = b[0];
	bool foundsecond = false;
    i = 0;
    while (!foundsecond) {
        if (b[i].count > first.count) {
            second = first;
            first = b[i];
            foundsecond = true;
        }
        else if (b[i].count < first.count) {
        	second = b[i];
            foundsecond = true;
        }
        i++;
    }

    for (; i<k - 1; i++) {
        if (b[i].count > first.count) {
            second = first;
            first = b[i];
        }else if (b[i].count < first.count && b[i].count > second.count) {
            second = b[i];
        }
    }

    printf("%c+%c:%d\n", second.ch, (char)(second.ch + 32), second.count);

	return 0;
}