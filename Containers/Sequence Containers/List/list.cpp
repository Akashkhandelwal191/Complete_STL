#include<iostream>
#include<list>

//List is Used For Doubly Link list.
using namespace std;


int main(){

  list<int> l;

  l.push_back(1);
  l.push_front(2);

  for(int i:l)
  {
      cout<<i<<" ";
  }

   cout<<endl;
   cout<<"Size of list :"<<l.size();
   



    return 0;
}