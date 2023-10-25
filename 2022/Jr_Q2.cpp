#include <iostream>
using namespace std;

int main(void)
{
    //total # of player
    int ttl; cin>>ttl;

    int count=0;

    for(int i=0;i<ttl;i++)
    {
        int p, f;
        cin>>p>>f;
        if((p*5)-(f*3)>40)
        {
            count++;
        }
    }
    cout<<count;
    if(count==ttl) cout<<"+";
    return 0;
}