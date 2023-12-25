#include<iostream>
#include <string>

using namespace std;

string caesar_cipher(string text, int shift) {
    string result = "";

    for (char c : text) {
        if (isalpha(c)) {  
            char base = isupper(c) ? 'A' : 'a';
            result += char((c - base + shift) % 26 + base);
        } else {
            result += c; 
        }
    }

    return result;
}

int main() {
    int n;
    cin >> n;
    cin.ignore();  

    for (int i = 0; i < n; i++) {
        int shift;
        string message;
        
        cin >> shift;
        cin.ignore();  
                getline(cin, message);

        if (message.find("the") != string::npos) {
            cout << caesar_cipher(message, -shift) << endl;
        } else {
            cout << caesar_cipher(message, shift) << endl;
        }
    }

    return 0;
}
