#include<bits/stdc++.h>
using namespace std;

void solve(string s){
    string temp=""; 
    string ans = ""; 
    for(int i=0; i<s.size(); i++){
        if(s[i]!=' '){
            temp+=s[i];
        }else if(!temp.empty()){
            ans+=temp;
            temp="";
        }
    }
    if(!temp.empty()){
        ans += temp;
    }
    int ch[26] = {0}; 
    int maxi = 0;
    for(int i=0; i<ans.size(); i++){ 
        if(isalpha(ans[i])){ 
            ch[tolower(ans[i])-'a']++; 
        }
    }

    for(int i=0; i<26; i++){
        maxi = max(maxi, ch[i]); 
    }

    cout<<maxi<<endl;
}

int main(){
    string s;
    getline(cin,s);

    solve(s);

    return 0;
}
