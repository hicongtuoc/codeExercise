#include <bits/stdc++.h>
using namespace std;

void InMang(int a[], int n)
{
    for (int j = 1; j < n; j++)
        cout << " " << a[j];
}

void Swap(int &a, int &b)
{
    int x = a;
    a = b;
    b = x;
}

void InsertionSort(int a[], int n){	
	int pos, x;
	for(int i = 1; i < n; i++){ //đoạn a[0] đã sắp
		x = a[i]; 
		pos = i;
        cout << "Buoc " << i-1 << ":";
        int dem=1;
		while(pos > 0 && x < a[pos-1]){
			a[pos] = a[pos-1];	// dời chỗ
			pos--;
            dem++;
		}
		a[pos] = x;
        if(dem==1) cout<<a[0];
        else 
            InMang(a, dem);
        
        cout << endl;
	}
}

int main()
{

    int n;
    cin >> n;
    int a[n];
    for (int j = 0; j < n; j++)
        cin >> a[j];
    InsertionSort(a, n);

    return 0;
}
