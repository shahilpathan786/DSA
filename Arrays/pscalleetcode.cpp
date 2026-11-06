#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int> gene(int n){
        int ans = 1;
        vector<int> rownums;
        rownums.push_back(ans);
        for(int i = 1 ; i < n ; i++){
            ans = ans*(n - i);
            ans = ans/i;
            rownums.push_back(ans);

        };

        return rownums;
    };

    vector<vector<int>> generate(int numRows) {

        vector<vector<int>> blah;
        for(int i = 1; i <= numRows ; i++){
            blah.push_back(gene(i));
        }

        return blah;
        

        
    }

    
}
