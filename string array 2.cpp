#include <iostream>
#include <string.h>
using namespace std;

void zygote() {
    char string1[] = "Fuck you!";
    char string2[] = {'I', ' ', 'h', 'a', 't', 'e', ' ', 'C', '+', '+', '!', '\0'};
    cout << strlen(string2) << endl;
    //cout << strcat(string1, string2) << endl;
    //cout << strncat(string1, string2, 5) << endl;
    cout << strcpy(string1, string2) << endl;
    cout << string1 << endl;
    //cout << strcmp(string1, string2) << endl;
    cout << string2 << endl;
}

void temporary() {
    char str1[32] = "to Programming";
    char str2[] = {'I', 'n', 't', 'c', 'o', 'd', 'u', 'c', 't', 'i', 'o', '\0'};
    cout << str2 << endl;
    cout << " " << endl;
}

int main() {
    //zygote();
    //temporary();
    char str1[32] = "to Programming";
    char str2[] = {'I', 'n', 't', 'c', 'o', 'd', 'u', 'c', 't', 'i', 'o','n', ' '};
    cout << str2 << endl;
    cout << " " << endl;
    return 0;
}
