#include<iostream>
#include<vector>


using namespace std;

//Vectors Of Pairs
/*
Vector of Pairs is a dynamic array filled with pairs instead of any primitive data type. 
Vector of pairs are no different from vectors when it comes to declaration and accessing the pairs.

How do I declare a vector of pair? :
Ans: To declare a vector of pairs we can use the syntax : vector<pair<string,int>> a;

How can I add a pair to an existing vector of pairs? :
Ans: To add a pair to an existing vector of pairs we can use the statement below: a.push_back(make_pair("ABC",15));
or
a.emplace_back("ABC",15);
push_back function helps in adding the elements to a vector, make_pair function converts the parameters into pairs.

*/


int main()
{
    //Initializing a Vector Of Pairs 
    vector<pair<int,int>> vec ={
        {1,2},
        {3,4},
        {5,6}
    };

   //Two Ways to inserting pairs in vector
   /*
     1.First Using member Function
     2.Second Using Curly Braces to make pair
   */
    vec.push_back(make_pair(7,8));  
    vec.push_back({9,10});
    
    cout<<"Vector Contains Pairs :";
    for(int i=0;i<vec.size();i++)
    {
        cout<<"("<<vec[i].first<<","<<vec[i].second<<")"<<" ";
    } 
    cout<<endl;

 
     vector<pair<int,string>> vec1;
     
     cout<<endl;
     int n;
     cout<<"How Many Pairs you want to insert in a vector"<<endl;
     cin>>n;

     for(int i=0;i<n;i++)
     {   
         int item1;
         string item2;
         cout<<"Enter First Value:"<<endl;
         cin>>item1;
         cout<<"Enter Second Value:"<<endl;
         cin>>item2;
 
         vec1.push_back(make_pair(item1,item2));        
     }
 
  
     cout<<endl;
     for(pair<int,string> i:vec1)
     {
         cout<<"("<<i.first<<","<<i.second<<")"<<" ";
     }





    return 0;
}