#include <iostream>
#include <cstring>

using namespace std;

//Task 1 func
void replacing(char* str) {
    int length = strlen(str);

    for (int i = 0; i < length; i++) {
        if (str[i] == '.') {
            str[i] = '!';
        }
    }
}

//Task 2 func
int counter(char* str, char c) {
    int count = 0;
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == c) {
            count++;
        }
    }
    return count;
}

int main() {
    //Task 1
    char str[100];

    cout << "Enter the string: ";
    cin.getline(str, sizeof(str));

    replacing(str);
    cout << "Results: " << str << endl;

    //Task 2
    char str[] = "Symbols counter";
    char c;

    cout << "Enter symbols: ";
    cin >> c;

    cout << "Symbol '" << c << "' appears in the string '" << str << "' " << counter(str, c) << " times." << endl;
    return 0;
}

