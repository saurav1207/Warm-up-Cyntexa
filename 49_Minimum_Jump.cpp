#include<bits/stdc++.h>
using namespace std;

void solve(int x, int y, int d){
    int count = 0;
    while(x <= y){
        x = x + d;
        count++;
    }
    cout<<count;
}

int main(){
    int x,y,d;
    cin>>x>>y>>d;

    solve(x,y,d);
    return 0;
}