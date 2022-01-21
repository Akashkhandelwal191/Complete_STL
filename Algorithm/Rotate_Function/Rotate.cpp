#include<iostream>
#include<algorithm>
#include<vector>
#include<numeric>

using namespace std;



int main()
{
  
   vector<int> v;
 
   int n;
   cout<<"Enter the size of the vector"<<endl;
   cin>>n;

   cout<<"Enter the elements Of the vector"<<endl;
   for(int i=0;i<n;i++)
   {
       int item;
       cin>>item;
       v.push_back(item);
   }
  
   




    return 0;
}