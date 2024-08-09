#include <iostream>
using namespace std;

int main() {
    int a = 5;
    int b = 6;
    int c = 7;

    int tmp_b = b;
    int tmp_c = c;

    b = a;
    c = tmp_b;
    a = tmp_c;

    printf("%d\n%d\n%d", a, b, c);

    return 0;
}