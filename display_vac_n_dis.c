#include "main.h"
void display_vac_n_disq() {
    FILE* fp;
    int opt;
    char c;

    printf("\nWould you like to view vaccine log or vaccine distribution log or both?\n 0-View Vaccine log only \n 1-View Distribution log only \n 2-Both \n 3-Main Menu \n Enter option:");
    scanf("%d", &opt);
    switch (opt){
    case 0:
        fp = fopen("vaccine.txt", "r");
        if (fp == NULL){
            printf("Error! Please Check vaccine.txt\n");
            exit(0);
          }

        // Read contents from file
        printf("\nDisplaying Vaccine File\nVaccine Name  Vaccine Code   Producing Country Dosage  Population Covered  Quantity\n ");
        c = fgetc(fp);
        while (c != EOF){
             printf("%c", c);
             c = fgetc(fp);
            }

        fclose(fp);
        break;
     
    case 1: 
        fp = fopen("dist.txt", "r");
        if (fp == NULL){
            printf("Cannot open file \n");
            exit(0);
        }

        // Read contents from file
        printf("\nDisplaying Distribution File\nVaccine Code Quantity\n");
        c = fgetc(fp);
        while (c != EOF) {
            printf("%c", c);
            c = fgetc(fp);
        }

        fclose(fp);
        break;
    case 2:
         fp = fopen("vaccine.txt", "r");
         if (fp == NULL){
             printf("Cannot open file \n");
             exit(0);
         }

        // Read contents from file
        printf("\nDisplaying Both Files\n");
            
        c = fgetc(fp);
        while (c != EOF) {
            printf("%c", c);
            c = fgetc(fp);
        }

        fclose(fp);

        fp = fopen("dist.txt", "r");
        if (fp == NULL){
            printf("Cannot open file \n");
            exit(0);
        }

        // Read contents from file
        c = fgetc(fp);
        while (c != EOF) {
            printf("%c", c);
            c = fgetc(fp);
        }

        fclose(fp);
        break;
    case 3:
        main();
        break;
    default: 
         printf("Invalid option! Try Again!");
     }
        main();
}