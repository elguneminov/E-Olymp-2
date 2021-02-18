/* 
 * Author: MURAD HAJIYEV
 * Problem: https://www.e-olymp.com/en/problems/4761
 * Created on April 13, 2020, 12:31 AM
 */

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char** argv) {
    
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int n, edge;
    
    cin >> n;
    
    for(int i = 0 ; i < n ; i++) {
        for(int j = 0 ; j < n ; j++) {
            cin >> edge;
            if(i == j && edge) {
                cout << "YES";
                return 0;
            }
        }
    }
    
    cout << "NO";
    
    return 0;
}