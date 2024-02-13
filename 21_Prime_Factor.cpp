#include<bits/stdc++.h>
using namespace std;

void solve(int num){
    for(int i = 2; i * i <= num; i++){
        while(num % i == 0){
            cout<<i<<" ";
            num /= i;
        }
    }
    cout<<num<<" ";
}

int main(){
    int num;
    cin >> num;

    solve(num);

    return 0;
}
