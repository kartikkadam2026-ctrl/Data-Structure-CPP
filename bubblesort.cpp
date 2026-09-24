#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number employeesL: ";
    cin >> n;

    cout << "Enter the salary of :" << endl;
    float arr[n];
    for(int i = 0; i < n; i++)
    {
        cout << i+1 << " employee :";
        cin >> arr[i];

    }

    //BUBBLE SORT
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = 0; j < n - i - 1; j++)
        {
            if(arr[j] > arr[j +1])
            {
                float temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;

            }
        }
    }

    cout << "Sorted salaries are(by bubble sort): " << endl;
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