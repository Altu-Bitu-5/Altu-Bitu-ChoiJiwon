#include <iostream>

using namespace std;
#define MAX 1000000

int isPrime[MAX] = {0};

void sieveOfEratosthenes() {
    for (int i = 2; i * i <= MAX; i++) {
        if (isPrime[i] == 0) {
            for (int j = i * i; j <= MAX; j += i) {
                isPrime[j] = 1;
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    sieveOfEratosthenes();

    while (1) {
        cin >> n;
        if (n == 0) {
            break;
        }

        bool found = false;

        for (int a = 3; a <= n; a += 2) {
            int b = n - a;
            if (isPrime[a] == 0 && isPrime[b] == 0) {
                cout << n << " = " << a << " + " << b << "\n";
                found = true;
                break;
            }
        }

        if (!found) {
            cout << "Goldbach's conjecture is wrong.\n";
        }
    }

    return 0;
}
