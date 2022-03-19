#include "main.h"
void delete_vc() {
	FILE* fp;
	int opt;
	printf("\nWould you like to delete the entire vaccine log or delete distribution log or both?\n 0-Delete Vaccine only \n 1-Delete Distribution only \n 2-Both \n 3-Main Menu \n Enter option:");
	scanf("%d", &opt);
	switch (opt) {
	case 0:
		fp = fopen("vaccine.txt", "w");
		fclose(fp);
		printf("Entire vaccine log have been deleted\n");
	case 1:
		fp = fopen("dist.txt", "w");
		fclose(fp);
		printf("Entire distribution log have been deleted\n");
	case 2:
		fp = fopen("vaccine.txt", "w");
		fclose(fp);
		fp = fopen("dist.txt", "w");
		fclose(fp);
		printf("Both files log have been deleted\n");
	case 3:
		main();
	default:
		printf("Invalid Input! Try Again!");
	}
}