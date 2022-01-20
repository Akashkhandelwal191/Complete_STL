#include<iostream>
#include<vector>


using namespace std;

//Different Way Of Intilizing the Value Of The Vector

int main()
{

    vector<int> v(10); //it creates the vector size of 10 with value 0  if we not give any value intially
    vector<int> v1(5,2); //it creates the vector size of 5 with the intial value 2
    vector<int> v2 = {1,2,3,4,5}; //We can also intialize the value of vector at the time of declaration 

    for(auto i :v)
    {
        cout<<i<<" ";
    }
   
    cout<<endl;
    for(auto i:v1)
    {
        cout<<i<<" ";
    }

    cout<<endl;
    for(auto i:v2)
    {
        cout<<i<<" ";
    }


    return 0;
}