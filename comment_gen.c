#include <time.h>
#include <stdio.h>

int main(void)
{
    char name[66];

    char name_end = 0;
    for (int i = 0; i < 65; i++)
    {
        if (!name_end) name[i] = PROGRAMMER_NAME[i];
        if (name[i] == 0) name_end = 1;
        if (name_end) name[i] = ' ';
    }
    name[65] = 0;
    
    char class[71];

    char class_end = 0;
    for (int i = 0; i < 70; i++)
    {
        if (!class_end) class[i] = CLASS[i];
        if (class[i] == 0) class_end = 1;
        if (class_end) class[i] = ' ';
    }
    class[70] = 0;

    char assgn[54];

    fprintf(stderr, "Enter assignment: ");
    scanf(" %53[^\n]", assgn);

    char assgn_end = 0;
    for (int i = 0; i < 53; i++)
    {
        if (assgn[i] == 0) assgn_end = 1;
        if (assgn_end == 1) assgn[i] = ' ';
    }
    assgn[55] = 0;

    char desc[65];

    fprintf(stderr, "Enter Description: ");
    scanf(" %64[^\n]", desc);

    char desc_end = 0;
    for (int i = 0; i < 64; i++)
    {
        if (desc[i] == 0) desc_end = 1;
        if (desc_end == 1) desc[i] = 32; 
    }
    desc[64] = 0;
    
    time_t raw_time = time(NULL);
    struct tm *time_info = localtime(&raw_time);
    char date[72];
    strftime(date, 71, "%B %d, %Y", time_info);

    char date_end = 0;
    for (int i = 0; i < 71; i++)
    {
        if (date[i] == 0) date_end = 1;
        if (date_end == 1) date[i] = 32;
    }
    date[71] = 0;

    printf("/*******************************************************************************\n");
    printf("* Programmer: %s*\n", name);
    printf("* Class: %s*\n", class);
    printf("* Programming Assignment: %s*\n", assgn);
    printf("* Date: %s*\n", date);
    printf("* Description: %s*\n", desc);
    printf("*******************************************************************************/\n");

    return 0;
}
