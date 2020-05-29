/*

vector<int> compareTriplets(vector<int> a, vector<int> b)
{
    vector<int> scores(2, 0);
    for (int i = 0; i < 3; i++)
    {
        if (a[i] > b[i])
        {
            scores[0]++;
        }
        else if (a[i] < b[i])
        {
            scores[1]++;
        }
    }
    return scores;
}

*/