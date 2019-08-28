#include<iostream> 
using namespace std; 
int x,y,z; //把定义变量放在int main()的前面 
int main(){ 
    cin>>x;   

    if (x>0){ //第一种情况 
    	x=x+1;
        cout<<x<<endl; }//满足条件如果只执行一句语句，则上下的 { } 可以省略 ,否则上下必须加  {   }
    else if (x<0){
	
    	x=x-1;
    	cout<<x<<endl;}
    else
    	cout<<0<<endl;
    
    
    return 0; 
} 

