/*
There are 101 citizens in Chefland. It is election time in Chefland and 
parties A, B, and C are contesting the elections. Party  receives  votes, 
party  receives  votes, and party  receives  votes.

The constitution of Chefland requires a particular party to receive a 
clear majority to form the government. A party is said to have a clear majority 
if it receives strictly greater than 50 votes.

If any party has a clear majority, print the winning party (A, B or C). Otherwise, print NOTA.
*/

#include <iostream>
#include<bits/stdc++.h>
#include <math.h>

using namespace std;
void checkParty(int a,int b,int c){
    int m = max({a, b, c});
    if(m <= 50){
        cout << "NOTA" <<endl;
    }
    else {
        if(a > b && a > c) {
            cout << "A" <<endl;
        }
        else if (b > a && b > c)
        {
            cout << "B" <<endl;
        }
        else if(c > a && c > b){
            cout << "C" <<endl;
        }
        
    }
  
}

int main()
{
    int t, A, B, C,max;
    cin >> t;
    while (t--)
    {
        cin >> A >> B >> C;
        checkParty(A,B,C);
    }
    return 0;
}