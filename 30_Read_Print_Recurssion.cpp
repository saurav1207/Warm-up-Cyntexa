#include<bits/stdc++.h>
using namespace std;

void solve(int arr[], int n, int x){
    while(x==n){
        break;
    }
    cout<<arr[x]<<" ";
    solve(arr,n,x+1);
}

int main(){
    int n; cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    solve(arr,n,0);

    return 0;
}