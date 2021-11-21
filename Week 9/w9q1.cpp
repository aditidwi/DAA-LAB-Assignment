#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    const int max=INT_MAX;
    int t;
    cin>>t;
    int c;
    int a[t][t];
    for(int j=0;j<t;j++)
        for(int k=0;k<t;k++){
            cin>>c;
            if(c == -1)
                c = max;
            a[j][k] = c;
        }
    for(int i=0;i<t;i++)
        for(int j=0;j<t;j++)
            for(int k=0;k<t;k++){
                if(a[i][k] == max || a[k][j] == max)
                    continue;
                else if(a[i][j] > a[i][k] + a[k][j])
                    a[i][j] = a[i][k] + a[k][j];
            }
    for(int j=0;j<t;j++)
        for(int k=0;k<t;k++)
            if(a[j][k] == max)
                a[j][k] = -1;
    cout<<"OUTPUT:- "<<endl<<"Shortest Distance Matrix: "<<endl;
    for(int j=0;j<t;j++){
        for(int k=0;k<t;k++)
            cout<<a[j][k]<<" ";
        cout<<endl;
    }
    return 0;
}