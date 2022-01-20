#include<iostream>
#include<conio.h>
#include<algorithm>

/*Inbuilt Sorting Function is Combination of Insertion sort,Quick Sort,Heap Sort ==Intro Sort
 C++ STL provides a similar function sort that sorts a vector or array (items with random access). 
 It generally takes two parameters, the first one being the point of the array/vector from 
 where the sorting needs to begin and the second parameter being the length up to which we want 
 the array/vector to get sorted. The third parameter is optional and can be used in cases such as 
 if we want to sort the elements lexicographically.
 By default, the sort() function sorts the elements in ascending order.*/

using namespace std;

int main()
{

  int arr[] = {6,2,99,2,32,55};

  int n = sizeof(arr) / sizeof(arr[0]);

  sort(arr,arr+n);  //it takes two parameters

  
  for(int i=0;i<n;i++)
  {
      cout<<arr[i]<<" ";
  }

 cout<<"Size of array :"<<sizeof(arr)<<endl;
  

}