#include <iostream>
using namespace std;
#include <list>
#include <queue>
#include <stack>

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


    // topological sorting in a directed graph////////////////////////////

    void dfs11(int curr , vector<bool> &vis , stack <int> &s){
        vis[curr] = true;

        for(int v : l[curr]){
            if(!vis[v]){
                dfs11(v , vis , s);
            }
        }

        s.push(curr);

    }

    void toposport(){
        vector<bool> vis(V , false);
        stack <int> s;
        for(int i = 0 ; i < V ; i++){
            if(!vis[i]){
                dfs11(i , vis , s);
            }
        }

        while(s.size() > 0){
            cout << s.top()<< " ";
            s.pop();
        }

        cout<< endl;
    }

    // topological order using kanhs algorithm >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>??????????????????

    void toposort(){

        vector<int> res;

        // 1.calculate indegree
        vector<int> vis(V , 0);
        for(int u = 0 ; u < V ; u++){
            for(int v : l[u]){
                vis[v]++;
            }
        }

        // adding to the queue
        queue<int> q;
        for(int i = 0 ; i < V ; i++){
            if(vis[i] == 0){
                q.push(i);
            }
        }

        // checking if any degree become 0 or not;

        while(q.size() > 0 ){
            int curr = q.front();
            q.pop();
            res.push_back(curr);
            for(int u : l[curr]){
                if(vis[u] == 0){
                    q.push(u);
                }
            }

        }

        // result printing.//////

        for(int val : res){
            cout << val << " ";
        }
    }
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


