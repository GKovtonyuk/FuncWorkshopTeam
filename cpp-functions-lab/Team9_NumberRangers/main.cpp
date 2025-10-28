#include <iostream>
using namespace std;

int reverseNumber(int num) {
    int rev = 0;

    while (num != 0) {
        rev = rev * 10 + num % 10;
        num /= 10;
    }
    return rev; 
}

int main() {
    int n;
    cout << "Введіть число: ";
    cin >> n;

    // функція обчислення
    int reversed_n = reverseNumber(n);

    if (reversed_n == n) {
        cout << "Паліндром";
    }
    else {
        cout << "Не паліндром";
    }

    cout << endl;
    return 0;
}