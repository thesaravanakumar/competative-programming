#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void rot90(vector<vector<char>> &a, int N)
{

    for (int i = 0; i < N / 2; i++)
    {
        for (int j = i; j < N - i - 1; j++)
        {
            int temp = a[i][j];
            a[i][j] = a[N - 1 - j][i];
            a[N - 1 - j][i] = a[N - 1 - i][N - 1 - j];
            a[N - 1 - i][N - 1 - j] = a[j][N - 1 - i];
            a[j][N - 1 - i] = temp;
        }
    }
}

bool can(vector<vector<char>> s, vector<vector<char>> t, vector<pair<int, int>> st_t, int n)
{
    if (s == t)
    {
        return true;
    }
    vector<pair<int, int>> st_s;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            char data;
            cin >> data;
            data = s[i][j];
            if (data == '#')
            {
                st_s.push_back({i, j});
            }
        }
    }
    sort(st_s.begin(), st_s.end());

    if (st_t.size() != st_s.size())
    {
        return false;
    }

    int k1 = abs(st_s[0].first - st_t[0].first);
    int k2 = abs(st_s[0].second - st_t[0].second);

    for (int i = 1; i < st_t.size(); i++)
    {
        int d1 = abs(st_s[i].first - st_t[i].first);
        int d2 = abs(st_s[i].second - st_t[i].second);

        if (d1 != k1 || d2 != k2)
        {
            return false;
        }
        k1 = d1;
        k2 = d2;
    }
    return true;
}

int main()
{
    int n;
    cin >> n;

    vector<vector<char>> s(n, vector<char>(n, 0));
    vector<vector<char>> t(n, vector<char>(n, 0));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> s[i][j];
        }
    }
    vector<pair<int, int>> st_t;
    //set<pair<int,int>> st_t;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            char data;
            cin >> data;
            t[i][j] = data;
            if (data == '#')
            {
                st_t.push_back({i, j});
            }
        }
    }

    sort(st_t.begin(), st_t.end());

    bool f = false;
    for (int i = 0; i <= 4; i++)
    {
        if (can(s, t, st_t, n))
        {
            f = true;
            break;
        }
        rot90(s, n);
    }

    if (f)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}