#include<iostream>
#include<cstdlib>
using namespace std;
int nian;
int flag;
int main()
{
    cin>>nian;
    flag=(nian%100==0)?(nian%400==0?1:0):(nian%4==0?1:0);
    if(flag==1)
        cout<<"TRUE"<<endl;
    else
        cout<<"FALSE"<<endl;   
    return 0;
}
