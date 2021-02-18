/* 
 * Author: MURAD HAJIYEV
 * Problem: https://www.e-olymp.com/az/problems/5072
 * Created on April 12, 2020, 9:50 PM
 */

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char** argv) {
    
    int n, edge, count = 0;
    
    cin >> n;
    
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            cin >> edge;
            if(edge) count++;   
        }
    }
    
    cout << count;

    return 0;
}