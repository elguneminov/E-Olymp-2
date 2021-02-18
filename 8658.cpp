#include<bits/stdc++.h>
using namespace std;

int main() {
    long long i, n, total = 0;
    cin >> n;
    total += n - 1;
    total += (n * (n + 1)) / 2;
    cout << total;
    return 0;
}
