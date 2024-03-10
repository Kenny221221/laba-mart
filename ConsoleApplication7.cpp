#include <iostream>
#include <unordered_map>
#include <locale>
#include <string>

using namespace std;

int main() {
    setlocale(LC_ALL, "");

    string w;
    cout << "Введите слово: ";
    getline(cin, w);

    unordered_map<char, int> lC;

    for (char c : w) {
        if (isalpha(c)) {
            lC[c]++;
        }
    }

    cout << "Количество различных букв: " << lC.size() << endl;

    return 0;
}
