/* 
 * Author: MURAD HAJIYEV
 * Problem: https://www.e-olymp.com/en/problems/2471
 * Created on April 12, 2020, 10:22 PM
 */

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char** argv) {
    
    int n, edge;
    
    cin >> n;
    
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            cin >> edge;
            if(j > i && edge)
                cout << i+1 << " " << j+1 << endl;
        }
    }

    return 0;
}