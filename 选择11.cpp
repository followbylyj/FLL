#include<iostream>
#include<cstdlib>
#include<cstdio> 

using namespace std;
int a,b,c,d,e;







int main(){


	cin>>a;
	switch(a)
   { 
      case (1): //注意：字符型的值是用单引号来表示。双引号是表示字符串。两者的类型不一样。字符串在后面学
         cout<<"Monday"<<endl;
         break;
      case (2):
         cout<<"Tuesday"<<endl;
         break;
      case (3):
         cout<<"Wednesday"<<endl;
        break;
      case (4):
        
            cout<<"Thursday"<<endl;
        
        break;
      case(5):
      		cout<<"Friday"<<endl;
      	  break;
      case(6):
    		cout<<"Satuday"<<endl;
    		break;
      case(7):
    		cout<<"Sunday"<<endl;
    		break;
      default:
        printf("error input!\n");
      break;
   }

    	
    	
	
	return 0;
}
	


    	
    	
	

