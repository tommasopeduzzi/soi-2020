#include <iostream>
#include <vector>
#define int long long
using namespace std;

signed main(){
    int n, m;
    cin >> n;
    cin >> m;
    vector<vector<int> > adj(n);
    for (int i = 0; i < m; i++){
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
}