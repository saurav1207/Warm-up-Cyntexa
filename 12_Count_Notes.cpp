#include<bits/stdc++.h>
using namespace std;

void solve(int amount){
    int one=0, two=0, five=0, ten=0, twenty=0, fifty=0, hundred=0, twoHundred=0, fiveHundred=0, twoThousand=0;

    twoThousand = amount / 2000;
    amount %= 2000;

    fiveHundred = amount / 500;
    amount %= 500;

    twoHundred = amount / 200;
    amount %= 200;

    hundred = amount / 100;
    amount %= 100;

    fifty = amount / 50;
    amount %= 50;

    twenty = amount / 20;
    amount %= 20;

    ten = amount / 10;
    amount %= 10;

    five = amount / 5;
    amount %= 5;

    two = amount / 2;
    amount %= 2;

    one = amount;

    cout<<"One:"<<one<<endl;
    cout<<"Two:"<<two<<endl;
    cout<<"Five:"<<five<<endl;
    cout<<"Ten:"<<ten<<endl;
    cout<<"Twenty:"<<twenty<<endl;
    cout<<"Fifty:"<<fifty<<endl;
    cout<<"Hundred:"<<hundred<<endl;
    cout<<"Five Hundred:"<<fiveHundred<<endl;
    cout<<"Two Thousand:"<<twoThousand<<endl;
}
int main(){
    int amount;
    cin>>amount;

    solve(amount);
    return 0;
}