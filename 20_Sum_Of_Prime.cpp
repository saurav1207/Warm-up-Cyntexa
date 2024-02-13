#include<bits/stdc++.h>
using namespace std;

bool isPrime(int a){
    if(a==1) return false;
    for(int i=2; i*i<=a; i++){
        if(a%i==0){
            return false;
        }
    }
    return true;
}

void solve(int n){
    int sum = 0;
    for(int i=1; i<=n; i++){
        if(isPrime(i)){
            sum += i;
        }
    }
    cout<<sum<<endl;
}

int main(){
    int n;
    cin>>n;

    solve(n);
    return 0;
}