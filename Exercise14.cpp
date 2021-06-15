#include <bits/stdc++.h>
using namespace std;
int n,ok=1;
string s;

void init(void){
    cin>>n;
    for(int i=1;i<=n;i++) s[i]='A';
}

void Next_Bina(void){
    int i= n;
    while(i>0 && s[i]!='A'){
        s[i]='A';
        i--;
    }
    if(i>0) s[i]='B';
    else ok=0;
}

void output(void){
    for(int i=1;i<=n;i++)
        cout<<s[i];
    cout<<" ";
}

void run(void){
    ok=1;
    while(ok){
        output();
        Next_Bina();
    }
    cout<<endl;
}

int main(){
	int test;
    cin>>test;
    while(test--){
        init();
        run();
    }

	return 0;
}