/* 
 * File:   main.cpp
 * Author: MURAD HAJIYEV
 * Problem: https://www.e-olymp.com/az/problems/9638
 * Created on March 12, 2020, 2:25 PM
 */

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char** argv) {
    
    int a, b, k;
    
    cin >> a >> b;
    
    k = (a+b)/2;
    
    if(abs(a-k) == abs(b-k))
        cout << k;
    else
        cout << "-";
    
    return 0;
}