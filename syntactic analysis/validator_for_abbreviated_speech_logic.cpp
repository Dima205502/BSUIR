#include<bits/stdc++.h>


using namespace std;


const double EPS = 1e-9;
const int UNDEF = -1;
const int INF = 1e9;
const int MOD = 1e9 + 7;


int pos = 0;
char c1=' ', c2=' ';
const char EOT = '\n';

string text;


void Error() {
    cout << "Error";
    exit(0);
}

void nextChar() {
    c1 = c2;
    if (pos < text.size()) {
        c2 = text[pos];
        pos++;
    } else {
        c2 = EOT;
    }
}

void formula();

void binary_complex_formula() {
    if (c1 == '(') {
        nextChar();

        formula();

        if (c1 == '/' && c2 == '\\') {
            nextChar();
            nextChar();

            formula();
        }
        else if (c1 == '\\' && c2 == '/') {
            nextChar();
            nextChar();

            formula();
        }
        else if (c1 == '-' && c2 == '>') {
            nextChar();
            nextChar();

            formula();
        }
        else if (c1 == '~') {
            nextChar();

            formula();
        }
        else {
            Error();
        }

        if (c1 == ')') {
            nextChar();
        }
        else {
            Error();
        }
    }
    else {
        Error();
    }
}

void unar_complex_formula() {
    if (c1 == '(') {
        nextChar();
        if (c1 == '!') {
            nextChar();

            formula();

            if (c1 == ')') {
                nextChar();
            }
            else {
                Error();
            }

        }
        else {
            Error();
        }

    }
    else {
        Error();
    }
}

void formula() {
    if (c1 == '0' || c1 == '1') {
        nextChar();
    }
    else if ('A' <= c1 && c1 <= 'Z') {
        nextChar();
    }
    else if (c1 == '(' && c2 == '!') {
        unar_complex_formula();
    }
    else if (c1 == '(' && c2 != '!') {
        binary_complex_formula();
    }
    else {
        Error();
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    getline(cin, text);

    nextChar();
    nextChar();

    formula();

    if (c1 != EOT) {
        Error();
    }

    cout << "Correct formula";

    return 0;
}