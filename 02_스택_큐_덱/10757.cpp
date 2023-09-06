#include <iostream>
#include <string>

using namespace std;

int main(){
  //int로 담을 수 없는 크기의 정수이므로 문자열로 입력받음
  string A, B;
  cin>>A>>B;

  string result="";

  //다음 자리로 넘어가는수
  int next=0;

  //문자열길이의 마지막 자릿수 인덱스로, 오른쪽부터 왼쪽으로 연산하기 위함
  int i=A.size()-1;
  int j=B.size()-1;

  while(i>=0||j>=0||next>0){
    int sum=next;

    //i번째 위치의 문자를 숫자로 변환 후 인덱스 왼쪽으로 한 칸씩
    if(i>=0){
      sum+=A[i]-'0';
      i--;
    }
    if(j>=0){
      sum+=B[j]-'0';
      j--;
    }
    //올림수 계산
    next=sum/10;
    sum%=10;

    //sum을 다시 문자로 변환하여 추가
    result=char(sum+'0')+result;
  }

  cout<<result<<'\n';
}