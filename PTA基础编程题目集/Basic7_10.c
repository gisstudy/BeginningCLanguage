#include <stdio.h>

int main()
{
    int work_years = 0;
    int weekly_work_hours = 0;
    scanf("%d %d", &work_years, &weekly_work_hours);

    const int BASIC_WEEKLY_WORK_HOURS = 40;
    const int BASIC_WORK_YEARS = 5;
    const double SALARY_RATE = 1.5;

    double salary = 0;
    int salary_per_hour = 30;
    if (work_years >= BASIC_WORK_YEARS)
    {
        salary_per_hour = 50;
    }

    if (weekly_work_hours <= BASIC_WEEKLY_WORK_HOURS)
    {
        salary = weekly_work_hours * salary_per_hour;
    }
    else
    {
        salary = BASIC_WEEKLY_WORK_HOURS * salary_per_hour + (weekly_work_hours - BASIC_WEEKLY_WORK_HOURS) * salary_per_hour * SALARY_RATE;
    }

    printf("%.2f\n", salary);

    return 0;
}