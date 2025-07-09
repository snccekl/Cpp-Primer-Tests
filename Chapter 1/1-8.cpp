#include <bits/stdc++.h>
using namespace std;


int main(){
    std::cout << "/*";//合法，将输出/*
    std::cout << "*/";//合法，将输出*/
    //第三条语句不合法，修改如下
    std::cout << /* "*/" */";
    std::cout << /* "*/" /* "/*" */;//合法，将输出/*
}