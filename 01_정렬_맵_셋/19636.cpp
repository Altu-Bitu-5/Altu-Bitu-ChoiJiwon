#include <iostream>
using namespace std;

int main() {
  int w0, i0, t, d, i, a;
  cin >> w0 >> i0 >> t >> d >> i >> a;

  int weight = w0;
  int basic = i0;

  for (int date = 0; date < d; date++) {
    int usage = i0 + a;
    weight += (i - usage);

    if (weight <= 0) {
      cout << "Danger Diet" << endl;
      return 0;
    }
    if ((i - usage) > t) {
      basic += (i - usage) / 2;
    }
  }

  int weightAfter = w0;
  int basicAfter = i0;

  for (int date = 0; date < d; date++) {
    int usage = i + a;
    weightAfter += (i - usage);

    if (weightAfter <= 0) {
      cout << "Danger Diet" << endl;
      return 0;
    }
    if ((i - usage) > t) {
      basicAfter += (i - usage) / 2;
    }
  }

  if (i0 > 0) {
    cout << weight << " " << basic << endl;
    if (basicAfter > i0) {
      cout << "YOYO" << endl;
    } else {
      cout << "NO" << endl;
    }
  } else {
    cout << "Danger Diet" << endl;
  }

  return 0;
}