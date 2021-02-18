/* 
 * File:   main.cpp
 * Author: MURAD HAJIYEV
 * Problem: https://www.e-olymp.com/az/problems/9637
 * Created on March 12, 2020, 10:48 PM
 */

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char** argv) {
    
    unsigned long long a, b, end, n = 0, i;
    
    cin >> a >> b;
    
    end = b-a;
    
    for(i = 1 ; i < end ; i++)
        n += i;
    
    cout << a-n;

    return 0;
}
