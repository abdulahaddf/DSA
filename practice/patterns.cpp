#include <iostream>
using namespace std;

void print1(int n)
{
    for (int i = 0; i < n; i++)
    {
        // cout<<i;

        for (int i = 0; i < n; i++)
        {
            // cout<<i;
            cout << "#";
        }
        cout << "\n";
    }
};
void print2(int n)
{
    for (int i = 0; i < n; i++)
    {

        for (int j = n; j > i; j--)
        {
            // cout<<j;
            cout << "#";
        }
        cout << "\n";
    }
};
void print3(int n)
{
    for (int i = 0; i < n; i++)
    {
        /* space */
        for (int j = 0; j < n - 1 - i; j++)
        {
            cout << " ";
        };

        /* Star */
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "*";
        };

        /* space */
        for (int j = 0; j < n - 1 - i; j++)
        {
            cout << " ";
        };
        cout << "" << endl;
    }
};
void print4(int n)
{
    for (int i = 0; i < n; i++)
    {
        // for space
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        };
        for (int j = 0; j < 2 * n - (2 * i - 1); j++)
        {
            cout << "$";
        };
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        };
        cout << "" << endl;
    }
}

int main()
{
    int n = 7;
    //    cin>>n;
    print4(n);
}