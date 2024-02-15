#include<bits/stdc++.h>
using namespace std;

void solve(string s){
    string temp = "";
    int count = 0;
    for(int i=0; i<s.size()-1; i++){
        if(s[i]!=' '){
            temp += s[i];
        }
        else if(!temp.empty()){
            count++;
            temp = "";
        }
    }
    if(!temp.empty()){
        count++;
    }

    cout<<count<<endl;
}
int main(){
    string s;
    getline(cin,s);

    solve(s);
    return 0;
}