/* 
 * File:   main.cpp
 * Author: MURAD HAJIYEV
 * Problem: https://www.e-olymp.com/en/problems/137
 * Created on January 12, 2020, 8:46 PM
 */

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char** argv) {
    
    int n, i, a, b, r;
    
    cin >> n;
    
    int arr[n];
    
    for(i = 0 ; i < n ; i++)
        cin >> arr[i];
    
    a = arr[0];
    
    for(i = 1 ; i < n ; i++){
        
        if(arr[i] > a){
            
            b = a;
            a = arr[i];
        }
        else 
            b = arr[i];
        
        while(a%b != 0){
            
            r = a%b;
            a = b;
            b = r;
        }
        
        a = b;
    }
    
    cout << a;
    
    return 0;
}