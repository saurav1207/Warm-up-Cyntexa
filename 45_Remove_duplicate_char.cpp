#include <bits/stdc++.h>
using namespace std;

void solve(string s) {
    sort(s.begin(), s.end());

    stack<char> st;
    int n = s.size();
    int i = 0;
    while (i < n) {
        if (st.empty() || st.top() != s[i]) { 
            st.push(s[i]);
        }
        i++;
    }
    string temp = "";
    while (!st.empty()) { 
        char ch = st.top();
        temp += ch;
        st.pop();
    }

    cout << temp << endl;
}

int main() {
    string s;
    cin >> s;

    solve(s);

    return 0;
}
