#include<iostream>
#include<queue>

using namespace std;

int main()
{
 
    queue<string> q;

    q.push("love");
    q.push("babar");
    q.push("Kumar");

    cout<<"First Element "<<q.front()<<endl;   
    q.pop();
    cout<<"First Element After Pop "<<q.front()<<endl;

    cout<<q.back()<<endl;

    cout<<"the size of the queue "<<q.size()<<endl;

     



    return 0;
}