#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
   
    vector<int> numbers;

    cout << "Enter numbers (enter -1 to stop): ";
    int num;
    while (true) {
        cin >> num;
        if (num == -1) {
            break;  
        }
        numbers.push_back(num);
    }

    sort(numbers.begin(), numbers.end());

    cout << "Sorted list: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
