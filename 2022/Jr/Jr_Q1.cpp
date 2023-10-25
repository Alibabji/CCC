#include <iostream>
using namespace std;

int main(void)
{
    // input number of regular boxes
    int R; cin>>R;

    // input number of small boxes
    int S; cin>>S;

    //regular box - 8 & small box - 3 || output total - 28
    cout<<((R*8)+(S*3))-28<<endl;

    return 0;
}