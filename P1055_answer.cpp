#include<bits/stdc++.h>
using namespace std;
int main(){
    char s[15],c;
    int n=0;
    int j=1;
    fgets(s);
    for(int i=0;i<12;i++){
        if(s[i]=='-') continue;
        n+=(s[i]-'0')*j;   //减0是为了变成整数型
        j++;
        
    }
    n%=11;
    if(n==10) c='X';   //因为最后后一位有可能是或数字所以统一用c
    else c=n+'0';
    if(c==s[12]) cout<<"Right"<<endl;
    else
    {
        s[12]=c;
        cout<<s;
    }
    return 0;
}