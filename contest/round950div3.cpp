#include<bits/stdc++.h>
using namespace std;

int noOfMoreProblemNeed(int n,int m,string& s){
    int res = 0;
    unordered_map<char , int> freqMap;
    for(auto ch : s){
        freqMap[ch]++;
    }
    for(int i = 0; i < 7; i++){
        int ch = 'A' + i;
        if(freqMap.find(ch) == freqMap.end()){
            freqMap[ch] = 0;
        }
    }
    for(auto it : freqMap){
        if(it.second < m){
            res += (m - it.second);
        }
    }
    return res;
}
int main(){
    //Write your code here.
    // int noOfTestCase ;
    // cin>> noOfTestCase;

        int n , m;
        cin>> n >> m;
        string s;
        cin>>s;
        cout<<noOfMoreProblemNeed(n , m , s)<<endl;

    return 0;
}