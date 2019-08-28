#include<iostream>
using namespace std;
int y;



int main(){
	cin>>y;
	if ((y % 4 == 0)&&(y %100 != 0)||(y % 400 == 0))
		cout<<"TRUE"<<endl;
	
	else
		cout<<"FLASE"<<endl;
	
	
	
	
	
	
	
	return 0; 
}
