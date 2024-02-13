#include<bits/stdc++.h>
using namespace std;

int power(int x, int y){
    if (y == 0){
        return 1;
    }
    int ans = 1;
    for (int i = 0; i < y; i++){
        ans*=x;
    }
    return ans;
}

bool solve(int num){
    int org = num;
    int count = 0;
    while(num){
        count++;
        num/=10;
    }

    num = org;
    int sum = 0;
    while(num){
        int digit = num % 10;
        sum += power(digit, count);
        num/=10;
    }

    if(org == sum){
        return true;
    }else{
        return false;
    }
}
int main(){
    int num;
    cin>>num;

    cout<<solve(num);
    return 0;
}