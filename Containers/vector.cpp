#include<iostream>
#include<conio.h>
#include<vector>

using namespace std;

int main()
{
    
    vector<int> v;

    cout<<"Capacity: "<<v.capacity()<<endl;
    v[0] = 23;
    
    

   
 
    cout<<v[0]<<endl;
    cout<<v.back()<<endl;
    cout<<v.front()<<endl;
    // cout<<"Capacity "<<v.capacity()<<endl;

    // v.push_back(2);
    // cout<<"Capacity "<<v.capacity()<<endl;


    // v.push_back(3);
    // cout<<"Capacity "<<v.capacity()<<endl;

    // cout<<"Size "<<v.size()<<endl;


    // cout<<"Element at 2nd index "<<v.at(2)<<endl;  //Random Access

    // cout<<"Front "<<v.front()<<endl;
    // cout<<"Back "<<v.back()<<endl;


    //  cout<<"Before Pop"<<endl;
    //  for(int i:v)
    //  {
    //      cout<<i<<" ";
    //  }
    //  cout<<endl;

    //  v.pop_back();

    //  cout<<"After Pop"<<endl;
    //  for(int i:v)
    //  {
    //      cout<<i<<" ";
    //  }
    //  cout<<endl;

     







    return 0;
}

