#include<iostream>
#include<algorithm>
#include<vector>

//Binary Search Implementation Using STL
//Using Vector

//Note:- In Order to use binary Search Stl all the element Should be sorted in Ascending Order
//Synatax Of Binary Search Stl
//binary_search(first_iterator,last_iterator,value)
//binary Search Stl return 1 if value is present and return 0 if value is not present 
using namespace std;


void print(vector<int>v)
{
  
   for(int i:v)
   {
       cout<<i<<" ";
   }

}

int main()
{
  
   int n;
   vector<int> v;
   cout<<"Enter the size of the vector"<<endl;
   cin>>n;
   cout<<"Enter the elements of the vector"<<endl;
   for(int i=0;i<n;i++)
   {
       int item;
       cin>>item;
       v.push_back(item);
   }
   cout<<"Original Vector"<<endl;
   print(v);
   
   cout<<endl;
   cout<<"After Sorting Of Vector"<<endl;
   sort(v.begin(),v.end());
   print(v);
   
   cout<<endl;
   cout<<"Enter The Element You Find To Search In Vector"<<endl;
   int x;
   cin>>x;
  
   if(binary_search(v.begin(),v.end(),x))  
   {
      cout<<"Element Present"<<endl;
   }
   else
   {
      cout<<"Element Not Present"<<endl;
   }



   return 0;
}