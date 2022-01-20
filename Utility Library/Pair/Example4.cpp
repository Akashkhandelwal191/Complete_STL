#include<iostream>
#include<utility>

using namespace std;

/*
2) swap: This function swaps the contents of one pair object with the contents of another pair object. 
The pairs must be of the same type. 

Syntax:-
pair1.swap(pair2) ;

For two given pairs say pair1 and pair2 of the same type, 
the swap function will swap the pair1.first with pair2.first and pair1.second with pair2.second. 

*/


int main()
{
   pair<char,int> pair1 = make_pair('A',1);
   pair<char,int> pair2 = make_pair('B',2);

   cout<<"Before Swapping :"<<endl;
   cout<<"Contents Of Pair1 :"<<pair1.first<<"  "<<pair1.second<<endl;
   cout<<"Contents Of Pair2 :"<<pair2.first<<"  "<<pair2.second<<endl;


   pair1.swap(pair2);

   cout<<"After Swapping :"<<endl;
   cout<<"Contents Of Pair1 :"<<pair1.first<<"  "<<pair1.second<<endl;
   cout<<"Contents Of Pair2 :"<<pair2.first<<"  "<<pair2.second<<endl;


    return 0;
}