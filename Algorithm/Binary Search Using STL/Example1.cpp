#include <iostream>
#include <algorithm>

// Binary Search Implementation Using STL
//Using Array

//Note:- In Order to use binary Search Stl all the element Should be sorted in Ascending Order
//Synatax Of Binary Search Stl
//binary_search(first_iterator,last_iterator,value)
//binary Search Stl return 1 if value is present and return 0 if value is not present 

using namespace std;

void showarr(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int n;
    cout << "Enter the size of the array:" << endl;
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Original Array:" << endl;
    showarr(arr, n);
    cout << endl;
    cout << "After Sorting Of Array" << endl;
    sort(arr, arr + n);
    showarr(arr, n);

    cout << endl;
    cout << "Enter The Element You Want To Find Search In A Array:" << endl;
    int x;
    cin >> x;

    if (binary_search(arr, arr + n, x))
    {
        cout << "Element Present" << endl;
    }
    else
    {
        cout << "Element Not Present" << endl;
    }

    return 0;
}
