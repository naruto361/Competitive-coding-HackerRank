#include <bits/stdc++.h>

using namespace std;

int main()
{string s;
cin>>s;
int k=(s[0]-48)*10+(s[1]-48);
if(s[8]=='P' && k!=12)
{k=k+12;
if(k<10)
cout<<0;
cout<<k;
for(int j=2;j<8;j++)
cout<<s[j];
}
else if(s[8]=='A' && k==12)
{cout<<"00";
for(int j=2;j<8;j++)
cout<<s[j];}
else
{for(int j=0;j<8;j++)
cout<<s[j];}
    return 0;
}
