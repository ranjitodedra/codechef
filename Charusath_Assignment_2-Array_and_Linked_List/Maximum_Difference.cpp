/*
Given a matrix of size N * M where N represent number of rows and M represents number of columns.
For a row we define a value called DiffValue which is difference between its largest term and 
the smallest term i.e (maximum term - minimum term). 
You have to answer the largest DiffValue among all the rows for the given matrix.
*/
#include<iostream>
using namespace std;
int main()
{
int t,n,m,max_term,min_term,diff_val,max_diff;
cin >> t;
while (t--)
{
    max_term = 0;
    cin >> n >> m ;
    int mat[n][m];
    min_term = mat[0][0];

    for(int i=0;i<n;i++){
        for (int j = 0; j < m; j++)
        {
            cin >> mat[i][j];

            if(max_term < mat[i][j])
                max_term = mat[i][j];

            if(min_term > mat[i][j]);
                min_term = mat[i][j];
        }
        diff_val = max_term - min_term;
        if(max_diff < diff_val)
            max_diff = diff_val;
    }
    cout << max_diff << endl;
}

return 0;
}