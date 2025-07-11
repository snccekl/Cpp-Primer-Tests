#include <bits/stdc++.h>
#include "Sales_item.h"
using namespace std;


int main(){
    Sales_item item1, item2;
    int count = 0;
    if(cin >> item1){
        count = 1;
        while(cin >> item2){
            if(item1.same_isbn(item2)){
                count++;
            } 
            else {
                cout << "ISBN: " << item1.isbn << " Count: " << count << endl;
                item1 = item2; 
                count = 1; 
            }
        }
        cout << "ISBN: " << item1.isbn << " Count: " << count << endl; 
    }
    return 0;
}