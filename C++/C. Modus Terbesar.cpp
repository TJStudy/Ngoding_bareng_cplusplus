#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, ans=0, x;
    cin>>N;
    for (int i = 0;i<N;i++){
        cin>>x;
        ans = max(ans,x);
    }cout<<ans<<endl;
    return 0;
}