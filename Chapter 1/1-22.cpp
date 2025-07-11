#include <bits/stdc++.h>
#include "Sales_item.h"
using namespace std;


int main(){
    Sales_item item1,item2,total;
    if(cin >> item1){
        total = item1; 
        while(cin >> item2){
            if(item1.same_isbn(item2)){
                total += item2;
            } else {
                cout << "Items have different ISBNs." << endl;
            }
        }
        cout << total << endl;
    }
    return 0;
}