#include <bits/stdc++.h>
using namespace std;
int n, a[100], ok = 1;

void init(void)
{
    cin >> n;
    for (int i = n; i > 0; i--)
        a[n - i + 1] = i;
}

void Swap(int &a, int &b)
{
    int t = a;
    a = b;
    b = t;
}

void hoanVi(void)
{
    int j = n - 1;
    while (j > 0 && a[j] < a[j + 1])
        j--;
    if (j > 0)
    {
        int k = n;
        while (a[j] < a[k])
            k--;
        Swap(a[j], a[k]);
        int l = j + 1, r = n;
        while (l < r)
        {
            Swap(a[l], a[r]);
            l++;
            r--;
        }
    }
    else
        ok = 0;
}

void output()
{
    for (int i = 1; i <= n; i++)
        cout << a[i];
    cout << " ";
}

void run()
{
    ok = 1;
    while (ok)
    {
        output();
        hoanVi();
    }
    cout << endl;
}

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        init();
        run();
    }

    return 0;
}
