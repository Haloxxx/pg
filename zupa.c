/* example11-1.c */
#include <stdlib.h>
#include <stdio.h>


struct person
{
	char	given_name[20];
	char	surname[20];
	long unsigned	pesel;
	char city[30];
};

typedef struct person zupa;

void printPerson1(struct person* ptr)
{
	printf("Name: %s %s\n", ptr->given_name, ptr->surname);
	printf("PESEL number: %lu\n", ptr->pesel);
	printf("City: %s\n",ptr->city);
}

void printPerson2(struct person joe, int i)
{
    printf("%d.\n",i+1);
	printf("Name: %s %s\n", joe.given_name, joe.surname);
	printf("PESEL number: %lu\n", joe.pesel);
	printf("City: %s\n",joe.city);
	printf("\n\n");
}

void readPerson(struct person* bill)
{
    printf("Type the given name:\n");
    scanf("%s",bill->given_name);
    printf("Type the surname:\n");
    scanf("%s",bill->surname);
    printf("Type PESEL:\n");
    scanf("%lu",&bill->pesel);
    //system("pause");
    printf("Type the city:\n");
    scanf("%s",bill->city);
    printf("\n\n");
}


int main()
{
	struct person einstein = {
		"Albert",
		"Einstein",
		790314123,
		"Zurych"
	};

	int dim;
	zupa* vec;



	/*printf("Name: %s %s\n",einstein.given_name,einstein.surname);
	printf("PESEL number: %lu\n", einstein.pesel);
	printf("City: %s\n",einstein.city);

	printf("Let's change some data:\n");
	printf("%s is getting a new PESEL number\n", einstein.surname);
	printf("Please enter a new PESEL number: ");
	scanf("%lu", &einstein.pesel);

	printPerson1(&einstein);
	printPerson2(einstein);

	printf("Let's do the same again.\n");
	printf("This time we use some pointers for the struct:\n");
	struct person *ptr1;
	ptr1 = &einstein;

	printf("Name: %s %s\n", ptr1->given_name, ptr1->surname);
	printf("PESEL number: %lu\n", ptr1->pesel);

	printf("Let's change some data:\n");
	printf("%s is getting a new PESEL number\n", ptr1->surname);
	printf("Please enter a new PESEL number: ");
	scanf("%lu", &ptr1->pesel);

	printPerson1(&einstein);
	printPerson2(einstein);*/

	printf("How many people would you like to enter: \n");
    scanf("%d",&dim);

    vec = (zupa *) calloc(dim, sizeof(zupa));

    int i;

    for(i=0;i<dim;i++)
    {
        readPerson(&vec[i]);
    }

    for(i=0;i<dim;i++)
    {
        printPerson2(vec[i],i);
    }

	return EXIT_SUCCESS;
}
