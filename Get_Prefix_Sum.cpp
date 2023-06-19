#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin >> n;
    long long int arr[n], sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int j = 0; j < n; j++)
    {
        sum = sum + arr[j];
        arr[j] = sum;
    }
    for (int j = n - 1; j >= 0; j--)
    {
        cout << arr[j] << " ";
    }

    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     long long int s;
//     cin >> s;

//     long long int arr[s], total = 0;
//     for (int i = 0; i < s; i++)
//     {
//         cin >> arr[i];
//     }

//     int j = 0;
//     while (j < s)
//     {
//         total = total + arr[j];
//         arr[j] = total;
//         j++;
//     }

//     j = s - 1;
//     while (j >= 0)
//     {
//         cout << arr[j] << " ";
//         j--;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;

//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }

//     long long pre[n];
//     pre[0] = a[0];
//     for (int i = 1; i < n; i++)
//     {
//         pre[i] = a[i] + pre[i - 1];
//     }

//     for (int i = n - 1; i >= 0; i--)
//     {
//         cout << pre[i] << " ";
//     }

//     return 0;
// }