#include<iostream>
#include<cstring>       // for memset()
#include<vector>
using namespace std;
int coin_func(vector<int> a, int n, int m){
    if(m < 0)
        return 0;       // no solution exsists
    if(m == 0)
        return 1;       // not to include any coin is the only "ONE" possibility
    int table[m+1];                  
    memset(table, 0, sizeof(table));
    table[0] = 1;         // base case (taken above also)
    /*  
        Coins taken one each
        Changed the table[] values after index is greater than or equal to the value of the picked coin
    */
    for(int i=0; i<n; i++)
        for(int j=a[i]; j<=m; j++)         
            table[j] += table[j-a[i]];         
    return table[m];
}
int main(){
    int n,t;
    cin>>n;
    vector<int> a;
    for(int i=0;i<n;i++){
        cin>>t;
        a.push_back(t);
    }
    int max_val;
    cin>>max_val;
    cout<<"OUTPUT:\n";
    cout<<coin_func(a,n,max_val);
    return 0;
}