#include <bits/stdc++.h>
using namespace std;

string s;

void Next_Bit_String(void) {
	int i=s.length()-1;
	while (i>=0 && s[i]!='0') { s[i] = '0'; i--; }
	if (i >0) s[i]='1';
}

void Result(void){
    for(int i=0; i<s.length();i++)
        cout<<s[i];
    cout<<endl;
}

int main(){
	int n;
    cin>>n;
    while(n--){
        cin>>s;
        Next_Bit_String();
        Result();
    }

	return 0;
}