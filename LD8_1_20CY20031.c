//Roll No.:20CY20031
//Name:Shubham Snehil
#include <stdio.h>
#include <string.h>
struct customer//creating main structure
{
    char name[20];//declaration of members
    char residence[20];
    long int mob_num;
    int ID;
};
struct customer register_customer(struct customer customer_details[10],int last_index)//function declaration for registration of customer
{
    struct customer temp;//temp is a container for user entered details
    printf("Enter name:");
    scanf("%s",&temp.name);
    printf("\nEnter address:");
    scanf("%s",&temp.residence);
    printf("\nEnter mobile number:");
    scanf("%lu",&temp.mob_num);
    printf("The registered customer details are:");
    scanf("%c");
    return temp;
}
void list_customer(struct customer customer_details[10],int last_index)//function declaration to show all the registered customers
{
    printf("The detailed list of all customers:\n");
    printf("CN    Name    Address    Mob.Number\n");
    for(int i=0; i<last_index; i++)//loop to print the details of all customers
    {
        printf("%d    %s    %s    %lu\n",customer_details[i].ID,customer_details[i].name,customer_details[i].residence,customer_details[i].mob_num);
    }
    scanf("%c");
}
struct customer sale(struct customer customer_details[10],int last_index)//function declaration to take the amount against customer number
{
    struct customer temp;
    int temp1,amount,sum[10];
    printf("\nEnter the CN:");
    scanf("%d",&temp1);
    printf("\nEnter purchase amount:");
    scanf("%d",&amount);
    for(int i=0;i<last_index;i++)
    {
        if(temp1==customer_details[i].ID)
        {
            sum[i]=sum[i]+amount;
        }
    }
    scanf("%c");
    return temp;
}
int main()//main function declaration
{
    struct customer customer_details[10];
    struct customer sales_details[10];
    int last_index=0;
    char choice;
    while(1)//creation of infinite loop
    {
        printf("\nChoose option- 'r' 'l' 's' 'd' 'a' 'e':");
        scanf("%c",&choice);
        switch(choice)
        {
        case 'r'://this case takes the details and displays it (of 1 customer)
            customer_details[last_index]=register_customer(customer_details,last_index);
            customer_details[last_index].ID  = last_index;
            printf("\nCustomer number (CN):%d",customer_details[last_index].ID);
            printf("\nCustomer Name:%s",customer_details[last_index].name);
            printf("\nCustomer address:%s",customer_details[last_index].residence);
            printf("\nCustomer Mob. number:%lu",customer_details[last_index].mob_num);
            last_index++;
            break;
        case 'l'://this case displays details of all registered customers
            list_customer(customer_details,last_index);
            break;
        case 's'://this case stores the individual purchase made by a customer against the customer number
            sale(customer_details,last_index);
            break;
        case 'd':
            break;
        case 'a':
            break;
        case 'e'://exit case
            return 0;
            break;
        default://for all other choices
            printf("Invalid Choice\n");
        }
    }
}
