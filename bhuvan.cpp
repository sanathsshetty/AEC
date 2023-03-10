#include <iostream>
#include <cstring>
using namespace std;

bool isVowel(char c) {
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

bool isHappy(string s) {
    int n = s.length();

    // checking if there is a contiguous substring of length > 2 with all vowels
    for (int i = 0; i < n-2; i++) {
        if (isVowel(s[i]) && isVowel(s[i+1]) && isVowel(s[i+2])) {
            return true;
        }
    }

    return false;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        string S;
        cin >> S;

        // checking if Bhuvan is happy or not
        if (isHappy(S)) {
            cout << "HAPPY" << endl;
        } else {
            cout << "SAD" << endl;
        }
    }

    return 0;
}
