#include <bits/stdc++.h>
using namespace std;

int main(){
    const int i = 42; 
    auto j = i;// j是一个整数
    const auto &k = i;//k是一个整型常量引用
    auto *p = &i;// p是一个指向整型常量的指针
    const auto j2 = i, &k2 = i; // j2是一个整型常量，k2是一个整型常量引用
    cout<<typeid(j).name() << endl; // 输出j的类型
    cout<<typeid(k).name() << endl; // 输出k的类型
    cout<<typeid(p).name() << endl; // 输出p的类型
    cout<<typeid(j2).name() << endl; // 输出j2的类型
    cout<<typeid(k2).name() << endl; // 输出k2的类型
    return 0;
}