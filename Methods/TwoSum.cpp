 #include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main(){
    vector <int > vec = {2 , 5 , 7 , 11 , 15};
    int tar = 9;
    sort(vec.begin() , vec.end());
    vector <int > vec2 = {};
    int i = 0;
    int end = vec.size() - 1;
    while(i < end){
        int sum = vec[i] + vec[end];
        if(sum == tar){
            vec2.push_back(vec[i]);
            vec2.push_back(vec[end]);
            
            break;
        }
        else if (sum > tar){
            end--;
        }
        else {
            i++;
        }
    }

    for(int j : vec2){
        cout << j << endl;
    }
    return 0;
}