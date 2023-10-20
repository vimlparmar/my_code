#include<iostream>
using namespace std;

class simple{
    int data1;
    int data2;
    public:

    simple(int a,int b)
    {
        data1=a;
        data2=b;
    }
    void printData();
};
 void simple::printData(){
    cout<<"the value is:"<<data1<<endl<<"and\n"<<data2;
}
int main()
{
    simple s(1,4);
    s.printData();

    return 0;
}