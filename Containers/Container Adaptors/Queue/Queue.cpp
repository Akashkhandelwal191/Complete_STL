#include <iostream>
#include <queue>

using namespace std;

/*
Queue Implementation Using STL In C++
*/


void print(queue<int>q)
{
  
   cout<<endl;
   while(!q.empty())
   {
       cout<<q.front()<<" ";
       q.pop();
   }
   
}

int main()
{

    queue<int> q;
  
    //Insert Element in Queue
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    print(q);


    return 0;
}