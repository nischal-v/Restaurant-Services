#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

FILE *fp;
FILE *fp1;

void signup();
void items();

void login()
{
	char un1[10],pw1[10],un2[10],pw2[10];
	int com1,com2,flag1=0,flag2=0,flag3=0,check=0;
	fp=fopen("Web.txt","r");
	printf("Enter Username: ");
	  scanf("%s", un1);
	printf("Enter Password: ");
	  scanf("%s", pw1); 
	
	while(check==0)
	{
		fscanf(fp,"%s",un2);
	    fscanf(fp,"%s",pw2);
	    com1=strcmp(un1,un2);
	    com2=strcmp(pw1,pw2);

	    if(com1==0 && com2==0)
	    {
	    	flag1=1;
		}
		else if ((com1==0 && com2!=0) || (com1!=0 && com2==0))
		{
			flag2=1;
		}
		else if(com1!=0 && com2!=0)
		{
			flag3=1;
		}
	    check=feof(fp);
	}
	if(flag1==1)
	{
		system("cls");
		 printf ("\t\t     Welcome To Espresso Cafe\n");
    while (1){
        printf ("1. Order\n2. Display \n3. Exit the program\n");

        int in;
        scanf ("%d", &in);
        getchar ();
        switch (in){
            case 1 : {
                order ();
                break;
            }
            case 2 : {
                display();
                break;
            }
            case 3 : {
                printf ("Thank you and visit again\n\n");
                exit(0);
            }
        }
    }
	}
	else if(flag2==1)
	{
		printf("\nCredentials did not match\nPlease try again\n");
			login();
	}
	else if(flag3==1)
	{
		printf("\nYou are not a registered user!\nPlease register yourself");
		 	signup();
	}
	
	
	
}

void signup()
{
	char fn[15],ln[15],un1[10],pw1[10],db[6];
	fp1=fopen("Signup.txt","a");
	printf("\n Enter your first name: ");
	  scanf("%s", fn);
	printf("\n Enter your last name: ");
	  scanf("%s", ln);
	printf("\n Enter your date of birth: ");
	  scanf("%s", db);
	printf("\n Enter your username: ");
	  scanf("%s", un1);
	printf("\n Enter your password: ");
	  scanf("%s", pw1);
	
	fprintf(fp, "\n");
	fprintf(fp, un1);
	fprintf(fp, "\t");
	fprintf(fp, pw1);
	
	fprintf(fp1, "\n");
	fprintf(fp1, fn);
	fprintf(fp1, "\n");
	fprintf(fp1, ln);
	fprintf(fp1, "\n");
	fprintf(fp1, db);
	fprintf(fp1, "\n");
	
	printf("\nYou have successfully registered!\n");

	fclose(fp);
	fclose(fp1);
		
}

struct order{
    char name[50];
    int order_number;
    int number_of_food;
    int cost;
}p[10000];
int order_count = 0, served_count = 0, waiting_now = 0;

