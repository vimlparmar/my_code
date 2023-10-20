#include<iostream>
using namespace std;
//Base class 
class Employee{
    public:
    int id;
    string name;

    Employee(int inpId)
    {
        id=inpId;
        name="vimal";
    }
};

class programer:Employee{
public:
programer(int idpId)
{
id=inpId;
}
int code=9;
}


};
int main()
{
    Employee v(1),i(2);
    cout<<v.name<<endl;
    cout<<i.id<<endl;
    return 0;
}