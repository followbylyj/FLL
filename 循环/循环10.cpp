#include<iostream>
using namespace std;
int n; 
bool b; //用来标记 n 是质数（true) 还是合数(false) 
int main(){
    cin>>n; //读入要判断的数 
    b=true; //一开始把b标记为true，即假定 n 是质数。最终是不是，须经过下面循环的考验 
    for(int j=2;j<=n-1;j++) { //用 j 来产生2 3 4 ... n-1  
        if(n % j ==0) { //如果 n 对 j 求余数等于0 ，说明 j是n 的一个因子。那么n肯定是合数 
            b=false;   //把 b 的标记更改为 false，表示 n 是合数 ,也意味着 n 不是质数 
            break;  //既然已经知道是合数，那从j开始后面的数也没必要再判断了，直接退出 
        }
    }
    //注意：上面循环结束后，我们才能知道n是，或者不是 质数 
    if(b)  // 检查 b 的标记是true 或者 是 false ，这句等价于 if(b==true) 
        cout<<"yes"<<endl;
    else
        cout<<"no"<<endl;

    return 0;
}

