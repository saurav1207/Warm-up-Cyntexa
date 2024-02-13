#include<bits/stdc++.h>
using namespace std;

void solve(char ch){
    if(ch>='a' && ch<='z'){
        cout<<"Character is lower case"<<endl;
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
            cout<<"And it is vowel"<<endl;
        }
        else{
            cout<<"And it is consonant"<<endl;
        }
    }
    else if(ch>='A' && ch<='Z'){
        cout<<"Character is upper case"<<endl;
        if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'){
            cout<<"And it is vowel"<<endl;
        }
        else{
            cout<<"And it is consonant"<<endl;
        }
    }
}
int main(){
    char ch; 
    cin>>ch;

    solve(ch);
    return 0;
}