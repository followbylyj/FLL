#include<iostream> 
#include<cmath>
using namespace std; 
int h,r,a,b,c; //把定义变量放在int main()的前面 
float pi;
int main(){ 
    cin>>h>>r;   
	pi=3.14159;
	
	a=h*r*r*pi;
	
	b=20000/a;
	c=b+1;
	cout<<c<<endl;
    
    return 0; 
} 

