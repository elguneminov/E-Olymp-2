/* 
 * File:   main.cpp
 * Author: MURAD HAJIYEV
 * Problem: https://www.e-olymp.com/az/problems/19
 * Created on March 12, 2020, 3:55 PM
 */

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char** argv) {
    
    int k, i, j, res = 0;
    string n;
    
    cin >> n;

    k = n.length()-1;

    if(k%2 == 0)
        i = j = k/2;
    else{
        i = k/2;
        j = k/2+1;
    }

    while(i >= 0){
        if(n[i] == n[j])
            res++;
        i--;
        j++;
    }
    
    cout << res;
    
    return 0;
}/* 
 * File:   main.cpp
 * Author: MURAD HAJIYEV
 * Problem: https://www.e-olymp.com/az/problems/19
 * Created on March 12, 2020, 3:55 PM
 */

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char** argv) {
    
    int k, i, j, res = 0;
    string n;
    
    cin >> n;

    k = n.length()-1;

    if(k%2 == 0)
        i = j = k/2;
    else{
        i = k/2;
        j = k/2+1;
    }

    while(i >= 0){
        if(n[i] == n[j])
            res++;
        i--;
        j++;
    }
    
    cout << res;
    
    return 0;
}