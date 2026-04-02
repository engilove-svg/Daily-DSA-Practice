// Find first and last occurence

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, x, target;
    vector<int> vec;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> x;
        vec.push_back(x);
    }

    cout << "Enter the element to find: ";
    cin >> target;

    int first = -1, last = -1;

    for (int i = 0; i < n; i++) {
        if (vec[i] == target) {
            if (first == -1) first = i;
            last = i;
        }
    }

    cout << "First occurrence index: " << first << endl;
    cout << "Last occurrence index: " << last << endl;

    return 0;
}