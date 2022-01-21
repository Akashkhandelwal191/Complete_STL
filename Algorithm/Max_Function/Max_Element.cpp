#include<iostream>
#include<vector>
#include<algorithm>

//Implementation Of max_element() Function

using namespace std;

/*

if we want to find the largest element in an array or vector or list or in a sub-section. 
To serve this purpose, we have std::max_element in C++.

std::max_element is defined inside the header file and it returns an iterator pointing to the element with the largest value in the range [first, last).

std::max_element can be used in two ways. The comparisons can be performed either usingoperator < (first version), or using a pre-defined function (second version). 
If more than one element satisfies the condition of being the largest, the iterator returned points to the first of such elements.



*/

void show(vector<int> &v)
{  
   cout<<endl;
   for(auto i:v)
   {
     cout<<i<<" ";
   }

}

int main()
{

   vector<int> v;

   int n;
   cout<<"Enter The Size Of Vectors:"<<endl;
   cin>>n;

   cout<<"Enter The Elements Of the Vector:"<<endl;
   for(int i=0;i<n;i++)
   {
       int item;
       cin>>item;
       v.push_back(item);
   } 
   cout<<"Printing The Elements Of The Vector:"<<endl;
   show(v);
   
   int max = *max_element(v.begin(),v.end());
     
   cout<<endl;
   cout<<"The Max Element Is : "<<max<<endl;
  

}