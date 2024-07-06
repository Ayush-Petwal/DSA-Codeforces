#include<bits/stdc++.h>
using namespace std;

void solve(){
    long long n;
    cin>>n;
    vector<long long> a(n);
    vector<long long> b(n);
    for(long long i = 0;i < n; i++)  cin>>a[i];
    for(long long i = 0;i < n; i++)  cin>>b[i];

    long long A = 0, B = 0, plus = 0 , minus = 0;
    for(long long i = 0; i < n; i++){
        if(a[i] > b[i])
            A += a[i];
        else if(a[i] < b[i])
            B += b[i];
        else{
            if(a[i] == 1)   plus++;
            else if(a[i] == -1) minus++;
        }
    }
    while(minus--){
        if(A > B)   A--;
        else B--;
    }
    while(plus--){
        if(A < B)   A++;
        else    B++;
    }

    int res = min(A , B);
    cout<<res<<endl;
}
int main(){
    int t;
    cin>>t;
    while (t--){
        solve();
    }
    return 0;
}