#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Ppl{
  int firstExam;
  int secondExam;
};

bool cmp(const Ppl&p1, const Ppl&p2){
  return p1.firstExam < p2.firstExam;
}

int main() {
    int test;
    cin>>test;

    for(int i=0; i<test;i++){
      int num;
      cin >> num;
      vector<Ppl> ppl(num);

      for(int i=0;i<num;i++){
        cin >> ppl[i].firstExam >> ppl[i].secondExam;
      }
      sort(ppl.begin(), ppl.end(), cmp);

      int count=1;
      int rankFirst=ppl[0].secondExam;

      for(int i=1;i<num;i++){
        if(ppl[i].secondExam<rankFirst){
          count++;
          rankFirst=ppl[i].secondExam;
        }
      }
      cout << count << '\n';
    }
    return 0;
}
