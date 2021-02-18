/* 
 * File:   main.cpp
 * Author: MURAD HAJIYEV
 * Problem: https://www.e-olymp.com/en/problems/8197
 * Created on March 14, 2020, 10:02 PM
 */

#include <bits/stdc++.h>
using namespace std;

int n, i;
pair<string,string> a[101];

int main(int argc, char** argv) {
    
    cin >> n;
    
    for(i = 0 ; i < n ; i++)
        cin >> a[i].second >> a[i].first;
    
    sort(&a[0],&a[n]);
    
    for(i = 0 ; i < n ; i++)
        cout << a[i].second << " " << a[i].first << "\n";

    return 0;
}