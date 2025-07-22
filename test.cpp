#include <bits/stdc++.h>
using namespace std;


int main(){
    int a = 0;
    const int &b = a;
    cout << b << endl; // Output: 0
    a = 6;
    cout << b << endl; 
    return 0;
}