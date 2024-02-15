#include<bits/stdc++.h>
using namespace std;

void solve(string s){
    unordered_map<char, int>mp;

    for(int i=0; i<s.size(); i++){
        mp[s[i]]++;
    }

    for(auto itr=mp.begin(); itr!=mp.end(); itr++){
        cout<<itr->first<<" -> "<<itr->second<<endl;
    }
}

int main(){
    string s;
    cin>>s;

    solve(s);

    return 0;
}