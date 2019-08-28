#include<iostream>
#include<cstdio>
using namespace std;
int js,a,b,c,d; 
int main(){
	cin>>a>>b>>c;
               // 就像下楼梯，起点是在高处：i=100 ，下楼梯，楼梯的终点应该在下面，所以是 i>=-100 ;下楼梯 ，每一步都是向下的，所以是 i-- 
    for(int i=a,js=1;i>=c;i-=4,js++ ){
              // 用 i 存放产生的数，i 从100开始产生数 ; 产生的每个数必须 >=-100; 产生的数的间隔是-1，即i--; 把 i 里面存放的数-1 后再存回 i
          
        printf("%5d",i); 
        if(js % 10 ==0)  //如果已经计数到 8 的倍数，就输出一个回车 
            printf("\n");
        }
        
    return 0; 
}
