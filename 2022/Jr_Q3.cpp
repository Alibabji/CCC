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
            i++;
            while(1)
            {
                if(code[i]>57||code[i]=='\0') break;
                cout<<code[i];
                i++;
            }
            cout<<endl;
            i--;
        }
        else
            cout <<code[i];
        //cout<<endl<<"value of i: "<<i<<endl;
    }
    return 0;
}