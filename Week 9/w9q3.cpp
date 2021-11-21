#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n,t;
    cin>>n;
    vector<int> a;
    for(int i=0;i<n;i++){
        cin>>t;
        a.push_back(t);
    }
    sort(a.begin(),a.end());
    int sum=a[0]+a[1];
    vector<int> s;
    s.push_back(sum);
    for(int i=2;i<n;i++){
        sum=sum+a[i];
        s.push_back(sum);
    }
    sum=0;
    for(int i=0;i<s.size();i++)
        sum+=s[i];
    cout<<"OUTPUT:"<<endl<<sum;
    return 0;
}