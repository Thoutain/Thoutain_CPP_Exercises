#include <iostream>

using namespace std;

union test {
    struct {
        int x;
        int y;
        int z;
    }u;
    int k;
}a;

int main() {
    a.u.x = 1;
    a.u.y = 2;
    a.u.z = 3;
    a.k = 4; // 覆盖掉第一个int空间值

    cout << a.u.x << " " << a.u.y << " " << a.u.z << " " <<a.k << endl;
    return 0;
}
/*
4 2 3 4
*/