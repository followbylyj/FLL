#include<iostream> 
using namespace std; 
int x,y,a,b,c,d; //把定义变量放在int main()的前面 
char z;
int main(){ 
    cin>>x>>z>>y;   

    if (z =='+'){
	
		a=x+y;
		cout<<a<<endl;}
		
    else if (z =='-'){
	
    	b=x-y;
    	cout<<b<<endl;}
    else if (z =='*'){
	
    	c=x*y;
    	cout<<c<<endl;} 
	else if (z =='/'){ 
		d=x/y;
		cout<<d<<endl; } 
    
    
    return 0; 
} 

