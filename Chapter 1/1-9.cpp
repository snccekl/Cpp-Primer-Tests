#include <bits/stdc++.h>
using namespace std;


int main(){
    int sum = 0,val = 50;
    while (val <= 100) {
        sum += val;
        ++val;
    }
    cout << "50到100的和是：" << sum << endl;
    return 0;
}