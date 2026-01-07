#include <iostream>
#include<vector>
using namespace std;

int findMin(int n)
{
    int count=0; 
    vector<int> denomination = { 1, 2, 5, 10 };
    
    // Traverse through all denomination
    for (int i = denomination.size() - 1; i >= 0; i--) {
      count+=n/denomination[i];
      n=n%denomination[i];
   
    }
    return count; 
}

int main()
{
   
    int n = 39;
    cout<<findMin(n);
    return 0;
}