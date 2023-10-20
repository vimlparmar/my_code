// #include<iostream>
// using namespace std;
// template <class T>
// T sum(T  a, T  b)
// {
//     cout<<a+b<<endl;

// }
// int main()
// {
//       sum(2,5);
//     sum(2.5,3.5);
//     return 0;
// }

#include <Iostream>
using namespace std;
class Demo
{
    int num1, num2;

public:
    Demo(int n1, int n2)
    {
        num1 = n1;
        num2 = n2;

        cout << num1;
    }
    void check()
    {
        if (num1 > num2)
        {
            cout << num1;
        }

        else
        {
            cout << num2;
        }
    }
};

int main()
{
    Demo d(5, 3);
    d.check();
    return 0;
}
