#include <bits/stdc++.h>
using namespace std;

#define mod 1000000007
#define ll long long int
#define vi vector<int>

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        char arr[2][n];
        int x = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[0][i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> arr[1][i];
        }
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[0][i + 1] == '1' && arr[1][i + 1] == '1')
            {
                cnt++;
            }
        }
        if (cnt == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}