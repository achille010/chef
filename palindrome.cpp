#include <iostream>
using namespace std;
int main() {
    string s;
    cin >> s;
    string rev = s;
    reverse(rev.begin(), rev.end());
    cout << (s == rev ? "Yes" : "No");
}