int order ()
{
    int n, in, qu;
    p[order_count].order_number = 10000+order_count;
    items();
    p[order_count].number_of_food = n;
    p[order_count].cost = 0;
    p[order_count].number_of_food = 0;
    
    level:
    printf ("How many items you want to order? ");
    scanf ("%d", &n);

    getchar ();
    while (n--){
        printf ("\nEnter chosen item code\n");
        scanf ("%d", &in);
        getchar();
        switch(in){
    case 11 : {
        printf ("Enter the size of burger: 1. Small  2. Large\n");
        int i;
        scanf ("%d", &i);
        getchar();

        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();

        p[order_count].number_of_food +=qu;

        if (i==1) p[order_count].cost += (130*qu);

        else p[order_count].cost += (180*qu);
        break;
    }
    case 12 :{
        printf ("Enter the size of Chicken Pizza: 1. Small  2. Medium  3. Large\n");
        int i;
        scanf ("%d", &i);
        getchar();

        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();

        p[order_count].number_of_food +=qu;

        if (i==1) p[order_count].cost += (750*qu);

        else if (i==2) p[order_count].cost += (975*qu);

        else  p[order_count].cost += (1250*qu);

        break;
    }
    case 13 :{
        printf ("Enter the amount of chicken: 1. 2 pieces  2. 5 pieces  3. 10 pieces\n");
        int i;
        scanf ("%d", &i);
        getchar();

        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();

        p[order_count].number_of_food +=qu;

        if (i==1) p[order_count].cost += (85*qu);

        else if (i==2) p[order_count].cost += (320*qu);

        else  p[order_count].cost += (790*qu);

        break;
    }
    case 14 :{
        printf ("Enter the size of grilled chicken: 1. Quarter  2. Half  3. Full\n");
        int i;
        scanf ("%d", &i);
        getchar();

        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();

        p[order_count].number_of_food +=qu;

        if (i==1) p[order_count].cost += (70*qu);

        else if (i==2) p[order_count].cost += (140*qu);

        else  p[order_count].cost += (250*qu);

        break;
    }
    case 15 :{
        printf ("Enter the size of Noodles: 1. Half plate  2. Full plate\n");
        int i;
        scanf ("%d", &i);
        getchar();

        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();

        p[order_count].number_of_food +=qu;

        if (i==1) p[order_count].cost += (130*qu);

        else p[order_count].cost += (250*qu);

        break;
    }
    case 16 :{
        printf ("Enter the size of pasta: 1. Half plate 2. Full plate\n");
        int i;
        scanf ("%d", &i);
        getchar();

        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();

        p[order_count].number_of_food +=qu;

        if (i==1) p[order_count].cost += (120*qu);

        else p[order_count].cost += (240*qu);

        break;
    }
    case 17 : {
        printf ("250 mg of OREO SHAKE\n");

        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();

        p[order_count].number_of_food +=qu;
        p[order_count].cost += (180*qu);
        break;
    }
    case 18 : {
        printf ("250 mg of Cold Coffee\n");

        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();

        p[order_count].number_of_food +=qu;
        p[order_count].cost += (65*qu);
        break;
    }
    case 19 : {
        printf ("250 mg of Cappuccino\n");

        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();

        p[order_count].number_of_food +=qu;
        p[order_count].cost += (70*qu);
        break;
    }
    case 20 :{
        printf ("Enter the quantity of Coke: 1. 250mg  2. 500mg\n");
        int i;
        scanf ("%d", &i);
        getchar();

        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();

        p[order_count].number_of_food +=qu;

        if (i==1) p[order_count].cost += (20*qu);

        else p[order_count].cost += (30*qu);
        break;
    }
    default : {
        printf ("Invalid selection try again\n");
        n++;
    }
        }
    }
    char temp;
    printf ("Do you want to order anything else?(y/n)\n ");
    scanf("%c", &temp);
    if (temp == 'y' || temp == 'Y')
        goto level;
    printf ("\nQuantity of food ordered %d\n", p[order_count].number_of_food);
    printf ("\nYour bill amount is %d Rupees.\n\nThank you for your order.\nPlease wait while we prepare the food.\n\n", p[order_count].cost);
    order_count ++;
}
int display()
{
    printf("Here is the display:\n");
	printf ("\nTotal order taken: %d\n", (order_count));
    printf ("Total number of order served %d\n", served_count);
    printf ("Number of orders currently waiting to be served: %d\n", (order_count-served_count));
    printf ("Currently preparing food for order no. %d\n\n", p[served_count].order_number);
}
void items()
{
    printf("...................................................MENU.....................................................\n");

    printf("Item Code#   	Description				Size					Price\n");

    printf("[11]		Burger					Small/Large				130/180\n");
    printf("[12]		Chicken Pizza			        Small/Medium/Large			750/975/1250\n");
    printf("[13]		Fried Chicken		         	2/5/10 pieces				85/320/790\n");
    printf("[14]		Grilled Chicken			        Quarter/Half/Full		        70/140/250\n");
    printf("[15]		Noodles					Half plate/Full plate		        130/250\n");
    printf("[16]		Pasta					Half plate/Full	plate			120/240\n");
    printf("[17]		Oreo Shake				250mg					180\n");
    printf("[18]		Cold Coffee				250mg					65\n");
    printf("[19]		Cappuccino				250mg					70\n");
    printf("[20]		Coke					250/500mg				20/30\n\n");

}
int main ()
{
	int ch;
	fp=fopen("Web.txt","a");
	printf("\n******************************Espresso Cafe******************************\n");
	printf("1. Login\n");
	printf("2. Sign Up\n");
	printf("3. Exit\n");
	printf("Please enter your choice: \n");
	  scanf("%d", &ch);
	
	switch(ch)
	{
		case 1: login();
		     break;
		case 2: signup();
		     break;
		case 3: exit(0);
			 break;
		
	}
	
}
