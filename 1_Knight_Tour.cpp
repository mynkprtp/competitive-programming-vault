#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);
int n;
int sol[8][8];

int move_x[] = { 2, 1, -1, -2, -2, -1, 1, 2 , 2 };
int move_y[] = { 1, 2, 2, 1, -1, -2, -2, -1, 1 };
// int move_x[8] = {-1, -2, -2, -1, 1, 2, 2, 1}, move_y[8] = {-2, -1, 1, 2, 2, 1, -1, -2};

void print_sol()
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << sol[i][j] << " ";
        }
        cout << "\n";
    }
}

int validat(int x, int y)
{
    return (x >= 0 && x < n && y >= 0 && y < n && sol[x][y] == -1) ? 1 : 0;
}

int solve(int x, int y, int pos)
{
    int i, nextx, nexty;
    if (pos >= n * n)
        return 1;
    for (i = 0; i < 8; i++)
    {
        nextx = x + move_x[i];
        nexty = y + move_y[i];
        if (validat(nextx, nexty))
        {
            sol[nextx][nexty] = pos;
            if (solve(nextx, nexty, 1 + pos) == 1)
                return 1;
            else
                sol[nextx][nexty] = -1;
        }
    }
    return 0;
}

int main()
{
    fast_io
        ll t = 1;
    // cin>>t;
    while (t--)
    {
        cin >> n;
        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
                sol[i][j]=-1;
            }
        }
        sol[0][0] = 0;
        if (solve(0, 0, 1))
            print_sol();
        else
        {
            cout << "NO solution exists";
        }
    }
}