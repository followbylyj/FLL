#include <iostream>
#include<cstring>
using namespace std;
int main()
{
    float a[10]={28.9,32.7,45.6,78,35,86.2,27.8,43,56,65};
    int num[10];
    for(int i=0;i<=9;i++){
	
    	cin>>num[i];}
    double sum=0.0;
    for(int j=0;j<=9;j++)
    	sum+=a[j]*num[j];
    cout<<sum<<endl;
    return 0;
}
