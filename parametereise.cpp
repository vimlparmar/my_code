#include<iostream>
using namespace std;

class Complex{
int a,b;
public:
Complex(void);
void printnumber(int,int)
{
        cout<<"your answer is:"<<a<<"+"<<b<<"i"<<endl;

}
};
Complex :: Complex(int x,int y)
{
    a=x;
    b=y;

}

int main()
{
    // Complex c;
     Complex a(5,7);
    a.printnumber();
    return 0;
}