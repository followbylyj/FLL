#include<iostream>
#include<bits/stdc++.h>
using namespace std; 

int main() 
{ 
    int a;
    char ch2; //定义字符变量。char 为单字符类型，只能存放一个字符 
    float b;
    double c;
    cin>>a>>ch2>>b>>c;
    cout << fixed << a << " " << ch2 << " " << setprecision(6) << b << " " <<  setprecision(6) << c <<endl;
    return 0; 
} 
