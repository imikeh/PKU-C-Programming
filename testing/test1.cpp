#include <iostream>
#include <cstdio>

using namespace std;

int main(){


// char pointer 
	char a[10]="ABCDE";
	char *p;

	p="hello"; 

	cout << p << endl; // print hello not the address of p
	p = a; 
	cout << p << endl; // print ABCDE not the address of a

	cout << *(p+1) << endl; // print 'B'
 	
 	//compare with ++p and p++
	cout << *++p << endl; // print 'B'
	cout << *p++ << endl; // print 'B' not 'C'

	cout << *++p << endl; // Be careful it will print 'D'
	cout << *(p++) << endl; 
	
	int b[3]={1,3,5};
	int *q;
	q=b;
	cout << *q++ << endl;
	cout << *(q=q+1) << endl;
	return 0;
}