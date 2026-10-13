#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;

    vector<int> numbers;
    set<int> values;

    for(int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;

        numbers.push_back(temp);
        values.insert(temp);
    }

    for(int c = 0; c < n; c++ )
    {
        int needed = x - numbers[c];
        auto found = values.find(needed);

        if(found != values.end())
        {
            for(int j = 0; j < n; j++)
            {
                if(numbers[j] == needed && j != c)
                {
                    cout << c + 1 << " " << j + 1;
                    return 0;
                }
            }
        }
    }

    cout << "IMPOSSIBLE";
    return 0;
}
