#include <bits/stdc++.h>
#include "Sales_item.h"
using namespace std;


int main(){
    Sales_item item1, item2;
    cin >> item1 >> item2;
    
    if(item1.same_isbn(item2)){
        Sales_item total = item1 + item2;
        cout << total << endl;
    } else {
        cout << "Items have different ISBNs." << endl;
    }
    return 0;

}