#include <iostream>
using namespace std;

// -10,-12,-6,-10,-2,-4,0,3,1,2,7

int main()
{

    int arr[11] = {-10, -12, -6, -10, -2, -4, 0, 3, 1, 2, 7};
    int key = 0;
    cout << "Enter key to search: ";
    int low = 0;
    int high = 10;
    int mid = (low + high) / 2;

    while (low <= high)
    {
        if (arr[mid] == key)
        {
            cout << "Key found at index: " << mid << endl;
            return 0;
        }
        else if
        {
            (arr[mid] < key)
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
    }
    cout << "Key not found." << endl;
    return 0;
}