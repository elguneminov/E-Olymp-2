#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
    int n, i;
    cin >> n;
    int aa[n];
    for(i = 0; i < n; i++)
        cin >> aa[i];
    sort(aa, aa + n, greater<int>());
    for(i = 0; i < n; i++)
        cout << aa[i] << " ";
    return 0;
}
