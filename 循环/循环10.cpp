#include<iostream>
using namespace std;
int n; 
bool b; //������� n ��������true) ���Ǻ���(false) 
int main(){
    cin>>n; //����Ҫ�жϵ��� 
    b=true; //һ��ʼ��b���Ϊtrue�����ٶ� n �������������ǲ��ǣ��뾭������ѭ���Ŀ��� 
    for(int j=2;j<=n-1;j++) { //�� j ������2 3 4 ... n-1  
        if(n % j ==0) { //��� n �� j ����������0 ��˵�� j��n ��һ�����ӡ���ôn�϶��Ǻ��� 
            b=false;   //�� b �ı�Ǹ���Ϊ false����ʾ n �Ǻ��� ,Ҳ��ζ�� n �������� 
            break;  //��Ȼ�Ѿ�֪���Ǻ������Ǵ�j��ʼ�������Ҳû��Ҫ���ж��ˣ�ֱ���˳� 
        }
    }
    //ע�⣺����ѭ�����������ǲ���֪��n�ǣ����߲��� ���� 
    if(b)  // ��� b �ı����true ���� �� false �����ȼ��� if(b==true) 
        cout<<"yes"<<endl;
    else
        cout<<"no"<<endl;

    return 0;
}

