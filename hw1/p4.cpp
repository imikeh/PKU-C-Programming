#include <iostream>
#include <cstdio>
using namespace std;

int main(){
	int y,m,d,leap=0;
	int year,month,day;
	scanf("%d-%d-%d",&y,&m,&d);
	if(y%4==0 && y%100!=0)leap=1;
	if(y%100==0 && y%400==0)leap=1;
	if(d==28 || d==29){
		if(leap==1 && d==28){
			year=y;
			month=m;
			day=d+1;
		}
		else{
			year=y;
			month=m+1;
			day=1;
		}		
	}
	else if(d==30){
		if(m==4 || m==6 || m==9 || m==11){
			year=y;
			month=m+1;
			day=1;
		}
		else{
			year=y;
			month=m;
			day=31;
		}
	}
	else if(d==31){
		if(m==12){
			year=y+1;
			month=1;
			day=1;
		}
		else{
			year=y;
			month=m+1;
			day=1;
		}
	}
	else{
		year=y;
		month=m;
		day=d+1;
	}
	printf("%d-%02d-%02d\n",year,month,day);
    return 0;
}
