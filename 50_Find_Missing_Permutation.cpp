#include<bits/stdc++.h>
using namespace std;

void solve(int arr[], int n){
    sort(arr, arr + n);
    for (int i=0; i<n; i++){
        if (arr[i]!=i+1){
            cout<<i+1<<endl;
            break;
        }
    }
}

int main() {
    int n; 
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];

    solve(arr, n);

    return 0;
}
