#include<iostream>
#include<deque>

//Deque Standard For Double Ended Queue
using namespace std;


void show(deque<int> d)
{   
   cout<<endl;
   cout<<"Accessing The Value Of Deque Using auto keyword in Loop"<<endl;
   cout<<"Size Of The Deque Currently : "<<d.size()<<endl;
   //It Is Simple Way Of Accessing The Value Of The Deque
   for(auto i:d)
   {
     cout<<i<<" ";
   }
}

 void showdq(deque<int> d)
 { 
   cout<<endl;
   cout<<"Accessing The Value Of Deque Using Iterator "<<endl;
   cout<<"Size OF The Deque Currently : "<<d.size()<<endl;
   //It Is Another Way Of Accessing The Value Of The Iterator Using Iterator.

   deque<int>::iterator it;
   
   for(it=d.begin();it!=d.end();it++)
   {
     cout<<(*it)<<" ";
   }

 }


int main()
{

  deque<int> d;

  int n;
  cout<<"Enter the number of elements you want to insert in a deque"<<endl;
  cin>>n;
  
  cout<<endl;
  cout<<"Enter the elements :"<<endl;
  for(int i=0;i<n;i++)
  {
     int item;
     cin>>item;
     d.push_back(item);  //It Pushes the element in deque to the back
  }

  show(d);

  d.push_front(90);   //It Pushes the element in deque to the front
  d.push_front(30);
  
  show(d);
  
  cout<<endl;
  cout<<"Pop Operation Perform From The Back: "<<endl;
  d.pop_back(); //It removes or pops the last value from the deque

  show(d);
 
  cout<<endl;
  cout<<"Pop Operation Perform From The Front : "<<endl;
  d.pop_front();

  show(d);
  cout<<endl;
  cout<<"Front Element Of The Deque : "<<d.front()<<endl;
  cout<<"Back Element Of The Deque  :  "<<d.back()<<endl;

  showdq(d);




}