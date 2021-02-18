/* 
 * File:   main.cpp
 * Author: MURAD HAJIYEV
 * Problem: https://www.e-olymp.com/az/problems/9636
 * Created on March 12, 2020, 6:22 PM
 */

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char** argv) {
    
    int a, b, res;
    
    cin >> a >> b;
    
    res =  a - 2*b;
    
    if(res < 0)
        cout << 0;
    else
        cout << res;
    
    return 0;
}