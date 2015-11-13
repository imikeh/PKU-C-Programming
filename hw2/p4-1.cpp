#include <iostream>
#include <stdio.h>
#include <stack>
#include <string.h>
using namespace std;

int main() {
    int i;
    char a[101], tag[101];
    while(scanf("%s", a) != EOF) {
        stack <char> S;
        for (i = 0; i < strlen(a);i++) {
            if (a[i] == '(') {
                S.push(i);
                tag[i] = ' ';
            }
            else if (a[i] == ')') {
                if (S.empty()) {
                    tag[i] = '?';
                }
                else {
                    tag[i] = ' ';
                    S.pop();
                }
            }
            else {
                tag[i] = ' ';
            }
        }
        while (!S.empty()) {
            tag[S.top()] = '$';
            S.pop();
        }
        tag[i] = '\0';
        puts(a);
        puts(tag);
    }
    return 0;
}