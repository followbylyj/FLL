#include<iostream> 
using namespace std; 
int x,y,z; //�Ѷ����������int main()��ǰ�� 
int main(){ 
    cin>>x;   

    if (x>0){ //��һ����� 
    	x=x+1;
        cout<<x<<endl; }//�����������ִֻ��һ����䣬�����µ� { } ����ʡ�� ,�������±����  {   }
    else if (x<0){
	
    	x=x-1;
    	cout<<x<<endl;}
    else
    	cout<<0<<endl;
    
    
    return 0; 
} 

