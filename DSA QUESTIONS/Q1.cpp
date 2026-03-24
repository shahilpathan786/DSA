//////////////////////////////////////////////////////////////// for commparing values /////////////////////////////////////////////////////////////////

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int nums[5] = {2 , 4, 6, 9, 19};
    int size = 6;
    int smallest = INT16_MAX;

    for (int i = 0 ; i <= size ; i++){
        if (nums[i] < smallest){
            smallest = nums[i];
        }
    } 
    cout << smallest << endl;

}
