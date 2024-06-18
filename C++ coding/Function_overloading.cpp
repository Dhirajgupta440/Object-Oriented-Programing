#include<iostream>
using namespace std;
class A{
    int num1=20,num2=10;
    public:
    void fun(){
       int sum= num1+num2;
       cout<<"Addition="<<sum<<endl;
    }
    void fun(int a,int b){
        int sub=a-b;
        cout<<"Substraction="<<sub<<endl;
    }
};
int main(){
A obj;
obj.fun();
obj.fun(100,50);
return 0;
}
