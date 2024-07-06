#include<bits/stdc++.h>
using namespace std;

const int MXN = 1e5 + 5 , INF = 1e9 + 5;
const int mod = 1000000007;

#define ll  long long
#define sz(x) (int)(x).size()

#define fi first
#define se second

#define mp make_pair
#define pair pair<int,int>
#define map  map<int,int>
#define umap unordered_map<int ,int>

#define all(x) (x).begin(), (x).end()
#define sort(v) sort(all(v))
#define reverse(v) reverse(all(v))

#define vi  vector<ll>
#define vvi vector<vi>
#define pb push_back
#define pob pop_back


void solve(){
    int n;
    cin >> n;
    vi A(n);
    for(int i = 0; i < n; i++)
        cin >> A[i];
    
    ll mx = -1;
    ll prefSum = 0;
    ll count = 0;
    for(int i = 0; i < n; i++){
        prefSum += A[i];
        mx = max(mx , A[i]);
        if(prefSum - mx == mx)
            count++;
    }
    cout<<count<<endl;
}

signed main(){

    int t;
    cin>>t;
    while (t--){
        solve();
    }
}