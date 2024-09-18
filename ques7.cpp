// If an array arr contains n elements, then check if the given array is a palindrome or not .
#include <iostream>
using namespace std;

bool isPalindrome(int arr[], int n) {
    int left = 0;
    int right = n - 1;

    while (left < right) {
        if (arr[left] != arr[right]) {
            return false; // Not a palindrome
        }
        left++;
        right--;
    }
    return true; // Array is a palindrome
}

int main() {
    int arr[] = {1, 2, 3, 2, 1}; // Example array
    int n = sizeof(arr) / sizeof(arr[0]); // Get the size of the array

    if (isPalindrome(arr, n)) {
        cout << "The array is a palindrome." << endl;
    } else {
        cout << "The array is not a palindrome." << endl;
    }

    return 0;
}
