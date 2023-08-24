#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int w0, i0, t, d, i, a;
  cin >> w0 >> i0 >> t >> d >> i >> a;

  int weight1 = w0, weight2=w0;
  int basic1 = i0, basic2=i0;

  while(d--) {
    int usage1 = basic1 + a;
    int usage2=basic2+a;
    weight1 += (i - usage1);
    weight2+=(i - usage2);

    if (abs((i - usage2)) > t) {
      basic2 += floor((i - usage2) / 2.0);
    }    
  }

  if (weight1 <= 0) {
      cout << "Danger Diet\n";
    }else{
      cout << weight1 << " " << basic1 << "\n";
    }

  if (weight2<=0 || basic2 <=0) {
    cout << "Danger Diet";
    }else{
      cout << weight2 << " " << basic2;
      if(basic2<i0){
        cout<< " YOYO";
        }else{
        cout << " NO";
        }
  }
  
}