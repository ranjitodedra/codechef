/*
You are given an array A of N integers: A1, A2, ..., AN. 
You need to find a longest contiguous subarray in the array such that each integer in this subarray is an even integer, 
and output its length.
A contiguous subarray is of the form Ai, Ai+1, ..., Aj, for some i and j.
*/

#include <iostream>
using namespace std;
int main()
{
    int t, n, streak, longest;

    cin >> t; //test case
    while (t--)
    {
        streak = 0;
        longest = 0;
        cin >> n; //size of array
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int j = 0; j < n; j++)
        {

            if (arr[j] % 2 == 0)
            {
                streak++;
            }
            else
            {
                if (longest < streak)
                    longest = streak;
                streak = 0;
            }
        }
        if (longest < streak)
            longest = streak;
        cout << longest << endl;
    }

    return 0;
}