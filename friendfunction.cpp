#include<iostream>
using namespace std;

class subtraction{
    int a,b;
    public:
    void setdata(int n,int m)
    {
         a=n;
         b=m;
    }
    friend subtraction subAdd(subtraction o1,subtraction o2);

    void getdata()
    {
       // cout<<"your print number is:"<< a <<"+"<< b <<"i";
       cout << "Your answer is: " << a << " + " << b << "i" << endl;
    }
};

subtraction subAdd(subtraction o1,subtraction o2)
{
    subtraction o3;
    o3.setdata((o1.a+o2.a),(o1.b+o2.b));
}

int main()
{
    subtraction obj1,obj2,ans;
    obj1.setdata(5,7);
    obj2.setdata(6,2);

    obj1.getdata();
    obj2.getdata();

ans=subAdd(obj1,obj2);
ans.getdata();
    return 0;
}