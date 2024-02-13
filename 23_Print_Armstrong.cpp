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

void solve(int num) {
    int x = 1;
    while (x <= num) {
        int org = x;
        int count = 0;
        int temp = x;
        while (temp) {
            count++;
            temp /= 10;
        }
        temp = org;
        int sum = 0;
        while (temp) {
            int digit = temp % 10;
            sum += power(digit, count);
            temp /= 10;
        }
        if (org == sum) {
            cout << org << " ";
        }
        x++;
    }
}

int main(){
    int num;
    cin>>num;

    solve(num);
    return 0;
}