#include<bits/stdc++.h>
using namespace std;

void isBeautiful(vector<int>& arr , int n){
    /*set<int> st(arr.begin() , arr.end());
    int loopTime = 2;
    while(loopTime--){
        int val = *st.begin();
        for(auto it : st){
            if(it % val == 0)
                st.erase(it);
        }
    }
    if(!st.size()){
        cout<<"YES"<<endl;
        return;
    }
    else{
        cout<<"NO"<<endl;
        return;
    } */
   sort(arr.begin() , arr.end());
   vector<int> arr2;

   for(int i = 0; i < n; i++){
    if(arr[i] % arr[0] != 0)
        arr2.push_back(arr[i]);
   }
   bool good = true;
   for(int i = 0; i < arr2.size(); i++){
    if(arr2[i] % arr2[0] != 0)
        good = false;
   }
   cout<<(good ? "YES" : "NO") <<endl;
   return;
}
void solve(){
    int n;
    cin>>n;
    vector<int> Arr(n);
    for(auto &a : Arr)
        cin >> a;
    isBeautiful(Arr , n);
}
int main(){
    
    int t;
    cin>>t;
    while (t--){
        solve();
    }
    return 0;
}