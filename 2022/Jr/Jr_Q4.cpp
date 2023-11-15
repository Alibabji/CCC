#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
#include <string>
#include <vector>
#include <algorithm>
#include <stddef.h>
using namespace std;
string m[200000],mn[200000], group[100000];
int main()
{
    //cin.tie(0),cout.tie(0);
    //ios_base::sync_with_stdio(false);
    int x, y,g,i=0,abslm=0,abslmn=0;
    char seprator = ' ';
    char tempname[21];
    
    cin>>x;
    for(;i<x;i++)
    {
        cin.getline(tempname,21);
        int j=0;
        while(tempname[j]!='\0')
        {
            if(tempname[j]!=' ')
                m[abslm]+=tempname[j];
            else
                abslm++;
        }
    }

    cin>>y;
    for(i=0;i<y;i++)
    {
        cin.getline(tempname,21);
        int j=0;
        while(tempname[j]!='\0')
        {
            if(tempname[j]!=' ')
                mn[abslmn]+=tempname[j];
            else
                abslmn++;
        }
    }

    for(int asdf = 0; asdf<1000;asdf++)
    {
        cout<<m[asdf];
        if(asdf%2==0)
            cout<<endl;
    }

    return 0;
}