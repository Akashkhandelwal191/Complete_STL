#include <iostream>
#include <algorithm>

// Implementation Of Swap Function Using STL
// Synatx Of Swap Function:-
/*
The function std::swap() is a built-in function in the C++ Standard Template Library (STL)
which swaps the value of two variables.

Parameters: The function accepts two mandatory parameters a and b which are to be swapped.
            The parameters can be of any data type.

Return Value: The function does not return anything, it swaps the values of the two variables.
*/
// It takes two Paramters
// swap(firtvalue,secondvalue)

using namespace std;

int main()
{

    int a = 3;
    int b = 5;

    cout << "Before Swapping the value of a:" << a << endl;
    cout << "Before Swapping the value of b:" << b << endl;

    swap(a, b);
  
    cout<<endl;
    cout << "After Swapping the Value of a: " << a << endl;
    cout << "After Swapping the Value of b: " << b << endl;

    return 0;
}