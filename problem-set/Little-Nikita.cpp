#include<bits/stdc++.h>
using namespace std;
void canBuildTower(int& n, int& m){
    if(n < m){
        cout<<"NO"<<endl;
        return;
    }
    n -= m;
    cout<< (n & 1 ? "NO" : "YES") <<endl;
}
void solve(){
    int n , m;
    cin >> n >> m;

    canBuildTower(n , m);
    
}
int main(){
    
    int t;
    cin>>t;
    while (t--){
        solve();
    }

    return 0;
}