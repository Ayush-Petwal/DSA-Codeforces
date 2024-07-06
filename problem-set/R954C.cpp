#include<bits/stdc++.h>
using namespace std;

string  updateQueries(string s,string c,vector<int>& idx){
    map<int , int> mpp;
    for(auto it : idx)  mpp[it]++;

    sort(c.begin() , c.end());
    int j = 0;
    while(mpp.size()){
        int i = mpp.begin()->first;
        int ifreq = mpp.begin()->second;

        if(ifreq == 1){
            s[i-1] = c[j];
            mpp.erase(i);
            j++;
        }
        else{
            int sz = c.size();
            s[i-1] = c[sz - 1];
            c.pop_back();
            mpp[i]--;
        }
    }
    return s;
}
void solve(){
    int n , m;
    cin >> n >> m;
    string s;
    cin >> s;
    vector<int> idx(m);
    for(int i = 0; i < m; i++)  cin >> idx[i];
    string c;
    cin >> c;
    string ans = updateQueries(s , c, idx);
    cout<<ans<<endl;
}
int main(){

    int t;
    cin>>t;
    while (t--){
        solve();
    }
    return 0;
}