#include<bits/stdc++.h>

using namespace std;
int n,a;
int main()

{

cin>>n; 
    for(int i=1;i<=n;i++)  
    {  
        cin>>a;            
        if((a % 31 ==0)||(a % 59 ==0) )   
            cout<<a<<" ";  
    } 


return 0;

}
 
