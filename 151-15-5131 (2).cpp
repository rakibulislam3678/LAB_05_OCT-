#include <iostream>
#include <string>

using namespace std;

int main() {

    string text;
    string words[80];

    cout << "Please enter the string : " << endl;
    getline(cin, text);
    text += ' ';

    for (int i = 0, j = 0, k = 0, l = 0, s = 0, c = 0, p = 0; i <= text.length(); i++) {
        if (text[i] == ' ') {
            if (j == 0) {
                if (l != 0) {
                    s = s + c;
                    words[k] = text.substr(s, l);
                    s = p;
                    c = 0;
                    l = 0;
                }
                j++;
                k++;
            }
            c++;
        } else {
            j = 0;
            p = i+1;
            l += 1;
        }
    }

    for (int i = 0; i < 80; i++) {
        if (words[i] != "")
            cout << words[i] << endl;
    }

    string f;
    int flag, cor = 1;
    cout << "Enter the search keyword: ";
    cin >> f;

    for (int i = 0; i < 80; i++) {
        if (words[i] == f) {
            cout << "Keyword is Found: " << words[i] << endl;
            flag = 0;
            cor = 0;
        }
        else
            flag = cor;
    }

    if (flag == 1) {
        cout << "Keyword is Not Found" << endl;
    }

    return 0;

}
