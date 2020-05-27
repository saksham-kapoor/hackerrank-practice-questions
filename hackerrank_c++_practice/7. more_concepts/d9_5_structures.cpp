// Not Completed!!!! 12/19 Test cases failed!!!!

#include <iostream>

using namespace std;

//Define the structs Workshops and Available_Workshops.
struct Workshop
{
    int start_time, duration, end_time;
};

struct Available_Workshops
{
    int n;
    Workshop *workshops = new Workshop[n];
};

//Implement the functions initialize and CalculateMaxWorkshops
Available_Workshops *initialize(int start_time[], int duration[], int n)
{
    Available_Workshops *my_available_workshops = new Available_Workshops;
    my_available_workshops->n = n;
    for (int i = 0; i < n; i++)
    {
        my_available_workshops->workshops[i].start_time = start_time[i];
        my_available_workshops->workshops[i].duration = duration[i];
        my_available_workshops->workshops[i].end_time = start_time[i] + duration[i];
    }
    return my_available_workshops;
}

int CalculateMaxWorkshops(Available_Workshops *ptr)
{
    int count = 0;
    int *accepted_workshops_endtimes = new int[ptr->n];
    for (int i = 0; i < ptr->n; i++)
    {

        if (i == 0)
        {
            accepted_workshops_endtimes[count++] = ptr->workshops[i].end_time;
        }
        else
        {
            int start_time = ptr->workshops[i].start_time;
            int end_time = accepted_workshops_endtimes[count - 1];
            if (start_time >= end_time)
            {
                accepted_workshops_endtimes[count++] = ptr->workshops[i].end_time;
            }
        }
    }
    return count;
}

int main(int argc, char *argv[])
{
    int n; // number of workshops
    cin >> n;
    // create arrays of unknown size n
    int *start_time = new int[n];
    int *duration = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> start_time[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> duration[i];
    }

    Available_Workshops *ptr;
    ptr = initialize(start_time, duration, n);
    cout << CalculateMaxWorkshops(ptr) << endl;
    return 0;
}
