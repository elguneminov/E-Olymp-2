/* 
 * Author: MURAD HAJIYEV
 * Problem: https://www.e-olymp.com/en/problems/5088
 * Created on April 13, 2020, 1:10 AM
 */

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char** argv) {
    
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int n, k, src, dest, count = 0;
    
    cin >> n >> k;
    
    int vertex[n+1];
    memset(vertex,0,sizeof(vertex));
    
    for(int i = 1 ; i <= k ; i++) {
        cin >> src >> dest;
        vertex[src]++;
        vertex[dest]++;
    }
    
    for(int i = 0 ; i <= n ; i++)
        if(vertex[i] == 1)
            count++;
    
    cout << count;
    
    return 0;
}