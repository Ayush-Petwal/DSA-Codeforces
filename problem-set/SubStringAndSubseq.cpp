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

#define vi  vector<int>
#define vvi vector<vi>
#define pb push_back
#define pob pop_back

// bool isSub(string &a, string &b) {
//     int m = a.length(), n = b.length();
//     int j = 0;  
//     for (int i = 0; i < m && j < n; i++)
//         if (a[i] == b[j])
//             j++;
//     return (j == n);
// }
 
void solve() {
    string a, b;
    cin >> a >> b;
    int mini = a.length() + b.length();
    for (int i = 0; i < b.length(); ++i) {
        int ind = i;
        for (int j = 0; j < a.length(); ++j) {
            if(ind < sz(b) && a[j] == b[ind])   ind++;
        }
        mini = min(mini , sz(a) + sz(b) - ind + i);
    }
    cout << mini << endl;
}

// void solve(){
//     string a , b;
//     cin >> a >> b;
//     string ans ;
//     vi freqArray(25 , 0);
//     for(auto c : a) freqArray[c - 'a']++;
//     int i = 0 ;
//     while(i < sz(b)){
//         if(freqArray[b[i] - 'a'] == 0)
//             ans.pb(b[i]);
//         if(freqArray[b[i] - 'a'] != 0) freqArray[b[i] - 'a'] --; 

//         i++;
//     }
//     i = 0;
//     while(i < sz(a)){
//         ans.pb(a[i]);
//         i++;
//     }    
//     cout<< sz(ans) <<endl; 
// }

signed main(){

    int t;
    cin>>t;
    while (t--){
        solve();
    }
}