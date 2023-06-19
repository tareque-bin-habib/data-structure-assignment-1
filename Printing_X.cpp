#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int mid = n / 2;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j == i)
            {
                if (i == mid + 1)
                {
                    cout << "X";
                }
                else
                {
                    cout << "\\";
                }
            }
            else if (j == (n + 1 - i))
            {
                cout << "/";
            }

            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}

#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= a; j++)
        {
            if (i == (a + 1) / 2 && j == (a + 1) / 2)
            {
                printf("X");
            }
            else if (i == j)
            {
                printf("\\");
            }
            else if (i + j == a + 1)
            {
                printf("/");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}