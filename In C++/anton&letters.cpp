#include<iostream>
#include<string.h>
#include<bits/stdc++.h>

using namespace std;
int main()
{

    int l;
    int count=0;
    char s[1001];
    gets(s);
    l=strlen(s);
    sort(s,s+l);
    for(int i=0; i<l; i++)
    {
        if(s[i]>=97&&s[i]<=122)
        {
            count += 1;
            if(s[i]==s[i+1])
                count -= 1;
        }

    }
    cout<<count<<"\n";
    return 0;
}
