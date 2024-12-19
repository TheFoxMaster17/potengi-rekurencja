#include <iostream>
using namespace std;

int recurp(int x, int y) {
    if (y == 0) {
        return 1;
    }
    return x * recurp(x, y - 1);
}
int main() {
    int x, y;
    cout << "Podaj podstawe: ";
    cin >> x;
    cout << "Podaj wykladnik: ";
    cin >> y;
    int result = recurp(x, y);
    cout << "Wynik: " << result << endl;
    return 0;
}