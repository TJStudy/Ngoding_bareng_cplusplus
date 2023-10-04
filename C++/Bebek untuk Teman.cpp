#include <iostream>
using namespace std;

int main()
{   int sisa,n,m,hasil;
    cin>>n>>m;
    sisa = n % m;

    hasil = n / m;
    
    
    cout<<"masing-masing " <<hasil <<endl;
    cout<<"bersisa "<< sisa;

    return 0;
}