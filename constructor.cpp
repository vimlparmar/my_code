
// #include<iostream>
// using namespace std;

// class Complex {  // Fixed the class name
//     int a, b;
// public:
//     Complex() {  // Constructor should have the same name as the class
//         a = 10;
//         b = 20;
//     }
//     void printNumber() {  // Fixed the function name and added the 'b' part
//         cout << "Your number is: " << a << "+" << b << "i" << endl;
//     }
// };

// int main() {
//     Complex c;  // Fixed the object name to match the class name
//     c.printNumber();  // Fixed the function name

//     return 0;
// }

#include<iostream>
using namespace std;
class Complex{
    int a,b;
    public:
Complex(void);
void printnumber()
{
    cout<<"your answer is:"<<a<<"+"<<b<<"i"<<endl;
}
};

Complex :: Complex(void){
a=10;
b=20;
}

int main()
{
    Complex c;

    c.printnumber();

}
