#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

// int main(){
//     int n = 3560;
//     while (n != 0){
//         int digit = n%10;
//         cout << digit << endl;
//         n = n/10;
//     }
    
// }

// count digit 

int main(){
    int n = 3560;
    int count = 0;
    while (n != 0){
        int digit = n%10;
        count++;
        n = n/10;
    }
    cout << count << endl;
    
}
