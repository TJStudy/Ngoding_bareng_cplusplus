#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

int main(){

cin.clear();
int arr[100];
int n=0;

while (cin >> arr[n]){
n++;
}
for (int a=n-1;a>=0;a--){
    cout<<arr[a]<<endl;
    
}
return 0;
}