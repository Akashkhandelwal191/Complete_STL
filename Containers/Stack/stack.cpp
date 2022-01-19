#include<iostream>
#include<stack>


using namespace std;


int main()
{

    stack<string> s;

    s.push("love");
    s.push("Babar");
    s.push("Kumar");

    cout<<"Top Element-->"<<s.top()<<endl;
    s.pop();
    cout<<"After the POP the element is: "<<s.top()<<endl;

    cout<<"The Size of the Stack is "<<s.size()<<endl;

    cout<<"Empty or not "<<s.empty()<<endl;
    
    
 
    return 0;
}