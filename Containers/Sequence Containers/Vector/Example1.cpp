#include <iostream>
#include <conio.h>
#include <vector>

/*

Vectors are same as dynamic arrays with the ability to resize itself automatically 
when an element is inserted or deleted, with their storage being handled automatically by the container.
*/

using namespace std;

int main()
{

    vector<int> v; // Declaration Of the vector

    /* push_back() function is used to push elements into a vector from the back. 
     The new value is inserted into the vector at the end, after the current last element 
     and the container size is increased by 1. */
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);


    /*
      pop_back() function is used to pop or remove elements from a vector from the back. 
      The value is removed from the vector from the end, and the container size is decreased by 1. 
    */
    v.pop_back();
  
    cout<<"Printing Elements of the vector After Pop Back"<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" "; 
    }

    // Returns the number of elements in the vector.
    cout<<endl;
    cout << "Size :" << v.size() << endl;
    // Returns the size of the storage space currently allocated to the vector expressed as number of elements.
    cout << "Capacity: " << v.capacity() << endl;
 
    //reference operator [g] – Returns a reference to the element at position ‘g’ in the vector
    cout<<v[1]<<endl;

    v.push_back(4);
    v.push_back(5);

    //Returns a reference to the element at position ‘g’ in the vector
    cout<<v.at(2)<<endl;

    //This function can be used to fetch the first element of a vector container.
    cout<<v.front()<<endl;

    //This function can be used to fetch the last element of a vector container.
    cout<<v.back()<<endl;

    //clear() function is used to remove all the elements of the vector container, thus making it size 0. 
    v.clear();

    cout<<endl;
    cout<<"After Clear the vector Using Clear() function the size of the vector is :"<<v.size()<<endl;
    cout<<"Capacity :"<<v.capacity()<<endl;

    return 0;
}
