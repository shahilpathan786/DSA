#include <iostream>
using namespace std;
#include <list>
#include <queue>

class Graph{
    int V;
    list <int> *l;

public:
    Graph(int V){
        this->V = V;
        l = new list <int> [V];
    }
 

    void addEdge(int u , int v){
        l[u].push_back(v);
        l[v].push_back(u);

    }

    void printadjls(){
        for(int i = 0 ; i < V ; i++){
            cout << i << " : ";
            for(int list : l[i]){
                cout << list << " ";
            }
            cout << endl;
        }
    }
 
    void bfsTraversal(){
        queue <int> q;
        vector <bool> vis (V , false);
        q.push(0);
        while(!q.empty()){
            int u = q.front();
            q.pop();
            cout << "u" << " ";

            for(int v : l[u]){
                if(!vis[v]){
                    vis[V] = true;
                    q.push(v);
                }
            }
        }

    }


    void dfsTraversal(int u , vector<bool> &vis){
        cout<< u << endl;
        vis[u] = true;
        for(int v : l[u]){
            if(!vis[v]){
                dfsTraversal(v , vis);
            }
        }
    }
    // if there is too many source than we have to give multiple source to the recurrsion funtion so that every source count.
// 
    void dfs(){
        int source = 0;
        vector <bool> vis(V , false);
        for(int i = 0 ; i < V ; i++){
            if(!vis[i]){
                dfsTraversal(i , vis);
            }
        }
    }


    bool detectdfscycle(int src , int par , vector<bool> &vis){
        vis[src] = true;
        list<int> neighbours = l[src];
        for(int v : neighbours){
            if(!vis[v]){
                detectdfscycle(v , src , vis);
                return true;

            } else if(v != par){
                return true;
            }

        }
        return false;


    }



    bool detectCycle(){
        vector<bool> vis(V , false);

        for(int i = 0 ; i < V ; i++){
            if(!vis[i]){
                detectdfscycle(i , -1 , vis);
                return true;

            }
        }

        return false;
    }
};

int main(){
    Graph g(6);

    g.addEdge(0 , 1);
    g.addEdge(0 , 2);
    g.addEdge(2 , 5);
    g.addEdge(2 , 3);
    g.addEdge(2 , 4);

    g.printadjls();

    return 0 ;
}


