#include<bits/stdc++.h>
#include<algorithm>
int max(int n)
{
    int say = 0;
    while(n != 0)
    {
        if(n % 10 == 0)
            say++;
        else
            break;
        n /= 10;
    }
    return say;
}
using namespace std;
int main()
{
    int n, i, maximum = 0, maxnum;
    cin >> n;
    int aa[n];
    for(i = 0; i < n; i++)
        cin >> aa[i];
    sort(aa, aa + n);
    maxnum = aa[0];
    for(i = 0; i < n; i++)
    {
        if(max(aa[i]) > maximum)
        {
            maximum = max(aa[i]);
            maxnum = aa[i];
        }
    }
    cout << maxnum;
    return 0;
}
