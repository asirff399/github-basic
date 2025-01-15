#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;cin>>s;
    int n = s.length();
    int l = 0;
    int r = n-1;
    while(l<r){
        if(s[l] == '?' && s[r] == '?'){
            s[l]=s[r]='a';
        }
        else if(s[l]=='?'){
            s[l]=s[r];
        } 
        else if(s[r] == '?'){
            s[r]=s[l];
        } 
        else if(s[r] != s[l]){
            cout<<-1<<endl;
            return 0;
        }
        l++;
        r--;
    }
    if (n % 2 == 1 && s[n / 2] == '?') {
        s[n / 2] = 'a';
    }
    cout<<s<<endl;
    return 0;
}