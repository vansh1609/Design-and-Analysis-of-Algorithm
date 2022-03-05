#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
    int t, n, key, comparisons, index, l, r, mid;
    int *p;
    bool flag = false;
    cout << "Enter number of test cases";
    cin >> t;
    cout << endl
         << endl;
    while (t--)
    {
        comparisons = 0;
        cout << "Enter size of array" << endl;
        cin >> n;
        p = new int[n];
        cout << "Enter elements of array" << endl;
        for (int i = 0; i < n; i++)
            cin >> p[i];
        cout << "Enter key to search" << endl;
        cin >> key;
        l = 0;
        r = n - 1;
        while (l <= r)
        {
            flag=false;
            comparisons++;
            mid = l + (r - l) / 2;
            if (p[mid] == key)
            {
                flag = true;
                index = mid;
                break;
            }
            else if (key > p[mid])
                l = mid + 1;
            else
                r = mid - 1;
        }
        if (flag == true)
            cout << "Key found at index " << index << endl;
        else
            cout << "Key not found" << endl;
        cout << "Number of comparisons = " << comparisons << endl
             << endl;
    }
}