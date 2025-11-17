#include <iostream>
using namespace std;

// int add(int a, int b)
// {
//     int c;
//     c = a + b;
//     return c;
// }

// class Employee
// {
// public:
//     string name;
//     int salary;
//     void printDetails()
//     {
//         cout << "The name of our first employee is" << this->name << "and the salary is" << this->salary << "dollars" << endl;
//     }
// };

int swap(int &a, int &b)
{
    int t = a;
    a = b;
    b = t;
}

int main()
{

    // cout<<"Hello world";
    // int marks = 100;
    // cout<<"marks is"<<marks;
    // int a,b;
    // cout<<"Enter the value of A"<<endl;
    // cin>>a;
    // cout<<"Enter the value of B"<<endl;
    // cin>>b;
    // cout<<"The sum of the value is "<< add(a,b);
    // cout<<"The Sum of the value is "<< a + b;
    // while(a<b)
    // {
    //     cout<<"value of a is "<< a <<endl ;
    //     a++;
    // }
    // cout<<&a;

    // Employee har;
    // har.name = "Ahad";
    // har.salary = 100;
    // har.printDetails();

    // int a, b;
    // a = 10;
    // b = 20;
    // int *p = &a;
    // cout << "original value of a is " << a << endl;
    // cout << "original value of b is " << b;

    // swap(a, b);
    // cout << "changed value of a is " << a << endl;
    // cout << "changed value of b is " << b;

    // cout << "value of a is " << a<<endl;
    // cout << "address of a is " << &a<<endl;
    // cout << "address of p is " << p<<endl;
    // cout << "value of p is " << *p<<endl;
    // cout << "value s of p is " << &p<<endl;

int arr[] = {2,4,6,9,0,-5, 3, 11, 29, -456};
int length = 10;
int largest = arr[0];
// int largest_test =0;
for (int i = 0; i < length ; i++)
{
 if (arr[i] > largest)
 {
     largest = arr[i];
    
 }
cout<<"the largest number of the array is"<<largest;

// return 0;

}






    return 0;
}