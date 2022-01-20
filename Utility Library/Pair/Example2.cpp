#include<iostream>
#include<utility>


using namespace std;


//Initializing a Pair: We can also initialize a pair. 
/*Syntax:-
pair (data_type1, data_type2) Pair_name (value1, value2) 

*/

int main()
{

   pair<int,string> p(15,"Akash");

   cout<<p.first<<" ";
   cout<<p.second<<" ";

    return 0;
}