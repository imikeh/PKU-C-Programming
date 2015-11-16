#include <iostream>
#include <cstdio>

using namespace std;

int main(){
	int a[10];
	int *p=NULL,*q=NULL,temp;

	for(p=a;p<a+10;p++){
		cin >> *p;
	}

	for(p=a,q=a+9;p<q;p++,q--){
		temp=*p,*p=*q;*q=temp;
	}

	for(p=a;p<a+10;p++){
		cout << *p << " ";
	}

	cout << endl;

	cout << a << endl;

	return 0;
}