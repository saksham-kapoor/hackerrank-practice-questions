/*

int migratoryBirds(vector<int> arr)
{
    vector<int> counts(5, 0);
    for (auto i : arr)
    {
        cout << i << " ";
        counts[i - 1]++;
    }
    cout << endl;

    int max = counts[4];
    int max_bird = 5;
    for (int i = 4; i >= 0; i--)
    {
        cout << counts[i] << " ";
        if (max <= counts[i])
        {
            max = counts[i];
            max_bird = i + 1;
        }
    }
    return max_bird;
}

*/