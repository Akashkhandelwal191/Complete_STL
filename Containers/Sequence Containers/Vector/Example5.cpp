#include <iostream>
#include <vector>

using namespace std;

// Vectors Of Vectors or 2D Vector

/*

Vector of Vectors is a two-dimensional vector with a variable number of rows where each row is vector.
Each index of vector stores a vector which can be traversed and accessed using iterators.
It is similar to an Array of Vectors but with dynamic properties.

A 2D vector is a vector of the vector. Like 2D arrays, we can declare and assign values to a 2D vector!

Syntax:-
vector<vector<data_type>> vec;

Example:-

vector<vector<int>> vec{ { 1, 2, 3 },
                         { 4, 5, 6 },
                         { 7, 8, 9, 4 } };
where vec is the vector of vectors with different
      number of elements in different rows

*/

int main()
{

   vector<vector<int>> v{
       {1, 2, 3},
       {4, 5, 6},
       {7, 8, 9}};

   cout << "First Approach For Priting" << endl;
   cout << "Priting 2D Vector" << endl;
   for (int i = 0; i < v.size(); i++)
   {
      for (int j = 0; j < v[i].size(); j++)
      {
         cout << v[i][j] << " ";
      }
      cout << endl;
   }
  
   cout<<endl;
   cout << "Second Approach For Printing" << endl;
   for (vector<int> vec1 : v)
   {
      for (int x : vec1)
      {
         cout << x << " ";
      }
      cout<<endl;
   }

   return 0;
}
