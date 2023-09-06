#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    unordered_set<string> checkS;
    for (int i = 0; i < n; i++) {
        string str;
        cin >> str;
        checkS.insert(str);
    }

    int count = 0;

    for (int i = 0; i < m; i++) {
        string str;
        cin >> str;

        if (checkS.count(str)) {
            count++;
        }
    }

    cout << count << '\n';
    
    return 0;
}
