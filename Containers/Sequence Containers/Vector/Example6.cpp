#include<iostream>
#include<vector>

using namespace std;

//How to Insert Element in 2D Vector


int main()
{
    
    vector<vector<int>> v;
  
    int r,c;
    cout<<"Enter The Number Of Rows"<<endl;
    cin>>r;

    cout<<"Enter the Number Of Columns"<<endl;
    cin>>c;


    cout<<"Enter The Elements Of The Vector"<<endl;
    for(int i=0;i<r;i++)
    {  
        vector<int> temp;
        for(int j=0;j<c;j++)
        {
            int item;
            cin>>item;
            temp.push_back(item);
        }

        v.push_back(temp);
    }

    cout<<"Priting The Elements Of The Vector"<<endl;
    for(int i=0;i<v.size();i++)
    {
        for(int j=0;j<v[i].size();j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }


    return 0;
}