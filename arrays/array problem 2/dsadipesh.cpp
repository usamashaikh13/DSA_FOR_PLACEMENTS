#include <bits/stdc++.h>
using namespace std;

int sunRise(vector<int> v)
{
    int size = v.size();
    if (size == 1 or size == 0)
    {
        return size;
    }

    int count = 1;
    for (int i = 1; i < size; i++)
    {
        if (v[i] > v[i - 1])
        {
            count++;
        }
    }
    return count;
}

int main()
{

    vector<int> v = {7, 4, 8, 2, 9};
    cout << sunRise(v);
    return 0;
}