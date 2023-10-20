#include<iostream>
using namespace std;
class Complex{
    int a,b;
    public:
    Complex()
    {
        a=10;
        b=20;
    }
    Complex(int num)
    {
        a=num;
    }
    Complex(Complex &obj)
    {
        cout<<"copy constructor called:";
        a=obj.a;
    }

    void display()
    {
        cout<<"The number for this object is:"<<a<<endl;
    }
};

int main()
{
    Complex x,y,z(50);
    z.display();
    y.display();
    x.display();
    Complex z1(x);
    z1.display();
    return 0;
}