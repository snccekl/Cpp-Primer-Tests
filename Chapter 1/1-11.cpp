#include <bits/stdc++.h>
using namespace std;


int main(){
    int v1 = 0, v2 = 0;
    cin >> v1 >> v2;
    if(v1 > v2){
        while(v1 >= v2){
            cout << v1 << " ";
            --v1;
        }
    }
    else{
        while(v2 >= v1){
            cout << v2 << " ";
            --v2;
        }
    }
    return 0;
}