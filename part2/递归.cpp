#include <iostream>
using namespace std;

int fun(int a, int b, int c) {
    int answer = 0;
    int i = 0;
    if (b == 1)
        return 1;
    for (i = c; i <= a/ b; i ++)
        answer += fun(a - i, b - 1, i);
    return answer;
}

int main() {
    cout << "--------------" << endl;
    cout << fun(9, 3, 0) << endl;
    cout << "--------------" << endl;
    return 0;
}