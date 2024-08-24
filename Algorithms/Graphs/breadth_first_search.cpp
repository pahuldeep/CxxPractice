#include <iostream>
#include <queue>
#include <vector>

using namespace std;

void bfs(vector<vector<int>> &adjlist, int start, vector<bool> &visited){
    
    queue<int> q;
    visited[start] = true;
    q.push(start);

    while(!q.empty()){
        int current = q.front();
        q.pop();

        cout << current << " ";

        for (int near: adjlist[current]){

            if(!visited[near]){
                visited[near] = true;
                q.push(near);
            }
        }
    }
}

void addEdge(vector<vector<int>> &adjlist, int u, int v){
    adjlist[u].push_back(v);
}

int main(){
    int nodes = 5;

    vector<vector<int>> adjlist(nodes);

    addEdge(adjlist, 0, 1);
    addEdge(adjlist, 0, 2);
    addEdge(adjlist, 1, 3);
    addEdge(adjlist, 1, 4);
    addEdge(adjlist, 2, 4);

    vector<bool> visited(nodes, false);

    cout << "breadth first traversal: ";
    bfs(adjlist, 0, visited);

    return 0;
}