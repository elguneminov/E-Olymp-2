/* 
 * File:   main.cpp
 * Author: MURAD HAJIYEV
 * Problem: https://www.e-olymp.com/az/problems/2862
 * Created on March 5, 2020, 11:53 AM
 */

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char** argv) {
    
    int n, i;
    
    cin >> n;
    
    int *divisors = new int [10001], result = 1;
    memset(divisors, 0, 101);
    
    set <int> unique_divisors;
    
    for(i = 2 ; i <= n ; i++){
        if(n%i == 0){
            unique_divisors.insert(i);
            divisors[i]++;
            n /= i;
            i--;
        }
    }
    
    for(auto x : unique_divisors)
        result *= (divisors[x]+1);
    
    cout << result;
    
    return 0;
}