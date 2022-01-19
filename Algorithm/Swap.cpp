#include <iostream>
#include <algorithm>

//Implementation Of Swap Function Using STL
//Synatx Of Swap Function:-
//It takes two Paramters 
//swap(firtvalue,secondvalue) 

using namespace std;

int main()
{

    int a = 3;
    int b = 5;

    swap(a, b);

    cout << "After Swapping the Value of a: " << a << endl;
    cout << "After Swapping the Value of b: " << b << endl;

    return 0;
}