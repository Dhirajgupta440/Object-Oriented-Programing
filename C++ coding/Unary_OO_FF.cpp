//Unary operator overloading using friend function
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
    friend void operator -(demo &obj);
    
};
void operator -(demo &obj){
    obj.a=-obj.a;
    obj.b=-obj.b;
}
int main(){
    demo ob(-10,20),t(100,-300);
    ob.show();
    t.show();
    -ob;
    -t;
    ob.show();
    t.show();
    
}
