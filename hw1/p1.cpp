#include <iostream>
using namespace std;

int main(){
    int N;
    cin >> N; 
    int arr[N];
    for(int i=0;i<N;i++){
        cin >> arr[i];
    }
    int YN = 0;
    for(int j=0;j<N;j++){
        if(arr[j]==j){
            cout << j << endl;
            YN = 1;
            break;
        }
    }
    if(YN==0)
        cout << "N" << endl;
    
    return 0;
}
