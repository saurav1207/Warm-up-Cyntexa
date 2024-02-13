#include <bits/stdc++.h>
using namespace std;

void solve(int &x, int &y){
    int temp=x;
    x = y;
    y = temp;
}

int main(){
    int a, b;
    cin >> a >> b;

    solve(a,b);
    cout<<"After swapping: "<<a<<" "<<b<<endl;

    return 0;
}