#include <stdio.h>
#include <iostream>
using namespace std;
#include <algorithm>
#include <climits>

int main(){
int a,b;
int arr[101];
cin>>a;
for (b=0;a>b;b++){
    cin>>arr[b];
} 
sort(arr,arr+a);
cout<<arr[a-1]<<" "<<arr[0]<<endl;
return 0;
}
