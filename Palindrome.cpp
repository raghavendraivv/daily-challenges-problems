#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int n,i,j,k;
    cin >> n;
    //scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        j=i%4;
        if(j<2)
        {
            cout << "a";
            //printf("a");
        }
        else
        {
            cout << "b";
            //printf("b");
        }
    }
    return 0;
}
