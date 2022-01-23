#include <iostream>
#include <array>

using namespace std;

/*
Array Implementation Using STL
*/

int main()
{

    array<int, 6> ar1 = {1, 2, 3, 4, 5, 6};

    array<int, 6> ar2 = {7, 8, 9, 10, 11, 12};
  
    cout<<endl;
    cout << "Before Swapping : " << endl;
    cout << "Array 1 Elements : " << endl;
    for (auto i : ar1)
    {
        cout << i << " ";
    }
   
    cout<<endl;
    cout << "Array 2 Elements : " << endl;
    for (auto i : ar2)
    {
        cout << i << " ";
    }

    ar1.swap(ar2);
    
    cout<<endl;
    cout << "After Swapping :" << endl;
    cout << "Array 1 Elements : " << endl;
    for (auto i : ar1)
    {
        cout << i << " ";
    }
   
    cout<<endl;
    cout << "Array 2 Elements : " << endl;
    for (auto i : ar2)
    {
        cout << i << " ";
    }

    return 0;
}