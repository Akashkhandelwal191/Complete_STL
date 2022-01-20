#include <iostream>
#include <algorithm>
#include <vector>

// Reverse Function Implementation Using STL

using namespace std;

void print(vector<int> &v)
{

    cout << endl;
    for (auto i : v)
    {
        cout << i << " ";
    }
}

int main()
{

    vector<int> v;

    int n;
    cout << "Enter the size of the vector" << endl;
    cin >> n;

    cout << "Enter the elements of the vector" << endl;
    for (int i = 0; i < n; i++)
    {
        int item;
        cin >> item;
        v.push_back(item);
    }

    cout << "Original Array" << endl;
    print(v);

    cout<<endl;
    cout << "After Reversing of the array" << endl;
    reverse(v.begin(), v.end());
    print(v);

    return 0;
}
