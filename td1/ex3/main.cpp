#include <iostream>
#include <cmath>  // Required for sqrt()

using namespace std;

float distance(int ax, int ay, int bx, int by) {
    float r;
    r = sqrt((ax - bx)*(ax-bx)+(ay-by)*(ay-by));
    return r;
}

int main() {
    cout << distance(4, 5, 8, 7) << endl;
    return 0;
}
