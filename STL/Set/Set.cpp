#include <iostream>
#include <set>
using namespace std;


int main() {
    set<int> s = {1, 2, 3};

    // Accessing elements using find()
    auto it = s.find(1);
    if (it != s.end())
        cout << "Element found: " << *it << endl;

    // Accessing elements using count()
    if (s.count(2))
        cout << "2 exists in the set" << endl;

    // Accessing all elements by traversal
    cout << "All elements: ";
    for (auto x : s)
        cout << x << " ";
    cout << endl;

    return 0;
}