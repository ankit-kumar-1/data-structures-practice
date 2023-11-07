#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    n = 3;
    int x = 3;

    vector<vector<int>> v;
    for (int i = 0; i < n; i++)
    {
        vector<int> vec(x, 0);
        cin >> vec[0];
        cin >> vec[1];
        cin >> vec[2];

        v.push_back(vec);
    }
    sort(v.begin(), v.end());
    stack<vector<int>> s;
    s.push(v[0]);
    int cost = 0;

    for (int i = 1; i < n; i++)
    {
        if (s.empty())
            s.push(v[i]);
        else
        {
            if (s.top()[1] < v[i][2])
            {
                cost += s.top()[2] * v[i][2];
                s.push(v[i]);
            }
        }
    }
    cout << cost << endl;
    return 0;
}