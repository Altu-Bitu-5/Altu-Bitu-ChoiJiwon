#include <iostream>
#include <algorithm>

using namespace std;

int gcd(int a, int b){
  if(b==0)
    return a;
  return gcd(b, a%b);
}

int main(){
  int above1, under1, above2, under2;

  cin >> above1 >> under1 >> above2 >> under2;

  int above_re = above1*under2 + above2*under1;
  int under_re =under1*under2;

  int gcd_num=gcd(above_re, under_re);
  
  above_re /= gcd_num;
  under_re /= gcd_num;
  cout << above_re << " " << under_re << endl;
}