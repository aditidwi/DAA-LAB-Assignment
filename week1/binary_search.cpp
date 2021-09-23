#include <bits/stdc++.h>
using namespace std;
int binarySearch(vector<int> &arr, int key, int &comps){
    int low = 0, high = arr.size()-1;
    while(low<=high){
        int mid = ((long long)low+high)/2;
        comps++;
        if(arr[mid] == key) return comps;
        else if(arr[mid] < key) low = mid+1;
        else high = mid-1;
    }
    return -1;
}


int main(){
    //
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    //

    int t;
    cin >> t;
    while(t--){
        int n, key;
        cin >> n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
        cin >> key;
        int comps = 0;
        int ans = binarySearch(arr, key, comps);
        if(ans == -1) cout << "Not ";
        cout << "Present " << comps << '\n';
    }
    return 0;
}
