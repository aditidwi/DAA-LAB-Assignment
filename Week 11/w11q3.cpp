#include<iostream>
#include<vector>
using namespace std;
bool partition_sum(vector<int> a, int n, int sum){
	if(sum%2 != 0)
	    return false;
	bool part[n+1][sum/2 + 1];
	
    // top row = false
	for(int i=0;i<=sum/2;i++)
        part[0][i] = false;

	// leftmost column = true
	for(int i=0;i<=n;i++)
	    part[i][0] = true;

	for(int i=1;i<=n;i++)
		for(int j=1;j<=sum/2;j++)
		{
			part[i][j] = part[i-1][j];
			if (j >= a[i-1])
			part[i][j] = part[i][j] || part[i-1][j-a[i-1]];
		}
	return part[n][sum/2];
}
int main(){
    int n,t,sum=0;
    cin>>n;
    vector<int> a;
    for(int i=0;i<n;i++){
        cin>>t;
        sum =+ t;
        a.push_back(t);
    }
    cout<<"OUTPUT:\n";
    bool z = partition_sum(a,n,sum);
    if(z == true)
        cout<<"yes";
    else
        cout<<"no";
    return 0;
}