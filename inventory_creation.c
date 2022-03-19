#include "main.h"
#include "struct.h"
void inventory_creation()
{
    struct Vaccine vaccine;
    FILE* fp;
    int   number,i;
    fp = fopen("vaccine.txt", "a+");
    printf("\nPlease enter how many records do you want to enter:");
    scanf("%d", &number);
    for (i = 0; i < number; i++)
    {
        printf("\nPlease enter the details as follow");
        printf("\nName of Vaccine:");
        scanf("%s", vaccine.name);
        printf("Vaccine Code:");
        scanf("%s", vaccine.code);
        printf("Producing Country:");
        scanf("%s", vaccine.country);
        printf("Dosage Required:");
        scanf("%d", &vaccine.dosage);
        printf("Population Covered:");
        scanf("%f", &vaccine.population_c);
        printf("Quantity:");
        scanf("%d", &vaccine.quantity);
        fprintf(fp, "%s \t\t %s \t\t %s \t\t %d \t\t %.2f \t\t %d",
            vaccine.name,
            vaccine.code,
            vaccine.country,
            vaccine.dosage,
            vaccine.population_c,
            vaccine.quantity);
        fprintf(fp, "\n");
        printf("\nVaccine %s have been added into the inventory.\n", vaccine.name);
    }
    fclose(fp);
    main();
}