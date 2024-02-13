#include <bits/stdc++.h>
using namespace std;

void solve(int x, int y){
    x = x ^ y;
    y = x ^ y;
    x = x ^ y;

    cout<<"After swapping: "<<x<<" "<<y<<endl;
}

int main(){
    int a, b;
    cin >> a >> b;

    solve(a,b);

    return 0;
}