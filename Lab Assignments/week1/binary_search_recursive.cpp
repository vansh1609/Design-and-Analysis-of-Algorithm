#include <iostream>
#include <stdlib.h>
using namespace std;
int binarySearch(int a[], int l, int r, int key)
{
    if (l <= r)
    {

        int mid = l + (r - l) / 2;
        if (a[mid] == key)
            return mid;
        else if (key > a[mid])
            return binarySearch(a, mid + 1, r, key);
        else if (key < a[mid])
            return binarySearch(a, l, mid - 1, key);
    }
    return -1;
}
int main()
{
    int t, n, key, index, l, r, mid;
    int *p;

    cout << "Enter number of test cases";
    cin >> t;
    cout << endl
         << endl;
    while (t--)
    {

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

        if (binarySearch(p, l, r, key) != -1)
            cout << "Key found at index " << binarySearch(p, l, r, key) << endl;
        else
            cout << "Key not found" << endl;

        cout << endl;
    }
}