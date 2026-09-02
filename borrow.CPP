#include <iostream>
using namespace std;
int main()
{

    int n;
    cout << "Enter number of library member:" << endl;
    cin >> n;

    int borrow[n];
    cout << "Enterb number of books borrowed by each number:" << endl;

    for(int i=0; i<n; i++)
    {
        cout << "Member" << i+1 << ":" << endl;
        cin >> borrow[i];

    }


    //AVERAGE
    int sum = 0;
    for(int i=0; i<n; i++)
    {
        sum += borrow[i];
    } 

    float average = (float)sum / n;
    cout << "Average number of books :" << average << endl;

    //HIGHEST AND LOWEST
    int minborrow = borrow[0];
    int maxborrow = borrow[0];
    int minmember = 0;
    int maxmember = 0;


    for(int i=0; i<n; i++)
    {
        if(borrow[i] > maxborrow)
        {
            maxborrow = borrow[i];
            maxmember = i;

        }

        if(borrow[i] < minborrow)
        {
            minborrow = borrow[i];
            minmember = i;

        }

    }

    cout << "Minimum borrowed :" << minborrow << endl;
    cout << "Maximum borrowed :" << maxborrow << endl;
    cout << "Minimum member :" << minmember << endl;
    cout << "Maximum member :" << maxmember << endl;

    //COUNT MEMBER WITH ZERO BORROW COUNT
    int zerocount = 0;
    for(int i=0; i<n; i++)
    {
        if(borrow[i] == 0)
        {
            zerocount++;
        }
    }

    cout << "Members with zero borrow count :" << zerocount << endl;


    //FIND MODE
    int mode = borrow[0];
    int maxFrequency = 0;

    for(int i=0; i<n; i++)
    {
        int frequency = 1;
        for(int j=0; j<n; j++)
        {
            if(borrow[i] == borrow[j])
            {
                frequency++;
            }
        }

        if(frequency > maxFrequency)
        {
            maxFrequency = frequency;
            mode = borrow[i];

        }
   }

   cout << "Mode :" << mode << endl;
   cout << "Maximum frequency :" << maxFrequency << endl;

   return 0;



}

// Name : Kartik Santosh Kadam
// Roll no : 53
// Div : SE - A -A3