#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter sorted elements:\n";

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int target;

    cout << "Enter element to search: ";
    cin >> target;

    int left = 0;
    int right = n - 1;
    int found = -1;

    while(left <= right)
    {
        int mid = (left + right) / 2;

        if(arr[mid] == target)
        {
            found = mid;
            break;
        }
        else if(target < arr[mid])
        {
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }

    if(found != -1)
    {
        cout << "Element found at index " << found;
    }
    else
    {
        cout << "Element not found";
    }

    return 0;
}