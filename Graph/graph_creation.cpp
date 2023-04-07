#include<iostream>
#include<unordered_map>
#include<set>
using namespace std;

class graph{
    public:
    unordered_map<int, set<int>> adj;

    void addEdge(int u, int v, bool direction){
        //0->undirected
        //1->directed graph

        adj[u].insert(v);

        if(direction==0){
            adj[v].insert(u);
        }
    }

    void printAdjList(){
        cout << "Printing the Adjacency List: " << endl;
        for(auto i:adj){
            cout << i.first << "->";
            for(auto j:i.second){
                cout << j << " ";
            }
            cout << endl;
        }
    }
};

int main(){
    int n;
    cout << "Enter the number of nodes: " << endl;
    cin >> n;

    int m;
    cout << "Enter the number of edges: " << endl;
    cin >> m;

    graph g;

    cout << "Enter the edges: " << endl;
    for(int i=0; i<m; i++){
        int u, v;
        cin>>u>>v;

        //creating an undirected graph
        g.addEdge(u, v, 0);
    }

    g.printAdjList();


    return 0;
}