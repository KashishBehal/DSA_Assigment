
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, totalPrice = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int price;
        cin >> price;
        totalPrice += price;
    }
    int cubeRoot = cbrt(totalPrice);
    int nextPerfectCube = pow(cubeRoot, 3);

    if (nextPerfectCube == totalPrice) {
        cout << "Yes" << endl;
    } else {
        int requiredAmount = pow(cubeRoot + 1, 3) - totalPrice;
        cout << requiredAmount << endl;
    }

    return 0;
}
