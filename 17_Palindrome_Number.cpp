#include<bits/stdc++.h>
using namespace std;

bool solve(int num){
    int org = num; 
    int rev = 0;
    while(num){
        int digit = num % 10;
        rev = rev * 10 + digit;
        num /= 10;
    }

    if(org == rev){
        return true;
    }else{
        return false;
    }
}

int main(){
    int num; cin>>num;

    cout<<solve(num);

    return 0;
}