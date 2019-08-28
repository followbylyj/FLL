#include<iostream>
#include<bits/stdc++.h>
#include<cmath>
using namespace std; 
int n;
int a[70];
int main(){
	cin>>n;
	n-=1; 
	cin>>a[n];
	for(int i=0;i<=n;i++) //存储单元是连续的，所以用for循环来依次产生存储单元编号，数组默认是从 0 单元开始 
        cin>>a[i]; //把读入的数据依次存储到 a[i]单元 
    for(int i=n;i>0;i--) //逆序输出数组里的数据
		cout<<a[i]<<" ";
		cout<<endl;
	
	

	return 0;
	
}

