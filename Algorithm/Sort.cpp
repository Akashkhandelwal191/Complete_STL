#include<iostream>
#include<conio.h>
#include<algorithm>

//Inbuilt Sorting Function is Combination of Insertion sort,Quick Sort,Heap Sort ==Intro Sort
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