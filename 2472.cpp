/* 
 * Author: MURAD HAJIYEV
 * Problem: https://www.e-olymp.com/en/problems/2472
 * Created on April 13, 2020, 2:27 AM
 */

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char** argv) {
    
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int n, k, operation, src, dest, v;
    
    cin >> n >> k;
    
    vector<vector<int>> adj(n+1);
    
    for(int i = 0 ; i < k ; i++) {
        cin >> operation;
        if(operation == 1) {
            cin >> src >> dest;
            adj[src].push_back(dest);
            adj[dest].push_back(src);
        }
        else {
            cin >> v;
            if(!adj[v].empty()) {
                for(int x : adj[v])
                    cout << x << " ";
                cout << endl;
            }
        }
    }
    
    return 0;
}