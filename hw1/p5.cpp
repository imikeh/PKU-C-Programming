#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;


int main(){
	int n,a,b,i;
	int c[100];
	double rate[100];
	cin >> n;
	for(i=0;i<n;i++){
		cin >> c[i];
		cin >> a;
		cin >> b;
		rate[i]=(double)b/a;
	}

	for (int i = 0; i < n; i++) {
    	for (int j = 0; j < n - i - 1; j++) {
       		if(rate[j + 1] > rate[j]) {
         		int tmpid = c[j];
         		c[j] = c[j + 1];
         		c[j + 1] = tmpid;
         		double tmprate = rate[j];
         		rate[j] = rate[j + 1];
         		rate[j + 1] = tmprate;
       		}
     	}
  	}  

  	double max=0;
	int min=0;

	for(i=0;i<n-1;i++){
		double diff = rate[i]-rate[i+1];
		if(max<diff){
			max=diff;
			min = i;
		}
	}

	cout << min + 1 << endl;
	for(i=min;i>=0;i--)
		cout << c[i] << endl;	

	cout << n - min -1 << endl;
	for(i=n-1;i>=min+1;i--)
		cout << c[i] << endl;

	return 0;
}