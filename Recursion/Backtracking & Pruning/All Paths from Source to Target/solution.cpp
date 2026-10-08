#include <bits/stdc++.h>
using namespace std;

void search(vector<vector<int>>& paths, vector<int> path, int start, int finish, vector<vector<int>> edges){
    if(start == finish){
        paths.push_back(path);
    }
    
    for(int node: edges[start]){
        path.push_back(node);
        search(paths, path, node, finish, edges);
        path.pop_back();
    }
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	cin >> n;
	vector<vector<int>> edges;
	
	int c;
	for(int i = 0; i < n; i++){
	    cin >> c;
	    vector<int> e(c);
	    for(int j = 0; j < c; j++) cin >> e[j];
	    edges.push_back(e);
	}
	
	vector<vector<int>> paths;
	vector<int> path;
	search(paths, path, 0, n-1, edges);
	
	for(int i = 0; i < paths.size(); i++){
	    cout << 0 << " ";
	    for(int n: paths[i]) cout << n << " ";
	    cout << "\n";
	}

}
