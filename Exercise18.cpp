#include <bits/stdc++.h>
using namespace std;

int n,k,a[1000],ok=1;

void biNa(){
    int i=n;
    while(i>0 && a[i]!=0){
        a[i]=0;
        i--;
    }
    if(i>0)
        a[i]=1;
    else ok=0;
}

void output(){
    int dem=0;
    for(int i=1;i<=n;i++)
        if(a[i]==1) dem++;
    if(dem==k){
        for(int i=1;i<=n;i++)
            cout<<a[i];
        cout<<endl;
    }
}

int main(){
	int test;
    cin>>test;
    while(test--){
        cin>>n>>k;
        for(int i=1;i<=n;i++) a[i]=0;
        ok=1;
        while(ok){
            biNa();
            output();
        }
    }

	return 0;
}