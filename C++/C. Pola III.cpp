#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int N,X;
    X=0;
    cin>>N;
    for (int i=1;i<=N;i++){
        for (int j=0;j<i;j++){
            
            cout<<X;
            X++;
            if (X == 10){
                X=0;
                
            }
            }cout<<endl;
    }
}