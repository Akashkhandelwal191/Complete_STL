#include<iostream>
#include<set>

using namespace std;

//Set Implementation Using STL
/*
By Default It Stores The Values in Ascending Order.
In Set Every Value Is Unique.
The Time Complexity Of Every Operation in Set Is log(n) 

*/

void show(set<int> s)
{
   
  cout<<endl;
  cout<<"The Size Of The Set :"<<s.size()<<endl; 
  cout<<"Priting The Value Of The Set:"<<endl;
  for(auto i:s)
  {
      cout<<i<<" ";
  }

}

string empty(set<int>s)
{
    if(s.empty())
    {
        return "true";
    }
    else
    {
        return "false";
    }
}

int main()
{
    set<int> s;
   
    s.insert(5);
    s.insert(4);
    s.insert(5);
    s.insert(3);
    s.insert(2);
    s.insert(1);
    s.insert(0);

    show(s);
    
    cout<<endl;
    set<int> :: iterator it;
    it = s.find(3);
    if(it == s.end())
    {
        cout<<"Element Not Found In Set"<<endl;
    }
    else
    {
        cout<<"Element Found : "<<*it<<endl;
    }

    cout<<empty(s)<<endl;
    
    //It Removes all the elements from the set
    s.clear();


    cout<<empty(s)<<endl;
    cout<<s.size()<<endl;


    return 0;
}