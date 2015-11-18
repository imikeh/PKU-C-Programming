#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

int main()
{
    int n, k = 0;
    cin>>n;
    int a[101][2], b[101][2];
    for (int i = 0; i < n; ++i)
    {
        cin>>a[i][0]>>a[i][1];
    }
    for (int i = 0; i < n; ++i)
    {
        bool badPoint = false;
        for (int j = 0; j < n; ++j)
        {
            if (a[i][0]<=a[j][0] && a[i][1]<=a[j][1] && i!=j)
            {
                badPoint = true;
                break;
            }
        }
        if (!badPoint)
        {
            b[k][0] = a[i][0];
            b[k][1] = a[i][1];
            k++;
        }
    }
    for (int i = 1; i < k; ++i)
    {
        for (int j = 0; j < i; ++j)
        {
            if (b[j][0]>b[i][0] || (b[j][0] == b[i][0] && b[j][1]>b[i][1]))
            {
                int temp[2];
                temp[0] = b[j][0];
                temp[1] = b[j][1];
                b[j][0] = b[i][0];
                b[j][1] = b[i][1];
                b[i][0] = temp[0];
                b[i][1] = temp[1];
            }
        }
    }
    for (int i = 0; i < k - 1; ++i)
    {
        printf("(%d,%d),", b[i][0], b[i][1]);
    }
    printf("(%d,%d)", b[k - 1][0], b[k - 1][1]);
    return 0;
}