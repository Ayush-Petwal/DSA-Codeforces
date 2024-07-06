#include<bits/stdc++.h>
using namespace std;

const int MXN = 1e5 + 5 , INF = 1e9 + 5;
const int mod = 1000000007;

#define ll  long long;
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

#define vi  vector<long long>
#define vvi vector<vi>
#define pb push_back
#define pob pop_back

int memo(int idx ,vi& cards , int n , int l , int r , vi& prefixSum ,vi& dp){
    if(idx == n)    return 0;
    if(dp[idx] != -1)   return dp[idx];

    int start = idx , end = n - 1;
    int reqInd = -1;
    while(start <= end){
        int mid = (start + end + 1) / 2;
        if(prefixSum[mid + 1] - prefixSum[idx] >= l){
            end = mid - 1;
            reqInd = mid; 
        }
        else    start = mid + 1;
    }

    if(reqInd != -1 && prefixSum[reqInd + 1] - prefixSum[idx] <= r){
        return dp[idx] = max(1 + memo(reqInd + 1 ,cards ,n ,l , r ,prefixSum , dp) , memo(idx + 1 ,cards ,n ,l , r ,prefixSum , dp));
    }    
    return dp[idx] = memo(idx + 1 ,cards ,n ,l , r ,prefixSum , dp);
}
int boringDay(vi& cards, int n , int l , int r){
    vi dp(n , -1);
    vi prefixSum(n+1);
    prefixSum[0] = 0;
    for(int i = 1; i <= n; i++) prefixSum[i] = prefixSum[i-1] + cards[i-1];
    return memo(0 , cards , n , l , r , prefixSum , dp);
}
void solve(){
    int n , l , r;
    cin >> n >> l >> r;
    vi cards(n);
    for(int i = 0; i < n; i++)  cin>>cards[i];
    cout<<boringDay(cards, n , l , r)<<endl;
}

signed main(){

    int t;
    cin>>t;
    while (t--){
        solve();
    }
}