#include <bits/stdc++.h>
using namespace std;

int main() {
    int days;
    cin>>days;

    int day=0, week=0, year=0;

    while(days>=365) {
        year++;
        days-=365;
    }
    while(days>=7) {
        week++;
        days-=7;
    }
    day=days;

    cout<<year<<"/"<<week<<"/"<<day<<endl;

    return 0;
}
