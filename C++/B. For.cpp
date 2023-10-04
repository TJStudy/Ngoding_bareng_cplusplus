#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int N,B;
    int hasil = 0;
    N = 4;
    B = 0;
    for (int i=1;i<=N;i++){
        cin>>B;
        hasil = hasil + B;
    }
    hasil = hasil/4;
    cout<<"Hasil Rata rata nilai kelas adalah : "<<hasil;
}
