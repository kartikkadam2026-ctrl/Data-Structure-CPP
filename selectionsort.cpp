#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of employees: ";
    cin >> n;

    cout << "Enter the salary of :" << endl;
    float arr[n];
    for(int i = 0; i < n; i++)
    {
        cout << i+1 << "employees: ";
        cin >> arr[i];

    }

    //SELECTION SORT
    for(int i = 0; i < n - 1; i++)
    {
        int min_idx = i;

        for(int j = i + 1; j < n; j++)
        {
            if(arr[j] < arr[min_idx])
            {
                min_idx = j;
            }
        }

        float temp = arr[i];
        arr[i] = arr[min_idx];
        arr[min_idx] = temp;
    }

     cout << "Sorted salaries are(by selection sort): " << endl;
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";

    }
    cout << endl;

    cout << "Top 5 salaries are: ";
    for(int i = n-1; i > n-6; i--)
    {
        cout << arr[i] << " ";
    }
    return 0;
}