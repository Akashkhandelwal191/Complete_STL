#include<iostream>
#include<algorithm>

using namespace std;

/*How to sort in descending order? 
sort() takes a third parameter that is used to specify the order in which elements are to be sorted.
We can pass the “greater()” function to sort in descending order. This function does a comparison in a way that puts 
greater elements before.*/



void show(int arr[],int n)
{
 
  for(int i=0;i<n;i++)
  {
      cout<<arr[i]<<" ";
  }
  cout<<endl;
}

int main()
{

  int n;
  cout<<"Enter the size of the array"<<endl;
  cin>>n;
  int arr[n];
  cout<<"Enter the elements of the array"<<endl;
  for(int i=0;i<n;i++)
  {
      cin>>arr[i];
  }

  cout<<"Original Array"<<endl;
  show(arr,n);
 
  //Sort the array in Descending Order
  sort(arr,arr+n,greater<int>());
  
  cout<<"After Sorted In Descending Order"<<endl;
  show(arr,n);

  return 0;

}