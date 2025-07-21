#include <bits/stdc++.h>
using namespace std;    

int main() {
    int i = 0,j = 1;
    int *p = &i;
    *p = 5;
    cout << i << " " << j << endl;// Output: 5 1 
    p = &j;
    *p = 10;
    cout << i << " " << j << endl;// Output: 5 10
    return 0;
}