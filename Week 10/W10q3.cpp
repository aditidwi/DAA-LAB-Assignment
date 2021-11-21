#include<iostream>
#include<map>
#include<vector>
using namespace std;
int main(){
    int n,t;
    cin>>n;
    map<int,int> a;
    vector<int> v;
    for(int i=0;i<n;i++){
        cin>>t;
        v.push_back(t);
    }
    for(int i=0;i<n;i++)
        a[v[i]]++;
    int count = 0;
    cout<<"OUTPUT:\n";
    for(auto i=a.begin();i!=a.end();i++)
        if(i->second > n/2){
            cout<<"yes"<<endl<<i->first;
            count = 1;
        }
    if(count == 0)
        cout<<"no";
    return 0;
}