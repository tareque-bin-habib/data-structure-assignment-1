// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> arr(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     int m;
//     cin >> m;
//     vector<int> brr(m);
//     for (int i = 0; i < m; i++)
//     {
//         cin >> brr[i];
//     }
//     int x;
//     cin >> x;
//     arr.insert(arr.begin() + x, brr.begin(), brr.end());
//     for (int i = 0; i < arr.size(); i++)
//     {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int s;
//     cin >> s;
//     vector<int> a(s);
//     for (int i = 0; i < s; i++)
//     {
//         cin >> a[i];
//     }
//     int n;
//     cin >> n;
//     vector<int> b(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> b[i];
//     }
//     int t;
//     cin >> t;
//     a.insert(a.begin() + t, b.begin(), b.end());
//     for (int element : a)
//     {
//         cout << element << " ";
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int m;
    cin >> m;
    vector<int> b(m);
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    int x;
    cin >> x;
    a.insert(a.begin() + x, b.begin(), b.end());
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}