#include<bits/stdc++.h>
using namespace std;
int main(){
    float x; //定义单精度变量 x 
    double y;//定义双精度变量 y 
    cout<<"读入x和y的值"<<endl;
    cin>>x; //单精度的读入 
    cin>>y;//双精度的读入
    cout << fixed << setprecision(4) << x <<" "<< y <<endl;   //同一行里输出的时候，只要在开头设置精度 

    return 0;
} 
