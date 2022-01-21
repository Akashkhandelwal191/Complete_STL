#include<iostream>
#include<stack>


using namespace std;

/*
Stack Implementation Using STL In C++
*/


void print(stack<int>s)
{
  cout<<endl;
  cout<<"Size Of The Stack : "<<s.size()<<endl;
  while(!s.empty())
  {
      cout<<s.top()<<" ";
      s.pop();
  }

}

int main()
{
   stack<int> s;

   //s.push() Function Used To Insert value in Stack  
   s.push(1);
   s.push(2);
   s.push(3);
   s.push(4);

   //It Print The Top Value Of The Stack   
   cout<<"Top Value Of Stack : "<<s.top()<<endl;

   print(s);
  
   //Remove the value from the top of the stack
   s.pop();
  
   print(s);
     
  
    return 0;
}