#include<iostream>
#include<map>
using namespace std;
void function(map<int,int> a,int n){
    if(n < 2)
        cout<<"NOT SUFFICIENT";
    else if (n == 2){
        
    }
    else{
        long int l=1, m=1;
        for(auto i=a.begin();i!=a.end();i++){
            l = l * (i -> first);
            m = m * (i -> second);
        }
        cout<<"OUTPUT:"<<endl<<max(l,m);
    }
}
int main(){
    int n,r,c;
    cin>>n;
    map<int,int> a;
    for(int i=0;i<n;i++){
        cin>>r>>c;
        a.insert(pair<int,int>(r,c));
    }
    function(a,n);
    
    return 0;
}