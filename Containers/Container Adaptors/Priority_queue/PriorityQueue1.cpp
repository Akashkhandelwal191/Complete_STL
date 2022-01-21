#include <iostream>
#include <queue>

// Note: By default, C++ creates a max-heap for priority queue.

using namespace std;

void showpq(priority_queue<int> q)
{  
    cout<<endl;
    cout << "Printing The Priority Queue is :" << endl;
    while (!q.empty())
    {
        cout << q.top() << " ";
        q.pop();
    }
    cout << endl;
}

int main()
{

    priority_queue<int> q;
    q.push(10);
    q.push(90);
    q.push(100);
    q.push(20);
    q.push(30);
    q.push(1);

   
    showpq(q);

    cout << "Priority Queue Size is :" << q.size() << endl;
    cout << "Priority Queue Top Element is :" << q.top() << endl;

    // Pop the element from the priority queue it always remove the value from the top
    q.pop();

    showpq(q);

    return 0;
}