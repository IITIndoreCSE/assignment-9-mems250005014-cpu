#include <iostream>
#include <string>
using namespace std;

// Define the structure
struct SalesRecord {
    string month;
    float amount;
};

int main() {
    SalesRecord sales[12]; // Array of 12 months

    cout << "Enter sales data for each month:\n\n";

    // Input loop for 12 months
    for (int i = 0; i < 12; ++i) {
        cout << "Month " << i + 1 << " Name: ";
        cin >> sales[i].month;
        cout << "Sales Amount: ";
        cin >> sales[i].amount;
        cout << endl;
    }

    // Initialize max and min trackers
    int maxIndex = 0;
    int minIndex = 0;

    // Single pass to find max and min
    for (int i = 1; i < 12; ++i) {
        if (sales[i].amount > sales[maxIndex].amount)
            maxIndex = i;
        if (sales[i].amount < sales[minIndex].amount)
            minIndex = i;
    }

    // Display results
    cout << "Output: Month with maximum sales: "
         << sales[maxIndex].month << " with amount "
         << sales[maxIndex].amount << endl;

    cout << "Month with minimum sales: "
         << sales[minIndex].month << " with amount "
         << sales[minIndex].amount << endl;

    return 0;
}
