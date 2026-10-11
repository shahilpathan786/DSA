#include <iostream>
using namespace std;
#include <list>
#include <queue>

void dfs(vector<vector<int>> &img , int i , int j , int newColor , int orgColor){
    if(i < 0 || j < 0 || i >= img.size() || j >= img[0].size() || img[i][j] == newColor || img[i][j] != orgColor){
        return ;
    }

    img[i][j] = newColor;
    dfs(img , i + 1 , j , newColor , orgColor);
    dfs(img , i - 1 , j , newColor , orgColor);
    dfs(img , i , j + 1  , newColor , orgColor);
    dfs(img , i , j - 1 , newColor , orgColor);

};


// dfs(img , i , j , newColor , orgColor);