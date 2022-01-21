//As We have discussed earlier,Iterators are used to point the containers in STL
//beacuse of iterators it is possible for an algorithm to manipulate different types of data structures 
//Containers.


//Algorithm in STL don't work on containers,instead they work on iterators,they manipulate the data pointed by 
//iterators thus it doesn't matter what is the type of the container and because of this an algorithm
//will work for any type of element and we don'tt have to define same algorithm for different types 
//of containers


//Definig an Iterator in STL 
//container_type <parameter_list>::iterator iterator_name;


//Iterators can be used to traverse the container and we can de-refernce the iterator to get the value of 
//element it is pointing to 
//Example--


#include<iostream>
#include<vector>

using namespace std;

int main()
{
   vector<int> v(10);

   vector<int>::iterator i;


   for(i=v.begin();i!=v.end();i++)
   {
       cout<<*i<<" ";
   }


    return 0;
}




