#include <iostream>
#include <string.h>
#include <string>
using namespace std;

int func(string a)
{
    switch(a[0])
    {
    case 'P':
        return 1500;
    case 'M':
        return 6000;
    case 'S':
        return 15500;
    case 'C':
        return 40000;
    case 'T':
        return 75000;
    case 'H':
        return 125000;
    }
}
int main(void)
{
    int a, ttl=0;
    string b;
    cin>>a;
    for(int i=0;i<a;i++)
    {
        cin>>b;
        ttl+=func(b);
    }
    cout<<ttl;
    return 0;
}