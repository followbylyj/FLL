#include<iostream> //使用cin和cout需要用到iostream文件 
using namespace std; 
int a,b; // 向计算机申请两个存储位置 a 和 b，存储的数据类型指定为整数。存储位置a,b是固定的，
         // 位置里存储的数据可以是任何整数。所以a和b也称为变量。打个比方，a 和 b 好比是两个
         // 座位编号，数据好比是人。座位是固定的，座位上坐的人是可以变动的 
         // int a,b; 专业叫法：定义两个整型变量 a 和 b 。以后都用变量这个说法。
         // 小知识：计算机执行这句语句时，会在内存里分配两个存储单元，每个存储单元计算机都有 
         // 唯一的固定的编号，计算机分配时就把地址编号告诉变量 

int main() 
{  
      cin>>a>>b; //读入两个整数，依次存放到a和b两个地方。读入数据个数少时，用cin很方便 
      cout<<b;   //把 b 位置的数值输出。输出数据个数少时，用cout也很方便 
      return 0; 
} 
