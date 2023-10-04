#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

bool prima(int n){
    bool prima=true;
    if (n==2 || n==3) prima=true;
    else if (n<=1) prima=false;
    else if (n%2==0) prima=false;
    else {
        for (int i=3;i<= (sqrt(n)+1);i+=2){
            if (n%i==0) {
                prima = false;
                break;
            }
        }
    }return prima;}

int main()
{   int a,n;
    cin>>a;
    for (int x=0;x<a;x++)
    {
        cin>>n;
        if (prima(n))
        cout<<"YA"<<endl;
        else cout<<"BUKAN"<<endl;
    }
    
}