/* 
 * File:   main.cpp
 * Author: MURAD HAJIYEV
 * Problem: https://www.e-olymp.com/az/problems/20
 * Created on February 24, 2020, 9:58 PM
 */

#include <bits/stdc++.h>
using namespace std;

int sum(unsigned long long n){
    
    int sum = 0;
    
    while(n != 0){
        
        sum += n%10;
        
        n/=10;
    }
    
    return sum;
}

int main(int argc, char** argv) {
    
    unsigned long long n;
    
    cin >> n;
    
    int i = 0;
    
    while(n > 0){
        
        n -= sum(n);
        
        i++;
    }
    
    cout << i;

    return 0;
}