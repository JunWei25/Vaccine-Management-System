
#include "main.h"

int main() {
    int opt;
    printf("\nVACCINE INVENTORY MANAGEMENT SYSTEM\n");

    printf("\n0. Inventory Creation");
    printf("\n1. Update Vaccine Quantity");
    printf("\n2. Search Vaccine");
    printf("\n3. List of all vaccines and distributed quantities");
    printf("\n4. Delete Vaccine Records");
    printf("\n5. Exit");

    printf("\nPlease enter a number(0-5):");
    scanf("%d", &opt);

    switch (opt) {
    case 0:
        inventory_creation();
        break;
    case 1:
        update_vacq();
        break;
    case 2:
        search_vac();
        break;
    case 3:
        display_vac_n_disq();
        break;
    case 4:
        delete_vc();
        break;
    case 5:
        printf("Take care, stay safe!Goodbye!");
        exit(0);
    default:
        printf("Invalid Input! Try Again!");
    }

    return 0;
}