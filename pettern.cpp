
//2.pyrmid
// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Entre the number:";
//     cin>>n;

//     for(int i=1;i<n;i++)
//     {
//         for(int j=1;j<=i;j++)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//2. #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Entre the number:";
//     cin>>n;

//     for(int i=1;i<n;i++)
//     {
//         for(int j=n;j>=i;j--)
//         {
//             cout<<" ";
//         }

//         for (int k = 0; k <i; k++)
//         {
//            cout<<"*";
//         }
        
//         cout<<endl;
//     }
//     return 0;
// }


// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Entre the number:";
//     cin>>n;

//     for(int i=n;i>0;i--)
//     {
//         for(int j=i;j>=1;j--)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// Q3. Write a program to find the largest of n numbers taken from user using the function.

// #include<iostream>
// using namespace std;

// int largest(int n, int arr[]) {
//     int larger = arr[0];
//     for (int i = 0; i < n; i++) {
//         if (larger <= arr[i]) {
//             larger = arr[i];
//         }
//     }
//     return larger;
// }

// int main() {
//     int size;
//     int arr[500];

//     cout << "Enter the size of array:";
//     cin >> size;
//     for (int i = 0; i < size; i++) {
//         cout << "Enter the data:";
//         cin >> arr[i];
//     }

//     int ans = largest(size, arr);
//     cout << "Largest of array: " << ans;
//     return 0;
// }

//Q4.Write a program to accept mXn matrix &display it in natural form.

// #include<iostream>
// using namespace std;
// int main()
// {
//     int a,b;

//     cout<<"Enter the dimenssion of array:"<<endl;
//     cout<<"Enter the length:";
//     cin>>a;
//     cout<<"breath:";
//     cin>>b;

//     int matrix[a][b];

//     cout<<"Enter the data:";
//     for(int i=0;i<a;i++)
//     {
//         for(int j=0;j<b;j++)
//         {
//             cin>>matrix[i][j];
//         }
//     }
//     cout<<"output:"<<endl;

//     for(int i=0;i<a;i++)
//     {
//         for(int j=0;j<b;j++)
//         {
//             cout<<matrix[i][j]<<" ";
//         }
//         cout<<"\n";
//     }
//     return 0;

// }

// Q7. Write program to check weather the entered string is palindrom or not.
// #include <iostream>
// using namespace std;

// bool palindrom(const string&str)
// {
//     int left=0;
//     int right=str.length()-1;
//     while (left<right)
    
//     {
//         if(str[left]!=str[right])
//         {
//             return false;
//         }
//         left++;
//         right--;
//     }
//     return true;
// }

// Q9. Write a program to calculate the value of the series 
#include<iostream>
using namespace std;

class series
{
private:
    int n;
    int sum=0;
public:
series(){
    cout<<"Enter the value of n:";
    cin>>n;
}
void getdata();
void display();
};

inline void series::getdata()
{
    for(int i=0;i<=n;i++)
    {
        sum=sum+(i*i);
        
    }
}

series::~series()
{
}
