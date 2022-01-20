#include<iostream>
#include<utility>


using namespace std;

/*
Member Functions

1)make_pair(): this template Function 
Allows ro create a value without the types
explicitly.

Syntax:

pair_name = make_pair(value1,value2);

*/

int main()
{

  pair<string,int> p;

  p = make_pair("Akash",15);

  cout<<p.first<<" ";
  cout<<p.second<<endl;
  
}