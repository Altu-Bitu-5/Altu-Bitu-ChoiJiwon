#include <iostream>
#include <vector>
using namespace std;

bool cal(int n) {
    while (true) {
        int sum = 0;
        while (n > 0) {
            int dig = n % 10;
            sum += dig * dig;
            n /= 10;
        }
        if (sum == 1) return true;
        if (sum == 4) return false;
        n = sum;
    }
}

int main() {
    int n;
    cin >> n;

    // 에라토스테네스의 체를 사용하여 n 이하의 소수를 구함
    vector<bool> prime(n + 1, true);
    prime[0] = prime[1] = false;
    for (int i = 2; i * i <= n; ++i) {
        if (prime[i]) {
            for (int j = i * i; j <= n; j += i) {
                prime[j] = false;
            }
        }
    }

    // 소수 중에서 상근수인 것을 출력
    for (int i = 2; i <= n; ++i) {
        if (prime[i] && cal(i)) {
            cout << i << endl;
        }
    }

    return 0;
}
