#include <bits/stdc++.h>
using namespace std;


int main(){
    string s;
    cin >> s;
    int i = 0;
    while(s[i] != '\0'){
        s[i] = 'X';
        i++;
    }
    cout << s << endl;
    return 0;
}
// 很明显，还是for·each更好用