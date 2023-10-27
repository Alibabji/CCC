#include <iostream>
#include <string.h>
#include <string>
#include <vector>
using namespace std;

int d[5]={0,};
int univ_i=0;
string max="1";
void calc(string a)
{

    if(a[0]=='Y')d[0]++;
    if(a[1]=='Y')d[1]++;
    if(a[2]=='Y')d[2]++;
    if(a[3]=='Y')d[3]++;
    if(a[4]=='Y')d[4]++;
}
void cmpr(int a, int b)
{
    if(a<b)
    {
        ::max.clear();
        ::max+=(univ_i+2);
    }
    else if(a>b)
    {
    }
    else
    {
        ::max+=", "+(univ_i+2);
    }
}
int main(void)
{
    cin.tie(0),cout.tie(0);
    ios_base::sync_with_stdio(false);

    string day;

    int num; cin>>num;
    for(int i=0;i<num;i++)
    {
        cin>>day;
        calc(day);
    }
    for(;univ_i<5;univ_i++)
    {

    }
}