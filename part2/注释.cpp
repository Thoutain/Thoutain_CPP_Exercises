#include <iostream>

using namespace std;

int main() {
    #if 0
    cout << "-----test-----" << endl;
    #endif
    cout << "-----test2-----" << endl;
    #if 1
    cout << "-----test3-----" << endl;
    #endif
    return 0;
}
/*
-----test2-----
-----test3-----
*/