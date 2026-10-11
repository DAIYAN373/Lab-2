#include <iostream>
using namespace std;

void selectionSortWithSteps(int arr[], int n) {
    // Line 1: Print header for the sorting visualization
    cout << "\n=== SELECTION SORT STEP-BY-STEP ===" << endl;

    // Line 2: Display the initial unsorted array
    cout << "Initial Array: ";

    // Line 3: Loop through all elements to print initial array
    for(int k=0; k<n; k++) cout << arr[k] << " ";

    // Line 4: End the line and add extra space
    cout << endl << endl;

    // Line 5: Outer loop - controls number of passes (n-1 passes needed)
    for (int i = 0; i < n - 1; i++) {

        // Line 6: Display current pass number
        cout << "--- PASS " << (i+1) << " ---" << endl;

        // Line 7: Assume current position has the minimum element
        int min_index = i;

        // Line 8: Show which part of array we're searching
        cout << "Looking for minimum in unsorted part: ";

        // Line 9: Loop to display only the unsorted portion
        for(int k=i; k<n; k++) cout << arr[k] << " ";

        // Line 10: End the search range display line
        cout << endl;

        // Line 11: Inner loop - searches unsorted part for actual minimum
        for (int j = i + 1; j < n; j++) {

            // Line 12: Compare current element with assumed minimum
            if (arr[j] < arr[min_index]) {

                // Line 13: Update minimum index if smaller element found
                min_index = j;

                // Line 14: Display when a new minimum is discovered
                cout << "  New minimum found: arr[" << j << "] = " << arr[j] << endl;
            }
        }

        // Line 15: Display the final minimum element found
        cout << "Minimum element: " << arr[min_index] << " at position " << min_index << endl;

        // Line 16: Check if swap is actually needed
        if(min_index != i) {

            // Line 17: Show swap operation details
            cout << "Swapping arr[" << i << "]=" << arr[i] << " with arr[" << min_index << "]=" << arr[min_index] << endl;

            // Line 18: Temporary variable for swap
            int temp = arr[i];

            // Line 19: Move minimum element to current position
            arr[i] = arr[min_index];

            // Line 20: Move previous element to minimum's old position
            arr[min_index] = temp;

        } else {

            // Line 21: Message when no swap is needed
            cout << "No swap needed - element already in correct position" << endl;
        }

        // Line 22: Display current state of entire array
        cout << "Current Array: [";

        // Line 23: Loop to display array with sorted part in parentheses
        for(int k=0; k<n; k++) {

            // Line 24: Check if element is in sorted portion
            if(k <= i)

                // Line 25: Display sorted elements in parentheses
                cout << "(" << arr[k] << ")";

            else

                // Line 26: Display unsorted elements normally
                cout << arr[k];

            // Line 27: Add space between elements (except last)
            if(k < n-1) cout << " ";
        }

        // Line 28: Close the array display
        cout << "]" << endl;

        // Line 29: Prepare to display S/U markers
        cout << "              ";

        // Line 30: Loop to add Sorted/Unsorted markers
        for(int k=0; k<n; k++) {

            // Line 31: Check if element is sorted
            if(k <= i)

                // Line 32: Mark as Sorted
                cout << " S   ";

            else

                // Line 33: Mark as Unsorted
                cout << " U   ";
        }

        // Line 34: End the markers line and add extra space
        cout << endl << endl;
    }

    // Line 35: Display final sorted array header
    cout << "=== FINAL SORTED ARRAY ===" << endl;

    // Line 36: Start displaying final array
    cout << "[";

    // Line 37: Loop to display all elements of sorted array
    for(int k=0; k<n; k++) {

        // Line 38: Print current element
        cout << arr[k];

        // Line 39: Add space between elements (except last)
        if(k < n-1) cout << " ";
    }

    // Line 40: Close the final array display
    cout << "]" << endl;
}

int main() {
    // Line 41: Declare and initialize the array to be sorted
    int arr[6] = {5, 2, 8, 7, 10, 12};

    // Line 42: Store the size of the array
    int n = 6;

    // Line 43: Call the selection sort function with visualization
    selectionSortWithSteps(arr, n);

    // Line 44: Return 0 to indicate successful execution
    return 0;
}
