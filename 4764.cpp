/* 
 * Author: MURAD HAJIYEV
 * Problem: https://www.e-olymp.com/en/problems/4764
 * Created on April 13, 2020, 1:31 AM
 */

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char** argv) {
    
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int n, edge, temp;
    
    cin >> n;
    
    for(int i = 0 ; i < n ; i++) {
        temp = 0;
        for(int j = 0 ; j < n ; j++) {
            cin >> edge;
            temp += edge;
        }
        cout << temp << endl;
    }
    
    return 0;
}