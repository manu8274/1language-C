#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v;
        vector<int> v1(2);
        long int mxe = -1;
        long int mxo = -1;
        for (int i = 0; i < n; i++)
        {
            long int t;
            cin >> t;
            v.push_back(t);
            if (t % 2 != 0)
            {
                v1[1]++;
                mxo = fmax(t, mxo);
            }
            else
            {
                v1[0]++;
                mxe = fmax(mxe, t);
            }
        }
        if (mxe == -1 || mxo == -1)
            cout << 0 << endl;
        else
        {
            if (mxo > mxe)
            {
                cout << v1[0] << endl;
            }
            else
            {
                // cout << mxo << "\t" << mxe << endl;
                for (auto i : v)
                {
                    if (i % 2 == 0 && i!=mxe)
                    {
                        mxo += i;
                        // cout << mxo << "\t";
                    }
                    if (mxo > mxe)
                    {
                        break;
                    }
                }
                // cout << endl;
                if (mxo > mxe)
                    cout << v1[0] << endl;
                else
                    cout << v1[0] + 1 << endl;
            }
        }
    }
}