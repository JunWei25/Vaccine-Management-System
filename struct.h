typedef struct Vaccine 
{
    char    name[20];
    char    code[3];
    char    country[20];
    int     dosage;
    float   population_c;
    long    quantity;
    struct  vaccine* next;
}Vaccine; /*this is for vaccine*/

/*typedef struct to allow any of this to be used in the code when this header file is included into the source file.*/

typedef struct distribution
{
    char vac_code[3];
    long quantity;
    struct distribution* next;
}distribution; /*this is for vaccine distribution*/

