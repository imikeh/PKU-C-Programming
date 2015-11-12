#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    int id,id1,id2,id3;
    int N=3,i,j;
    char M;
    float a[100]={0},b[100]={0},c[100]={0},aa[100]={0},bb[100]={0},cc[100]={0},aaa[100]={0},bbb[100]={0},ccc[100]={0};
    float aaaa=0,bbbb=0,cccc=0,aaaaa=0,bbbbb=0,ccccc=0;
    while(N--){
        cin >> id;
        if(id==1){
            cin >> id1;
            for(i=0;i<id1;i++){
                cin >> M;
                if(M=='A'){
                    cin >> a[i];
                    aaaaa = aaaaa + a[i];
                }
                else if(M=='B'){
                    cin >> b[i];
                    aaaaa = aaaaa + b[i];
                }
                else if(M=='C'){
                    cin >> c[i];
                    aaaaa = aaaaa + c[i];
                }     
            }
        }
        else if(id==2){
            cin >> id2;
            for(i=0;i<id2;i++){
                cin >> M;
                if(M=='A'){
                    cin >> aa[i];
                    bbbbb = bbbbb + aa[i];
                }
                else if(M=='B'){
                    cin >> bb[i];
                    bbbbb = bbbbb + bb[i];
                }
                else if(M=='C'){
                    cin >> cc[i];
                    bbbbb = bbbbb + cc[i];
                }     
            }
        }
        else if(id==3){
            cin >> id3;
            for(i=0;i<id3;i++){
                cin >> M;
                if(M=='A'){
                    cin >> aaa[i];
                    ccccc = ccccc + aaa[i];
                }
                else if(M=='B'){
                    cin >> bbb[i];
                    ccccc = ccccc + bbb[i];
                }
                else if(M=='C'){
                    cin >> ccc[i];
                    ccccc = ccccc + ccc[i];
                }     
            }
        }
    }
    printf("1 %.2f\n",aaaaa);
    printf("2 %.2f\n",bbbbb);
    printf("3 %.2f\n",ccccc);

    for(i=0;i<100;i++){
        aaaa = aaaa + a[i]+aa[i]+aaa[i];
        bbbb = bbbb + b[i]+bb[i]+bbb[i];
        cccc = cccc + c[i]+cc[i]+ccc[i];
    }
    printf("A %.2f\nB %.2f\nC %.2f\n",aaaa,bbbb,cccc);
    return 0;
}
