// //friend function
// #include<iostream>
// using namespace std;

// class Complex{
//     int a, b;

// public:
//     void setdata(int n1, int n2) {
//         a = n1;
//         b = n2;
//     }
// friend Complex addcomplex(Complex x,Complex y);
//     void getdata() {
//         cout << "Your answer is: " << a << " + " << b << "i" << endl;
//     }
// };
// Complex addcomplex(Complex x,Complex y)
// {
//     Complex z;
//     z.setdata((x.a+y.a),(x.b+y.b));
// }

// int main() {
//     Complex c1, c2,ans;
//     c1.setdata(5, 6);
//     c2.setdata(4, 5); // Set data for c2
//     c1.getdata();
//     c2.getdata();

//     ans=addcomplex(c1,c2);
//     ans.getdata();
//     return 0;
// }
#include<iostream>
using namespace std;
class Complex{
int a,b;

public:
void setdata(int n,int m)
{
    a=m;
    b=n;
}
friend Complex  complexans(Complex o1,Complex o2);

void getdata()
{
    cout<<"Your answer is:"<<a<<"+"<<b<<"i"<<endl;
}
};
Complex complexans(Complex o1,Complex o2)
{
Complex o3;
o3.setdata((o1.a+o2.a),(o1.b+o2.b));
}

int main()
{
    Complex obj1,obj2,c;
    obj1.setdata(1,2);
    obj1.setdata(1,3);

    obj2.getdata();
    obj2.getdata();
c=complexans(obj1,obj2);
c.getdata();
    return 0;
}