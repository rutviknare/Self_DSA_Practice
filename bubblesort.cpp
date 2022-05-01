#include <iostream>
#include <vector>
using namespace std;

int bubblesort(vector<int> v)
{
    int n = v.size();
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < v.size(); j++)
        {
            if (v[i] > v[j])
            {
                swap(v[i], v[j]);
            }
        }
    }
    for (auto i = v.begin(); i != v.end(); i++)
    {
        cout << *i << " ";
    }
}

int main()
{
    vector<int> v{10,1,7,6,14,9};
    cout << "Bubble Sort:";
    bubblesort(v);
    return 0;
}