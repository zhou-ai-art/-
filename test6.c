#include <stdio.h>
struct Student
{
    int id;
    char name[50];
    float ch;
    float English;
    float math;
    float av;
};

int main()
{
    struct Student s[3] = { 0 };
    int i = 0;
    for (i = 0; i < 3; i++)
    {
        scanf_s("%d %s %f %f %f", &s[i].id, s[i].name,30, &s[i].ch, &s[i].English, &s[i].math);
        s[i].av =(s[i].ch + s[i].English + s[i].math) / 3.00;
    }
    for (i = 0; i < 3; i++)
    {
        printf("%d %s %.2f %.2f %.2f \n average : %.2f\n", s[i].id, s[i].name,s[i].ch, s[i].English,s[i].math, s[i].av);
    }

    return 0;
}