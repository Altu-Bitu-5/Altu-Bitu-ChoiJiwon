#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int sum(const string& sortedNum) {
    int s = 0;
    for (char c : sortedNum) {
        if (isdigit(c)) {
            s += c - '0';
        }
    }
    return s;
}

bool Sort(const string& left, const string& right) {
    if (left.length() != right.length()) {
        return left.length() < right.length();
    } else {
        int a = sum(left);
        int b = sum(right);
        if (a != b) {
            return a < b;
        } else {
            return left < right;
        }
    }
}

int main() {
    int n;
    cin >> n;
    vector<string> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end(), Sort);

    for (const string& sortedNum : arr) {
        cout << sortedNum << '\n';
    }
    return 0;
}
