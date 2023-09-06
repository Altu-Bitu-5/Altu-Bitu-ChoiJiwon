#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main(){
  int N, K;
  cin>>N>>K;
  
  //정수형 타입의 큐를 cir(원)으로 정의
  queue<int> cir;
  //1부터 N까지 큐에 push
  for(int i=1;i<=N;i++){
    cir.push(i);
  }

//출력 및 계산 동시에
  cout<<'<';

//큐가 빌 때까지 반복수행
  while(!cir.empty()){
    //K-1번째까지의 원소는 뒤로 보내기
    for(int j=1;j<K;j++){
      cir.push(cir.front());
      cir.pop();
    }
    //K번째 원소 출력하고 삭제
    cout<<cir.front();
    cir.pop();

    if(!cir.empty()){
      cout<<", ";
    }
  }

  cout << ">" <<'\n';
}