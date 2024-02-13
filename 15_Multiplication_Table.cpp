#include<bits/stdc++.h>
using namespace std;

void solve(int num){
    for(int i=1; i<=10; i++){
        cout<<num<<" X "<<i<<" = "<<num*i<<endl;
    }
}
int main(){
    int num;
    cin>>num;

    solve(num);

    return 0;
}