/*Напишете програма на С++, която:
Използва въведени от потребител цели числа
Проверява дали числото е четно или нечетно
Ако числото е четно, на екрана се извежда “even”, ако е нечетно – “odd”*/

#include <iostream>

using namespace std;

int main() {

    int a;
    cout << "Enter how many numbers to be checked: " << endl;
    cin >> a;
    
    for (int i = 0; i < a; i++) {
        int number;
        cout << "Enter number " << i + 1 << ": " << endl;
        cin >> number;

        if (number % 2 == 0) {
            cout << "Even." << endl;
        } else {
            cout << "Odd." << endl;
        }
    }

    return 0;
}