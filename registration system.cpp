#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    map <string,int> a;
    for(int i=0;i<n;i++)
    {
        string s;
        cin >> s;
        a[s]++;
        if(a[s]==1)
        {
            cout << "OK" <<endl;
        }
        else
        {
            int p = a[s]-1;
            cout << s << p << endl;
        }
    }
    return 0;
}
