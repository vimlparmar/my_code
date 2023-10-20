#include<iostream>
using namespace std;
template <class t>
 class amm{
    t c;
    public:
    average (t a1,t a2,t a3,t a4) 
     {
        c=(a1+a2+a3+a4)/4;
    }
void getdata()
{
    cout<<"avg is"<<c;
}
};
int main()
{
    amm am(12,45.5,44.67,5);
    am.getdata();
    return 0;
}