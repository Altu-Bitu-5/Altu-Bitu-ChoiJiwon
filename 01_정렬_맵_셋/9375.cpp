#include <iostream>
#include <vector>
#include <map>
#include <set>

using namespace std;

int main() {
  int test_case;
  cin >> test_case;
  while (test_case--) {
    int n;
    cin >> n;

    map<string, int> clothesNum;

    for (int i = 0; i < n; i++) {
      string name, type;
      cin >> name >> type;
      clothesNum[type]++;
    }

    int answer = 1;

    for (const auto& clothesSet : clothesNum) {
      answer *= (clothesSet.second + 1);
    }

    cout << answer - 1 << endl;
  }

  return 0;
}
