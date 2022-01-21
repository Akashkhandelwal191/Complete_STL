#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>



using namespace std;

void show(vector<int> &v)
{  
    cout<<"Priting Elements Of the vector"<<endl;
    for(auto i:v)
    {
        cout<<i<<" ";
    }
}

int main()
{

   vector<int> v;
   int n;
   cout<<"Enter The Size Of The Vector : "<<endl;
   cin>>n;
  
   cout<<"Enter The Elements Of The Vector : "<<endl;
   for(int i=0;i<n;i++)
   {
       int item;
       cin>>item;
       v.push_back(item);
   }
   show(v);

   int sum = accumulate(v.begin(),v.end(),2);
     
   cout<<endl;
   cout<<"The Sum is:"<<sum<<endl;  
   


    return 0;
}