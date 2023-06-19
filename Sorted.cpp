#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int m;
        cin >> m;
        int arr[m];
        for (int i = 0; i < m; i++)
        {
            cin >> arr[i];
        }
        int flag = 1;
        for (int i = 1; i < m; i++)
        {
            if (arr[i] < arr[i - 1])
            {
                flag = 0;
                break;
            }
        }
        if (flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int s;
    cin >> s;
    while (s--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int flag = 1;
        int i = 1;
        while (i < n)
        {
            if (arr[i] < arr[i - 1])
            {
                flag = 0;
                break;
            }
            i++;
        }
        if (flag == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}