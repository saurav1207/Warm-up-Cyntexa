#include <iostream>
using namespace std;

void solve(int N) {
    int maxGap = 0;
    int currGap = 0;
    bool cntZeros = false;

    while ((N & 1) == 0) {
        N >>= 1;
    }

    while (N > 0) {
        if ((N & 1) == 0) {
            currGap++;
        } else {
            maxGap = max(maxGap, currGap);
            currGap = 0;
        }
        N >>= 1;
    }

    cout<<maxGap;
}

int main() {
    int n; cin>>n;

    solve(n);

    return 0;
}
