#include <iostream>

using namespace std;

int count_even(int *a, int size)
 {
     int b = 0;
     for(int i = 0; i < size; i++)
     {
         if(a[i]%2 ==0) b++;
     }
     return b;
 }
int main()
{
    int n;
    cin >> n;
    int *a = new int [n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << count_even(a, 5) << endl;
    cout << count_even(&a[n-5], 5) << endl;

    delete [] a;

    return 0;
}
