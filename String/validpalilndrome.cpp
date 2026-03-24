#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    string s = "123459321";
    int i = 0, j = s.length() - 1;
    bool isPalindrome = true;

    while (i < j) {
        if (s[i] != s[j]) {
            isPalindrome = false;
            break;
        }
        i++;
        j--;
    }

    if (isPalindrome)
        cout << "It is a valid palindrome";
    else
        cout << "Not a palindrome";

    return 0;
}



// watch the sradha didi video for their solution