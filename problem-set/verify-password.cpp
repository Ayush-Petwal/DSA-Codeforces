#include<bits/stdc++.h>
using namespace std;

void verifyPassword(int n, string& s){
    string temp = s;
    int lastNoIdx = -1;
    int firstCharIdx = -1;
    for(int i = 0; i < n; i++){
        if(s[i] >= 0 && s[i] <= 9){
            lastNoIdx = i;
        }
    }
    for(int i = n - 1; i >= 0; i--){
        if(!(s[i] >= 0 && s[i] <= 9))
            firstCharIdx = i;
    }

    if(firstCharIdx < lastNoIdx){
        cout<<"NO"<<endl;
        return;
    }
    if(lastNoIdx != -1) sort(s.begin() , s.begin() + lastNoIdx);
    if(firstCharIdx != -1) sort(s.begin() + firstCharIdx , s.end());

    temp == s ? cout<<"YES" : cout<<"NO";
    return; 
}
void solve(){
   int n;
   cin>>n;
   string s;
   cin>>s;
   verifyPassword(n , s);
}
int main(){  
    int t;
    cin>>t;
    while (t--){
        solve();
    }
    return 0;
}