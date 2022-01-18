#include<iostream>
#include<algorithm>


using namespace std;

int main()
{
   string s = "Akash";

   reverse(s.begin(),s.end());

   cout<<s;

   int arr[] = {1,2,3,4,5};
   int n = sizeof(arr) / sizeof(arr[0]);

   reverse(arr,arr+n);
   
   cout<<endl;
   for(int i=0;i<n;i++)
   {
       cout<<arr[i]<<" ";
   }

  




    return 0;
}