#include <iostream>
#include <math.h>
using namespace std;

int main(){
int a,b;
cin>>a;
for (b=1;a>=b;b++){
    if (a%b==0)cout<<a/b<<endl;
}
return 0;
}
