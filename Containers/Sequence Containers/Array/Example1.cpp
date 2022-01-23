#include <iostream>
#include <array>

using namespace std;

// Array Implementation Using STL

string empty(array<int,5>ar)
{
   if(ar.empty())
   {
       return "true";
   }
   else
   {
       return "false";
   }
}

int main()
{

    array<int, 5> ar;

    cout << "Enter The Elements Of The Array" << endl;
    int size = ar.size();

    for (int i = 0; i < size; i++)
    {
        cin >> ar[i];
    }

    cout << endl;
    cout << "The Array Elements access Using Auto Keyword:" << endl;
    for (auto i : ar)
    {
        cout << i << " ";
    }

    cout << endl;
    cout << "The Array Elements are also access using at():" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << ar.at(i) << " ";
    }
    cout << endl;
    cout << "The array elements are (using operator[]) : "<<endl;
    for (int i = 0; i < 6; i++)
        cout << ar[i] << " ";
    cout << endl;


    cout<<"First Element Of The Array : "<<endl;
    cout<<ar.front()<<endl;

    cout<<"Last Element Of The Array : "<<endl;
    cout<<ar.back()<<endl;

    cout<<"Checking If Array is Empty Or Not:"<<endl;
    cout<<empty(ar)<<endl;

    array<int,10> ar1;
    ar1.fill(10);  //Fill Using Number 10
    cout<<endl;
    for(auto i:ar1)
    {
        cout<<i<<" ";
    }

    return 0;
}
