#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i;
    cin>>n;

    vector<int> v(n);
    for(i=0;i<n;i++)
    {
        cin>>v[i];
    }   

    int key;
    cin>>key;
    int found=0;

    int comparison=0;
    for(i=0;i<n;i++)
    {
        if(v[i]==key)
        {
            found=1;
            break;
        }
        else
        {
            comparison++;
        }
    }

    if(found)
    {
        cout<<"Number Found!! and required comparison: "<<comparison<<endl;
    }
    else
    {
        cout<<"Number Not Found!!"<<endl;
    }

    return 0;
}