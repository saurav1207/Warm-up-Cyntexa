#include<bits/stdc++.h>
using namespace std;


void solve(string s){
    vector<string>vs;
    string temp="";
    for(int i=0; i<s.size()-1; i++){
        if(s[i]!=' '){
            temp+=s[i];
        }
        else if(!temp.empty()){
            vs.push_back(temp);
            temp="";
        }
    }
    if(!temp.empty()){
        vs.push_back(temp);
    }

    for(int i=0; i<vs.size(); i++){
        reverse(vs[i].begin(), vs[i].end());
        cout<<vs[i]<<" ";
    }
}

int main(){
    string s;
    getline(cin, s);

    solve(s);

    return 0;
}