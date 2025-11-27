#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter sorted elements:\n";
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    // Largest element in a sorted array
    int largest = arr[n - 1];

    // Using "binary search style" approach to confirm last largest value
    int low = 0, high = n - 1, mid, pos = n - 1;

    while(low <= high) {
        mid = (low + high) / 2;

        if(arr[mid] <= largest)
            low = mid + 1;
        else
            high = mid - 1;
    }

    cout << "Largest element = " << largest 
         << " found at index " << pos;

    return 0;
}
