#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        long int ans = 0;
        int flag = 1;
        cout << "hello" << endl;
        while (flag)
        {
            int s = 0;
            int i = 0;
            for (i; i < n; i++)
            {
                s += v[i]++;
                if (s > x)
                {
                    ans += i;
                    break;
                }
            }
            if (i == 0)
            {
                flag = 0;
                break;
            }
        }
        cout << ans << endl;
    }
}