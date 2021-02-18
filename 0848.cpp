/* 
 * File:   main.cpp
 * Author: MURAD HAJIYEV
 * Problem: https://www.e-olymp.com/en/problems/848
 * Created on March 5, 2020, 12:46 AM
 */

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char** argv) {
    
    unsigned long long arr[] = {6,28,496,8128,33550336,8589869056};
    unsigned long long m, n;
    bool is_exist = false;;
    
    cin >> m >> n;
    
    for(int i = 0 ; i < 6 ; i++){
        if(arr[i] >= m && arr[i] <= n){
            cout << arr[i] <<"\n";
            is_exist = true;
        }
    }
    
    if(!is_exist)
        cout << "Absent";
    
    return 0;
}