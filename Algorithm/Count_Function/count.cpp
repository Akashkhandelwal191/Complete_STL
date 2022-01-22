#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

//Count() Function Implementation Using STL(Algorithm)

/*
count(first_iterator,last_iterator,x) :- To count the occurrences of x in vector.
*/

void print(vector<int> &v)
{
   cout<<endl;
   for(int i:v)
   {
       cout<<i<<" ";
   }

}


int main()
{

    vector<int> v;

    int n;
    cout<<"Enter The Number : "<<endl;
    cin>>n;
  
    cout<<"Enter the elements : "<<endl;
    for(int i=0;i<n;i++)
    {
        int item;
        cin>>item;
        v.push_back(item);
    }
    print(v);
  
    cout<<endl;

    //It Counts Occurrence Of 10 In Vector
    cout<<count(v.begin(),v.end(),10);



    return 0;
}