#include<iostream>
#include<cstdio>
#include<bits/stdc++.h>
using namespace std;
int n; 
int main(){
	cin>>n; 
	double s = 0;

for ( int i=1;i<=n;i++){


s+=(double)(1*1.0/i);

cout<<fixed<<setprecision(3)<<s<<endl;
          
        
        }
        
    return 0; 
}
