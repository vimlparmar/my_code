// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     int arr[20];

//     cout<<"Enter the 5  of array:";
//     cin>>n;

//     for(int i=0;i<n;i++)
//     {
//         cout<<"Enter the array of index:"<<i<<"index is:"<<endl;
//         cin>>arr[i];
//     }

//     cout<<"output"<<endl;

//     for(int j=0;j<n;j++)
//     {
//         cout<<arr[j]<<endl;
//     }
//     return 0;
// }
//Q2. Write a program to sort numbers in ascending order.
// #include<iostream>
// using namespace std;
// int main()
// {
// int arr[10];
// int temp;
// for (int i = 0; i < 10; i++)
// {
//    cout<<"Entre the data:";
//    cin>>arr[i];

// }
// for (int j = 0; j < 10; j++)
// {
//     for(int k=1;k<10;k++)
//     {
//         if(arr[k]<=arr[k-1])
//         {
//               temp=arr[k];
//               arr[k]=arr[k-1];
//               arr[k-1]=temp;
//         }
//     }
// }
// cout<<"sorted data:";
// for(int a=0;a<10;a++)
// {
// cout<<arr[a]<<" ";
// }
// return 0;
// }
//sorting array
// #include<iostream>
// using namespace std;

// int main()
// {
//     int temp;
//     int arr[5];

//     for(int i=0;i<5;i++)
//     {
//         cout<<"Entre the data:";
//         cin>>arr[i];
//     }

//     for(int j=0;j<5;j++)
//     {
//         for(int k=0;k<5;k++)
//         {
//             if(arr[k]<=arr[k-1])
//             {
//                 temp=arr[k];
//                 arr[k]=arr[k-1];
//                 arr[k-1]=temp;
//             }
//         }
//     }
//     cout<<"sorted array:";
//    for(int a=0;a<5;a++)
//    {
//     cout<<arr[a]<<" ";
//    }
//    return 0;
// }

//perfetc number

//1.Write a C++ program for creating the 5x5 matrix and take all the elements from user. Write a function for finding the minimum value from diagonal, upper half matrix and lower half matrix.

// #include<iostream>
// using namespace std;
// int main()
// {
//     int a,b;

//     cout<<"Enter the length:";
//     cin>>a;
//     cout<<"Enter the bregth:";
//     cin>>b;

//     int matrix[a][b];

//     for(int i=0;i<a;i++)
//     {
//         for(int j=0;j<b;j++)
//         {
//             cin>>matrix[i][j];
//         }
//     }
//     cout<<"output"<<endl;

//     for(int i=0;i<a;i++)
//     {
//         for(int j=0;j<b;j++)
//         {
//             cout<<matrix[i][j]<<" ";
//         }
//         cout<<"\n";
//     }
// return 0;
// }

// #include<iostream>
// using namespace std;

// // Function to find the minimum value from the diagonal, upper half, and lower half of a matrix
// void findMinValues(int matrix[][100], int rows, int cols) {
//     int minDiagonal = matrix[0][0];
//     int minUpperHalf = matrix[0][1];
//     int minLowerHalf = matrix[1][0];

//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             // Check diagonal elements
//             if (i == j && matrix[i][j] < minDiagonal) {
//                 minDiagonal = matrix[i][j];
//             }
            
//             // Check upper half elements
//             if (i < j && matrix[i][j] < minUpperHalf) {
//                 minUpperHalf = matrix[i][j];
//             }

//             // Check lower half elements
//             if (i > j && matrix[i][j] < minLowerHalf) {
//                 minLowerHalf = matrix[i][j];
//             }
//         }
//     }

//     cout << "Minimum value in the diagonal: " << minDiagonal << endl;
//     cout << "Minimum value in the upper half: " << minUpperHalf << endl;
//     cout << "Minimum value in the lower half: " << minLowerHalf << endl;
// }

// int main() {
//     int a, b;

//     cout << "Enter the number of rows: ";
//     cin >> a;
//     cout << "Enter the number of columns: ";
//     cin >> b;

//     int matrix[100][100];

//     cout << "Enter the matrix elements:" << endl;
//     for (int i = 0; i < a; i++) {
//         for (int j = 0; j < b; j++) {
//             cin >> matrix[i][j];
//         }
//     }

//     cout << "Matrix:" << endl;
//     for (int i = 0; i < a; i++) {
//         for (int j = 0; j < b; j++) {
//             cout << matrix[i][j] << " ";
//         }
//         cout << "\n";
//     }

//     // Call the function to find minimum values
//     findMinValues(matrix, a, b);

//     return 0;
// }

// 2.Write a C++ program to create a class called Triangle that has private member variables for the lengths of its three sides. Implement member functions to determine if the triangle is equilateral, isosceles, or scalene.

// #include<iostream>
// using namespace std;

// class Triangle{
//     bool side1;
//     bool side2;
//     bool side3;

//     public:

//     Triangle(double s1,double s2,double s3)
//     {
//         side1=s1;
//         side2=s2;
//         side3=s3;
//     }
//     long equilateral(){
//         side1==side2 && side2==side3;
//     }
//     long isosceles()
//     {
//         side1==side2 || side2 == side3 || side3==side1;
//     }
//    long scalene()
//    {
//     return !equilateral() && !scalene();
//    }
// };

