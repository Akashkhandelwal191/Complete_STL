#include<iostream>
#include<deque>

//Deque Standard For Double Ended Queue
using namespace std;


int main()
{

  deque<int> d;

  d.push_back(1);
  d.push_front(2);


  for(int i:d){
      cout<<i<<" ";
  }
  d.pop_back();  
  cout<<endl;
  for(int i:d){
      cout<<i<<" ";
  } 

  d.push_back(3);
  d.push_back(4);

  for(int i:d){
      cout<<i<<" ";
  }
  cout<<endl;
  cout<<"Front "<<d.front()<<endl;
  cout<<"End "<<d.back()<<endl;     
  cout<<"Empty Or not "<<d.empty()<<endl;

//   d.pop_front();
  cout<<"After Pop Front"<<endl;
  for(int i:d){
    cout<<i<<" ";
  }

  cout<<"Before Erase "<<d.size()<<endl; //Size Means How Many Elements are Present in this list.
  d.erase(d.begin(),d.begin()+1);
  cout<<"After Erase "<<d.size()<<endl;  


  cout<<"After Erase"<<endl;
  for(int i:d){
      cout<<i<<" ";
  }
  cout<<endl;
  cout<<d.at(1)<<endl;

}