//Binary operator overloading using friend function 
#include<iostream>
#include<conio.h>
using namespace std;
class demo{
    int a,b;
    public:
    demo(int x,int y){
    a=x;
    b=y;
    }
    void show(){
        cout<<"A="<<a<<" "<<"B="<<b<<endl;
    }
     friend demo operator +(demo &obj,demo &obj2);
    
};
demo operator +(demo &obj,demo &obj2){
        demo temp(0,0);
        temp.a=obj.a+obj2.a;
        temp.b=obj.b+obj2.b;
        return temp;
}

int main(){
    demo obj(10,20);demo obj1(30,40);demo obj2(0,0);
    obj2=obj+obj1;
    obj2.show();

    
}
