#include <iostream>
#include <string.h>
#include <string>
using namespace std;

int main(void)
{
    string code;
    cin>>code;
   // cout<<code.length();
    for(int i=0;i<code.length();i++)
    {
        if(code[i]=='+'||code[i]=='-')
        {
            if(code[i]=='+') cout<<" tighten ";
            else cout<<" loosen ";
            while(code[i]>57||code[i]=='\0')
            {
                i++;
                cout<<code[i];
            }
            cout<<endl;
        }
        else cout<<code[i];
    }
    return 0;
}