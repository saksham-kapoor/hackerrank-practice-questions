/*

int diagonalDifference(vector<vector<int>> arr)
{
    int abs_diff, diff, primary_diag = 0, secondary_diag = 0, length = arr.size();
    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < length; j++)
        {
            if (i == j)
            {
                primary_diag += arr[i][j];
            }
            if (i + j == length - 1)
            {
                secondary_diag += arr[i][j];
            }
        }
    }
    diff = primary_diag - secondary_diag;
    abs_diff = (primary_diag > secondary_diag) ? diff : -1 * diff;
    return abs_diff;
}

*/