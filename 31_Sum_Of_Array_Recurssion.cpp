#include<bits/stdc++.h>
using namespace std;

void solve(int arr[], int n, int x, int sum){
    while(x==n){
        cout << sum;
        break;
    }
    sum += arr[x];
    solve(arr,n,x+1,sum);
}

int main(){
    int n; cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    solve(arr,n,0,0);

    return 0;
}