#include <bits/stdc++.h>
using namespace std;

int solve(int x, int y){
    if (y == 0){
        return 1;
    }
    int ans = 1;
    for (int i = 0; i < y; i++){
        ans *= x;
    }
    return ans;
}

int main(){
    int x, y;
    cin >> x >> y;

    // cout<<pow(x,y);

    cout << solve(x, y);
    return 0;
}