#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool isPalindrome(int n) {
    string str = to_string(n);
    string reverseStr = str;
    reverse(reverseStr.begin(), reverseStr.end());

    return str == reverseStr;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    while(cin >> n && n != 0) {
        if(isPalindrome(n)) {
            cout << "yes" << "\n";
        } else {
            cout << "no" << "\n";
        }
    }
}