#include <iostream>
#include <vector>

int main() {
    int N, K;
    std::cin >> N >> K;

    std::vector<char> roulette(N, '?');

    int currentIndex = 0;

    for (int i = 0; i < K; i++) {
        int position;
        char c;
        std::cin >> position >> c;

        position %= N;
        if (currentIndex - position < 0) {
            currentIndex = currentIndex - position + N;
        } else {
            currentIndex -= position;
        }

        if (roulette[currentIndex] != c && roulette[currentIndex] != '?') {
            std::cout << "!\n";
            return 0;
        }

        roulette[currentIndex] = c;
    }

    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            if (roulette[i] != '?' && roulette[i] == roulette[j]) {
                std::cout << "!\n";
                return 0;
            }
        }
    }

    for (int i = 0; i < N; i++) {
        std::cout << roulette[(i + currentIndex) % N];
    }
    std::cout << "\n";

    return 0;
}
