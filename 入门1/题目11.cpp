#include<iostream>
#include<bits/stdc++.h>
using namespace std; 
int n,x,a,b;

int main() 
{ 
	cin>>n;
	x=n % 10;
	n=n - x;
	a=n / 10;
	a=n % 10;
	n=n - a;
	n= n / 10;
	b=n;
	cout<<x<<a<<b<<endl;
	
	




    return 0 ;
} 
