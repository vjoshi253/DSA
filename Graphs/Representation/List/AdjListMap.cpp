////////////////////////////////////////
// Adjacency List Representation of Graph
// Space Complexity: O(V + E)
////////////////////////////////////////

#include<bits/stdc++.h>
using namespace std;

int main() {
    
    // Dummy graph for reference.
	int n=6;
	vector<vector<int>> edges={{0,3},{1,2},{1,5},{2,4},{3,5},{5,4},{5,0}};

    // Empty adjacency list. 
	map<int,vector<int>> graph;

    // Populate the list.
	for(int i=0;i<edges.size();i++) {
		int a=edges[i][0];
		int b=edges[i][1];
		graph[a].push_back(b);
	}

    // Print the result.
	for(auto a:graph) {
		cout<<a.first<<"---->";
		for(int i=0;i<a.second.size();i++) {
			cout<<a.second[i]<<" ";
		}
		cout<<endl;
	}
}
