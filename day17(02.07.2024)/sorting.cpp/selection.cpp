#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr = {44, 33, 55, 22, 11};
    int n = arr.size();
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[minIndex] > arr[j])
            {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
    for (int i : arr)
    {
        cout << i << endl;
    }
    return 0;
}