#include <iostream>

using namespace std;

int strcmp (const char *str1, const char *str2)
{
    int counted = 0;
    if (str1 == str2) counted++;
    return counted;
}

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    char *a = new char [s1.length() + 1];
    char *b = new char [s2.length() + 1];

    cout << strcmp(a, b);

    delete [] a;
    delete [] b;

    return 0;
}
