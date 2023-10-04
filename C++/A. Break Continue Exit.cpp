#include <stdio.h>
#include <iostream>
using namespace std;
#include <algorithm>
#include <climits>

int main(){
    int n;
    cin>>n;
    for (int i=1;i<=n;i++){
        if (i>41) {
            cout<<"ERROR";
            break;}
        if (i%10==0){
            continue;
        }
        else cout<<i<<endl;
    }
}