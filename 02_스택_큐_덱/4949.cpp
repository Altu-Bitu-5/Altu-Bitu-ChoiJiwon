#include <iostream>
#include <stack>
#include <string>

using namespace std;

//짝을 이루는지 확인하는 함수

//타입이 string인 문자열 str을 직접참조
bool balanced(const string &str) {
    stack<char> line;
//str의 문자 하나씩에 대하여 
    for (char ch : str) { 
        //(,[이 먼저 나오면 스택에 푸쉬, 빈 스택인데 ),]이 나오면 바로 no
        if (ch == '(' || ch == '[') {
            line.push(ch);
        } else if (ch == ')' || ch == ']') {
            if (line.empty()) {
                return false;
            }
            //(,[이 맨위에 들어와있는 상태에서 짝이 등장하면 짝을 이루었으므로 꺼내어 삭제
            if ((ch == ')' && line.top() == '(') || (ch == ']' && line.top() == '[')) {
                line.pop();
            } else {
                return false;
            }
        }
    }

    return line.empty();
}

int main() {
    string input;

//.이 나오기 전까지 string타입의 문자열을 읽어서 짝을 이루는지 확인 수행
    while (getline(cin, input) && input != ".") {
        if (balanced(input)) {
            cout << "yes" << '\n';
        } else {
            cout << "no" << '\n';
        }
    }

    return 0;
}
