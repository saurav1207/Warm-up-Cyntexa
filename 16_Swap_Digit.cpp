#include<bits/stdc++.h>
using namespace std;

void solve(int num){
    vector<int> v;
    while(num){
        int digit = num % 10;
        v.push_back(digit);
        num /= 10; 
    }

    reverse(v.begin(), v.end());

    int temp = v[0];
    v[0] = v.back();
    v.back() = temp;

    int number = 0;
    for(int i = 0; i < v.size(); i++){
        number = number * 10 + v[i];
    }

    cout << number << endl;
}

int main(){
    int num;
    cin >> num;

    solve(num);

    return 0;
}
