#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "rus");
    string S;
    cout << "Введите загаданное слово: ";
    cin >> S;

    while (true) {
        string Q;
        cout << "Введите слово (длина " << S.length() << "): ";
        cin >> Q;

        if (Q.length() != S.length()) {
            cout << "слишком большая длина." << endl;
            continue;
        }

        for (int i = 0; i < S.length(); i++) {
            if (Q[i] == S[i]) {
                cout << "correct" << endl;
            }
            else if (S.find(Q[i]) != std::string::npos) {
                cout << "present" << endl;
            }
            else {
                cout << "absent" << endl;
            }
        }
    }



}