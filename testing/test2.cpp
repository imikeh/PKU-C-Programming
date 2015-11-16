#include <iostream>
#include <cstdio>

using namespace std;

int main(){
	int a[3][4]={{1,3,5,7},{9,11,13,15},{17,19,21,23}};
	int *p,(*q)[4],temp;
	int b[10]={1,2,3,4,5,6,7,8,9,10};
	for(p=&a[0][0];p<&a[0][0]+12;p++){
		cout << *p << " ";
	}
	cout << endl;

    cout << a << endl;
	cout << *a << endl;
	cout << *a+1 << endl;
	cout << &a[0][1] << endl;
	q = a;
	cout << *(*(q+1)+2) << endl;
	cout << endl;

	cout << a[0] << endl;
	cout << a[0]+1 << endl;

	cout << "hi" << endl;

	return 0;
