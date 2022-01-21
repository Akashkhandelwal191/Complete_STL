#include <iostream>
#include <queue>

using namespace std;

/*

How to create a min-heap for the priority queue?
C++ provides the below syntax for the same.

Syntax:-

priority_queue <int, vector<int>, greater<int>> g;

*/

void showpq(priority_queue<int, vector<int>, greater<int>> pq)
{

    cout << endl;
    cout << "Printing The Priority Queue is:" << endl;
    while (!pq.empty())
    {

        cout << pq.top() << " ";
        pq.pop();
    }
}

int main()
{

    priority_queue<int, vector<int>, greater<int>> pq;

    pq.push(10);
    pq.push(100);
    pq.push(90);
    pq.push(30);
    pq.push(20);
    pq.push(7);

    showpq(pq);
    cout<<endl;
    cout << "Priority Queue Size: " << pq.size() << endl;
    cout << "Priority Queue Top Value: " << pq.top() << endl;

    cout << "Remove the elements from the priority queue" << endl;
    pq.pop();

    showpq(pq);

    return 0;
}
