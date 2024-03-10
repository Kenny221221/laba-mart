#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    string str;
    cout << "Введите строку: ";
    getline(cin, str);

    str.erase(remove(str.begin(), str.end(), ' '), str.end());

    string result = "";
    for (int i = 0; i < str.length(); i++) {
        if (result.find(str[i]) == string::npos) {
            result += str[i];
        }
    }

    cout << "Результат: " << result << endl;

    return 0;
}