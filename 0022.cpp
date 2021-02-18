/* 
 * File:   main.cpp
 * Author: MURAD HAJIYEV
 * Problem: https://www.e-olymp.com/az/problems/22
 * Created on March 7, 2020, 11:25 AM
 */

#include <bits/stdc++.h>
#define SIZE 10001
using namespace std;

bool primes[SIZE];

int reverse(int n){
    
    int result = 0, i = 0;
    
    while(n != 0){
        result *= 10;
        result += n%10;
        n /= 10;
    }
    
    return result;
}

int main(int argc, char** argv) {
    
    int i, j, a, b, count = 0;
    
    cin >> a >> b;
    
    memset(primes,true,SIZE);
    primes[0] = primes[1] = false;
    
    for(i = 2 ; i*i <= SIZE ; i++){
        if(primes[i]){
            for(j = i*i ; j <= SIZE ; j += i){
                primes[j] = false;
            }
        }
    }
        
    for(i = a ; i <= b ; i++)
        if(primes[i] && primes[reverse(i)])
            count++;
    
    cout << count;

    return 0;
}