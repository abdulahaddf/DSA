#include <iostream>
#include<vector>
using namespace std;
 int findMin(int N) {
        int curr[] = {10, 5, 2, 1};
        int notes = 0;

        for (int i = 0; i < 4; i++) {
            notes += N / curr[i];
            N %= curr[i];
        }
        return notes;
    }
int main()
{
    int n = 3900;
    cout<<findMin(n);
    return 0;
}