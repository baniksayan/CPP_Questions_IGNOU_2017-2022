#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int sum = 0;
    while (num > 0) {
        int digit = num % 10;
        if (digit % 2 == 0) {
            sum = sum + digit;
        }
        num = num / 10;
    }

    cout << "Sum of even digits: " << sum << endl;

    return 0;
}
