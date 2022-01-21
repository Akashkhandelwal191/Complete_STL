#include<iostream>
#include<vector>
#include<algorithm>

//Implementation Of min_element() Function

using namespace std;



int main()
{

   vector<int> v;
   int n;
   cout<<"Enter size of the vector:"<<endl;
   cin>>n;
  
   cout<<"Enter the elements of the vector:"<<endl;
   for(int i=0;i<n;i++)
   {
       int item;
       cin>>item;
       v.push_back(item);
   }

   int min = *min_element(v.begin(),v.end());  

   cout<<"Minimum Element is : "<<min<<endl;



    return 0;
}