// int main()
// {
//     bool s1,s2,s3;

//     Triangle triangle(s1,s2,s3);

//     if (triangle.equilateral())
//     {
//         cout<<"it is an equilateral triangle:"<<endl;

//     }
//     else if(triangle.isosceles())
//     {
//         cout<<"it is an isosceles triangle:"<<endl;

//     }
//     else if(triangle.scalene()){
//         cout<<"it is scalene triangle: "<<endl;
//     }
//     else{
//         cout<<"invalid choice:";
//     }
//     return 0;
// }

//3.Write a C++ program to implement a class called Date that has private member variables for day, month, and year. Include member functions to set and get these variables, as well as to validate if the date is valid and print proper message if date is invalid.
// #include <iostream>
// using namespace std;
// class Date {
// private:
//     int day;
//     int month;
//     int year;

// public:
//     // Constructor to initialize the date
//     Date(int d, int m, int y) : day(d), month(m), year(y) {}

//     // Setter functions
//     void setDay(int d) {
//         day = d;
//     }

//     void setMonth(int m) {
//         month = m;
//     }

//     void setYear(int y) {
//         year = y;
//     }

//     // Getter functions
//     int getDay() const {
//         return day;
//     }

//     int getMonth() const {
//         return month;
//     }

//     int getYear() const {
//         return year;
//     }

//     // Function to validate if the date is valid
//     bool isValid() const {
//         if (year < 1 || month < 1 || month > 12 || day < 1 || day > 31) {
//             return false;
//         }

//         if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30) {
//             return false;
//         }

//         if (month == 2) {
//             if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
//                 if (day > 29) {
//                     return false;
//                 }
//             } else {
//                 if (day > 28) {
//                     return false;
//                 }
//             }
//         }

//         return true;
//     }

//     // Function to print the date
//     void printDate() const {
//         if (isValid()) {
//             cout << "Date: " << year << "-" << month << "-" << day << endl;
//         } else {
//             cout << "Invalid date!" << endl;
//         }
//     }
// };

// int main() {
//     // Create a Date object
//     Date myDate(10, 5, 2023);

//     // Print the date
//     myDate.printDate();

//     // Modify the date and print it again
//     myDate.setDay(31);
//     myDate.setMonth(2);
//     myDate.setYear(2022);
//     myDate.printDate();

//     return 0;
// }

//2nd
// #include <iostream>
// using namespace std;

// class CallDate {
// private:
//     int day;
//     int month;
//     int year;

// public:
//     // CallDate() {
//     //     day = 0;
//     //     month = 0;
//     //     year = 0;
//     // }

//     CallDate(int d=0, int m=0, int y=0) {
//         day = d;
//         month = m;
//         year = y;
//     }

//     void getdata() {
//         cout << "Enter the day: ";
//         cin >> day;
//         cout << "Enter the month: ";
//         cin >> month;
//         cout << "Enter the year: ";
//         cin >> year;
//     }

//     void setdata() {
//         cout << day<<"-" <<month<<"-"<< year ;
       
//     }
// };

// int main() {
//     CallDate s1;
//     s1.getdata();
//     s1.setdata();

//     return 0;
// }


// friend function 

// #include<iostream>
// using namespace std;
// class Complex{
//     int a,b;

//     public:

//     void setNumber(int n1,int n2)
//     {
//         a=n1;
//         b=n2;
//     }
//    friend  Complex sumComplex(Complex o1,Complex o2);
  
//     void printNumber()
//     {
//         cout<<"your Number is:"<<a<<" + "<<b<<endl;
//     }
// };

// Complex sumComplex(Complex o1,Complex o2){
//     Complex o3;
//     o3.setNumber((o1.a+o2.a),(o1.b+o2.b));
//     return  o3;
// }

// int main()
// {
// Complex c1,c2,sum; 
// c1.setNumber(5,6);
// c2.setNumber(6,3);

// c1.printNumber();
// c2.printNumber();
//  sum=sumComplex(c1,c2);
// sum.printNumber();
// return 0;
// }

//constructors

// #include<iostream>
// using namespace std;

// class student {
//     int account;
//     string name;
// public:
//     student(int a, string b) { 
//     account=a;
//     name=b;
//     }
//     void setdata() {
//         cout << "Name: " << name << endl;
//         cout << "Account: " << account << endl;
//     }

//     // Declare the friend function
//     friend void incrementAccount(student &s, int amount);
// };

// // Define the friend function
// void incrementAccount(student &s, int amount) {
//     s.account += amount;
// }

// int main() {
//     student a1(12345, "John");
//     a1.setdata();

//     cout << "Incrementing account by 100..." << endl;
//     incrementAccount(a1, 100);

//     a1.setdata();

//     return 0;
// }

#include<iostream>
using namespace std;

class student{
    int account;
    string name;

    void getdata(int a,int b)
    {
        account=a;
        name=b;

    }

    void setdata()
    {
         cout<<"your account is:"<<account;
        cout<<"your name is:"<<name;

    }
};

void increment(student &s,int amount)
{
    s.account+=amount;
}