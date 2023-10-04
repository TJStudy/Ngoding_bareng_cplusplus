#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,x;
    int count=0;
    cin>>a;
    for (int n=0;n<a;n++){
        cin>>x;
        for(int j=1;j<=a;j++){
            if(x%j==0){
                count++;
                cout<<count<<endl;
                
            }if (count==4){
                    cout<<"BUKAN"<<endl;
                    break;}
             else {cout<<"YA"<<endl;
                 break;
             }
        }
    }
}