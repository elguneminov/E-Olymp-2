#include<bits/stdc++.h>
using namespace std;
int main() {
    int a, k, s;
    cin >> a >> k;
    s = 1 << k;
    cout << (a  & ( ~s ));
    return 0;
}
