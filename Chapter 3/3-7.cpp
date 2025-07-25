#include <bits/stdc++.h>
using namespace std;


int main(){
    string s;
    cin >> s;
    for(char &c : s){
        c = 'X';
    }
    cout << s << endl;
    return 0;
}
//没有变化，因为auto推断出来的类型也是char