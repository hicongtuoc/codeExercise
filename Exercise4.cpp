#include <bits/stdc++.h>
using namespace std;
int n;
void InMang(int a[], int n)
{
    for (int j = 0; j < n; j++)
        cout << " " << a[j];
}

void Swap(int &a, int &b)
{
    int x = a;
    a = b;
    b = x;
}

void InsertionSort(int a[], int n)
{
    int pos, x;
    for (int i = 0; i < n; i++)
    {
        x = a[i];
        pos = i;
        cout << "Buoc " << i << ":";
        if (i == 0)
            InMang(a, 1);
        else
        {
            while (pos > 0 && x < a[pos - 1])
            {
                a[pos] = a[pos - 1];
                pos--;
            }
            a[pos] = x;
            InMang(a, n - (n - i - 1));
        }
        cout << endl;
    }
}

int main()
{
    cin >> n;
    int a[n];
    for (int j = 0; j < n; j++)
        cin >> a[j];
    InsertionSort(a, n);

    return 0;
}
