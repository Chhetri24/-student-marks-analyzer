#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    int marks[n];
    int total = 0;

    // Input marks
    cout << "Enter marks of " << n << " students:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> marks[i];
        total += marks[i];
    }

    // Average calculation
    float average = (float)total / n;
    cout << "Average marks: " << average << endl;

    // Find max and min
    int maxMark = marks[0], minMark = marks[0];
    for (int i = 1; i < n; i++)
    {
        if (marks[i] > maxMark)
            maxMark = marks[i];
        if (marks[i] < minMark)
            minMark = marks[i];
    }
    cout << "Highest mark: " << maxMark << endl;
    cout << "Lowest mark: " << minMark << endl;
    // Sorting using Bubble Sort
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (marks[j] > marks[j + 1])
            {
                int temp = marks[j];
                marks[j] = marks[j + 1];
                marks[j + 1] = temp;
            }
        }
    }

    // Display sorted marks
    cout << "Sorted marks: ";
    for (int i = 0; i < n; i++)
    {
        cout << marks[i] << " ";
    }

    return 0;
}
