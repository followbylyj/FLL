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
	for(int i=0;i<=n;i++) //�洢��Ԫ�������ģ�������forѭ�������β����洢��Ԫ��ţ�����Ĭ���Ǵ� 0 ��Ԫ��ʼ 
        cin>>a[i]; //�Ѷ�����������δ洢�� a[i]��Ԫ 
    for(int i=n;i>0;i--) //������������������
		cout<<a[i]<<" ";
		cout<<endl;
	
	

	return 0;
	
}

