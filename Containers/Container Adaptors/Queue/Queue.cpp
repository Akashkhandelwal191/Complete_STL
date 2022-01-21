#include <iostream>
#include <queue>

using namespace std;

/*
Queue Implementation Using STL In C++
*/

void print(queue<int> q)
{

    cout << endl;
    cout << "Size : " << q.size() << endl;
    cout << "Printing The Element Of The Queue:" << endl;
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
}

int main()
{

    queue<int> q;

    // Insert Element in Queue
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    print(q);

    // Remove the element from the queue
    q.pop();

    print(q);

    return 0;
}