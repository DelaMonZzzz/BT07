#include <iostream>

using namespace std;

void ham_f(int *a)
{
    cout << sizeof(a) << endl;
}

int main()
{
    int a[10];
    cout << sizeof(a) << endl;
    ham_f(a);

    return 0;
}
