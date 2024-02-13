#include<bits/stdc++.h>
using namespace std;

void solve(int num){
    unordered_map<int,int>mp;
    while(num){
        int digit = num % 10;
        mp[digit]++;
        num /= 10;
    }

    for(auto itr : mp){
        cout<<itr.first<<" -> "<<itr.second<<" times"<<endl;
    }
}

int main(){
    long long num; cin>>num;

    solve(num);

    return 0;
}