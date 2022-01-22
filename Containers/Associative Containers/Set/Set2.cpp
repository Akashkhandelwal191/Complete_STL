#include <iostream>
#include <set>

using namespace std;

/* Set Implementation Using STL

By Using greater<int> in a set paramter we make the set to store the value in descending order.

Now,The Set Stores the value Uniquely in Descending Order.

The Time Complexity Of Every Operation In Set is Log(n).

It Internally Implemented Using Red Black Tree.
*/

void show(set<int, greater<int>> s)
{
    cout << endl;
    cout << "The Size Of The Set Is : " << s.size() << endl;
    cout << "Priting The Value Of The Set :" << endl;
    for (auto i : s)
    {
        cout << i << " ";
    }
}

string empty(set<int, greater<int>> s)
{

    if (s.empty())
    {
        return "true";
    }
    else
    {
        return "false";
    }
}

int main()
{

    set<int, greater<int>> s;
    s.insert(56);
    s.insert(12);
    s.insert(90);
    s.insert(89);
    s.insert(887);

    show(s);
    
    cout<<endl;
    cout<<empty(s)<<endl;
 

    cout<<"Enter The Value You Want To Find In The Set"<<endl;
    int x;
    cin>>x;

    auto it = s.find(x);
    if(it == s.end())
    {
        cout<<"Element Not Present In The Set"<<endl;
    }
    else
    {
        cout<<"Element Found "<<(*it)<<endl;
    }




    return 0;
}
