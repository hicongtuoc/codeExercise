#include <bits/stdc++.h>
using namespace std;
#define MAX 1000

int n, k, arr[MAX],ok=1;

void Next_Combination(void)
{
    int i = k;
    while (i > 0 && arr[i] == n - k + i)
    {
        i--;
    }
    if (i > 0)
    {
        arr[i] = arr[i] + 1;
        for (int j = i + 1; j <= k; j++)
        {
            arr[j] = arr[i] + j - i;
        }
    }
    else ok=0;
}

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        cin >> n;
        cin >> k;
        for (int l = 1; l <= k; l++)
            cin >> arr[l];
        Next_Combination();
        if(ok==0){
            for (int l = 1; l <= k; l++)
                cout << l << " ";
        }
        else{
            for (int l = 1; l <= k; l++)
                cout << arr[l] << " ";
        }
            cout << endl;
        ok=1;
    }

    return 0;
}