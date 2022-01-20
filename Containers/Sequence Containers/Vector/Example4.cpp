#include<iostream>
#include<vector>



using namespace std;

//Passing Vector through Function
/*
1.By Reference
2.By Copying the value of the vector

*/

//It Creates The Copied Vector that means that any changes we do here does not reflect in original vector. 
void show(vector<int>v) 
{
  v.push_back(6);
  cout<<"By Passing The Value Of The Vector And Then Print"<<endl;
  for(auto i:v)
  {
     cout<<i<<" ";
  }

}

/*It doesn't Creates The Copies Of The Vector Here We Using Reference Of the Vector
 means that here we are dealing with actual value of the vector if we do any changes here it does reflect in a 
 Original vector */ 
void showvector(vector<int> &v)  
{
  cout<<endl;
  v.push_back(60);
  for(int i:v)
  {
     cout<<i<<" ";
  }

}


int main()
{

   vector<int> v;

   int n;
   cout<<"Enter The Size Of The Vector"<<endl;
   cin>>n;

   cout<<"Enter the Elements Of The Vector"<<endl;
   for(int i=0;i<n;i++)
   {
       int item;
       cin>>item;
       v.push_back(item);
   }
   show(v); 
   cout<<endl;
   cout<<"Printing The Value Of The Vector In Main Function"<<endl;
   for(auto i:v)
   {
       cout<<i<<" ";
   }

   //By Using Reference
   vector<int> v1;

   int n1;
   cout<<endl;
   cout<<"Enter The Size Of The Vector"<<endl;  
   cin>>n1;

   cout<<"Enter The Elements Of The Vector"<<endl;
   for(int i=0;i<n1;i++)
   {
      int item;
      cin>>item;
      v1.push_back(item);
   }
   cout<<endl;
   cout<<"By reference"<<endl;
   showvector(v1);   
   
   cout<<endl;
   cout<<"Priting The Value Of the Vector By Reference In Main"<<endl;
   for(auto i:v1)
   {
       cout<<i<<" ";
   }   




    return 0;
}

