#include <iostream>

using namespace std;

int _search(int *a, int left, int right, int x)
{
    while (left <= right)
    {
        int m = (left + right)/2;
        if (a[m] == x) {
            return m;
        } else if (a[m] < x) {
            left = m + 1;
        } else {
            right = m - 1;
        }
    }
    return -1;
}

int main()
{
    int n, x;
    cin >> n >> x;
    int *a = new int [n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << _search(a, 0, n-1, x);

    delete [] a;

    return 0;
}
