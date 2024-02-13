#include <bits/stdc++.h>
using namespace std;

void solve(int a, int b, int c, int d){
    int maxi = a, secondMaxi=INT_MIN;
    if(b > maxi){
        secondMaxi = maxi;
        maxi = b;
    }
    if(c > maxi){   
        secondMaxi = maxi;  
        maxi = c;
    }
    if(d > maxi){  
        secondMaxi = maxi;
        maxi = d;
    }

    cout<<maxi<<" "<<secondMaxi<<endl;
}

int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;

    solve(a,b,c,d);

    return 0;
}