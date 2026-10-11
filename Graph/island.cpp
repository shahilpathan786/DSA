#include <iostream>
using namespace std;
#include <list>
#include <queue>

void dfs(int i , int j , vector<vector<bool>> &vis , vector<vector<char>> &grid , int m , int n){

    if(i < 0 || j < 0 || i <= n || j <= m || vis[i][j] || grid[i][j] != '1'){
        return;
    }
    vis[i][j] = true;

    dfs(i , j+1 , vis , grid , m , n);
    dfs(i , j-1 , vis , grid , m , n);
    dfs(i-1 , j , vis , grid , m , n);
    dfs(i+ 1, j, vis , grid , m , n);
}

int main(vector<vector<char>> &grid){
    int island = 0;
    int m = 4;
    int n = 5;
    vector<vector<bool>> vis(n , vector<bool> (m , false));
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            if(grid[i][j] == '1' && !vis[i][j] ){
                dfs(i , j , vis , grid , m , n);
                island++;
            }
        }
    }

    return island;

}