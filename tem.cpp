#include<iostream>
using namespace std;
template <class t>
 class average{
    t c=0;
    public:
    average (t a1,t a2,t a3,t a4,t a5) 
     {
        c=(a1+a2+a3+a4+a5)/5;
    }
void getdata()
{
    cout<<"avg is"<<c;
}
};
int main() 
{
    //  <int,float,int,float,int> 
    average am(12,55.5,45,44.67,5);
    am.getdata();
    return 0;
}