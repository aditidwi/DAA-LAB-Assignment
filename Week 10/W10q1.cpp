#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void display(vector<int> values, int count){
    cout<<"OUTPUT:"<<endl;
    cout<<"No. of non - conflicting activities: "<<count<<endl;
    cout<<"List of selected activities: ";
    for(int i=0;i<values.size();i++)
        cout<<values[i]<<", ";
}
void activity_selection(vector<int> a,vector<int> b,int n){
    // REAL WORKING STARTS HERE
    int t;
    vector<pair<int,int>> activity;
    for(int i=0;i<n;i++)
        activity.push_back(make_pair(b[i],a[i]));   // note that here we are inserting "b,a" and not "a,b"
    sort(activity.begin(),activity.end());
    int count = 0, current_end = -1;
    vector<int> values;
    for(int i=0;i<n;i++)
        if(activity[i].second > current_end){
            t = activity[i].second;
            values.push_back(t);
            count++;
            current_end = activity[i].first;
        }
    display(values,count);
}
int main(){
    int n,t;
    cin>>n;
    vector<int> a,b;
    for(int i=0;i<n;i++){
        cin>>t;
        a.push_back(t);
    }
    for(int i=0;i<n;i++){
        cin>>t;
        b.push_back(t);
    }
    activity_selection(a,b,n);
    return 0;
}