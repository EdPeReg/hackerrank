#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int sockMerchant(int n, vector<int> ar) {
    sort(ar.begin(), ar.end());
    int i = 1, c = 0;

    while(i < n) {
        // If the current and previous sock are the same number, we have a pair.
        // just increment our counter and go to the next pair.
        if(ar[i] == ar[i-1]) {
            ++c;
            i += 2;
        } else {
            ++i;
        }     
    }
    return c;
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);

    for(int& element : v)
        cin >> element;

    cout << sockMerchant(n, v) << '\n';

    return 0;
}
