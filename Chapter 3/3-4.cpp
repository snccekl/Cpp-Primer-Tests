#include <bits/stdc++.h>
using namespace std;


int main(){
    //比较大小
    // string s1, s2;
    // cin >> s1 >> s2;
    // if(s1 == s2){
    //     cout << "s1 and s2 are equal" << endl;
    // } else {
    //     cout << (s1 < s2 ? s2 : s1) << endl;
    // }
    // return 0;
    
    // 比较长度
    string s1, s2;
    cin >> s1 >> s2;
    if(s1.size() == s2.size()){
        cout << "s1 and s2 are equal" << endl;
    } else {
        cout << (s1.size() < s2.size() ? s2 : s1) << endl;
    }
    return 0;
}