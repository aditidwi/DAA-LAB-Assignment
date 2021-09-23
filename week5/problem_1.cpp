#include <bits/stdc++.h>
using namespace std;

int main(){
    //
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("inp1.txt", "r", stdin);
    freopen("out1.txt", "w", stdout);
    //

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<char> arr(n);
        vector<int> freq(26);
        for(int i=0;i<n;i++){
            cin >> arr[i];
            freq[arr[i] - 'a']++;
        }
        int mx = 1;
        char mc;
        for(int i=0;i<26;i++){
            if(freq[i] > mx){
                mx = freq[i];
                mc = 'a'+i;
            }
        }
        if(mx == 1) cout << "No Duplicates Present\n";
        else cout << mc << ": " << mx << '\n';
    }

    return 0;
}
