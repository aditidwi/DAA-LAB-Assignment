#include <bits/stdc++.h>
using namespace std;


int main(){
    //
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("inp2.txt", "r", stdin);
    freopen("out2.txt", "w", stdout);
    //
    int n;
    cin >> n;
    vector<vector<int>> g(n, vector<int> (n, 0));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> g[i][j];
        }
    }

    queue<int> q;
    vector<int> visited(n, 0);
    vector<int> color(n, -1);
    
    q.push(0);
    color[0] = 1;
    bool flag = true;
    while(!q.empty()){
        int u = q.front();
        q.pop();
        for(int i=0;i<n;i++){
            if(g[u][i] == 1 and !visited[i]){
                if(u == i){
                    flag = false;
                    break;
                }
                if(color[i] == -1){
                    color[i] = !color[u];
                }else{
                    if(color[i] == color[u]){
                        flag = false;
                        break;
                    }
                }
                q.push(i);
            }
        }
        if(flag == false) break;
        visited[u] = 1;
    }
    if(flag == false){
        cout << "Not Bipartite\n";
    }else{
        cout << "Bipartite\n";
    }




    return 0;
}
