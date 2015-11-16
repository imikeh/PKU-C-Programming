#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

int main()
{

	char a[50][10];
	char b[50][10];
	int num,rank[50];
	double avg,list[50],temp;
	cin >> num >> avg;
	int i,j,k,ans=0;

	for(i=0;i<num;i++){
 		cin >> *(a+i); 
 		cin >> *(b+i); 
  	}
	for(i=0,j=0;i<num;i++){
		if(atof(*(b+i))>avg){
			list[i]=atof(*(b+i));
			rank[j]=i;
			j++;
		}
		else{
			ans++;
		}
  	}

  	if(ans==num){
  		cout << "None.";
  	}
	else{

	    for(i=0;i<num;i++){
    	    for(j=1;j<num-i;j++){
    	    	if(list[j]>list[j-1]){
    	    		temp = list[j];
    				list[j] = list[j-1];
    				list[j-1]= temp;
 	        	}
    		}
    	}

		for(i=0;i<num;i++){
			if(list[i]>0){
				for(j=0;j<num;j++){
					if(list[i]==atof(b[rank[j]]))cout << a[rank[j]];
				}
				cout << fixed << " " << setprecision(1) << list[i] << endl;
			}	
 		}
	}
	
	return 0;
}