#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

int main(){

	int k,m,i;

	char a[6];

	cin >> a >> k ;
	int ans=0;
	for(i=0;i<6;i++){
		if(*(a+i)=='3')ans++;
	}
	m = atoi(a);
	if(m%19==0 && ans==k)cout << "YES" << endl;
	else cout << "NO" << endl;

	return 0;
}