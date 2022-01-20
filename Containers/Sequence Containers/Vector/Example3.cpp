#include<iostream>
#include<vector>


using namespace std;

//Different Way of Accessing The Value Of The Vector

int main()
{
  
   vector<int> v;

   int n;
   cout<<"Enter The Size Of The Vector"<<endl; 
   cin>>n;

   cout<<"Enter The Elements Of The Vector"<<endl;
   for(int i=0;i<n;i++)
   {
       int item;
       cin>>item;
       v.push_back(item);
   }


   //Simple Way Of Accessing The Value Of The Vector
   cout<<"Normal Accessing"<<endl;
   for(int i=0;i<n;i++)
   {
       cout<<v[i]<<" ";
   }

   
   cout<<endl;
   //By Using Iterator We Access the Value Of The Vector 
   vector<int> :: iterator it;
   cout<<"Access The Value Of The Vector Using Iterator"<<endl;
   for(it=v.begin();it!=v.end();it++)
   {
       cout<<(*it)<<" ";
   }
 
    //By Using range Loop We Also Access the Value of the vector this is the recommended way to access the value of the vector
    cout<<endl;
    cout<<"By Using Range Loop"<<endl;
    for(auto i:v)
    {
        cout<<i<<" ";
    }
  


    return 0;
}
