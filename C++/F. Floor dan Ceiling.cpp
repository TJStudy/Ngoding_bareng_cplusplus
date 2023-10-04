#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double N;
    int F,C;
    cin>>N;
    if (N == trunc(N)){
        F = trunc(N);
        C = trunc(N);
    }

    else if (N > 0) {
        F = trunc(N);
        C = F+1;
    }
    else if (N < 0) {
        C = trunc(N);
        F = C-1;
        
    }
    
    cout<<F<<" "<<C;
}