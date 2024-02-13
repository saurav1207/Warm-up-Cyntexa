#include<bits/stdc++.h>
using namespace std;

int solve(int a, int b){
    if(b==0) return a;
    if(a==0) return b;

    while(a!=b){
        if(a>b){
            a=a-b;
        }else{
            b=b-a;
        }
    }

    return a;
}

int main(){
    int a, b; cin>>a>>b;

    cout<<solve(a,b);
    return 0;
}