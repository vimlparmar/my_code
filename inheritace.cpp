// #include<iostream>
// using namespace std;
// class Employee{
//     int id;
    
// public:
// float salary;
// Employee(int inpId)
// {
//     id=inpId;
//     salary=34.0;
// }
// };


// int main()
// {
//     Employee vimal(1);
//     Employee yashvi(2);
// cout<<vimal.salary;
// cout<<yashvi.salary;

// return 0;
      
// }
#include <iostream>
using namespace std;

class Employee {
    int id;
    
public:
    float salary;
    Employee(int inpId) {
        id = inpId;
        salary = 34.0;
    }
};

int main() {
    Employee vimal(1);
    Employee yashvi(2);

    cout << "Vimal's salary: " << vimal.salary << endl;
    cout << "Yashvi's salary: " << yashvi.salary << endl;

    return 0;
}
