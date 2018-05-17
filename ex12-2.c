#include <stdio.h>
#include <stdlib.h>

struct acco{
char hol[20];
unsigned int num;
float bal;
};


void print(struct acco* wyd)
{
    printf("The name of the account holder is: %s\n",wyd->hol);
    printf("The name of the account holder is: %d\n",wyd->num);
    printf("The name of the account holder is: %f\n",wyd->bal);
}

int main()
{

struct acco list[1000];
int q,i;
struct acco* vec;
float total;


total =0;

printf("How many bank accounts would you like to enter?:\n");
scanf("%d",&q);
printf("\n\n");

i=0;

for(i=0;i<q;i++)
{
    printf("\n%d.\n",i+1);

    printf(" Holder name: ");
    scanf("%s",list[i].hol);
    printf(" Number: ");
    scanf("%d",&list[i].num);
    printf(" Balance: ");
    scanf("%f",&list[i].bal);
    total = total + list[i].bal;
}

printf("\n\n\n\n");

vec=&list[0];
for(i=0;i<q;i++)
{
    printf("\n%d.\n",i+1);
    print(vec+i);
}

printf("\n\nThe amount of money in the bank is: %f",total);



    return 0;
}
