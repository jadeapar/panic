

//Jadea Parchment this program will calculate the cost of items purchased at a store to mitigate panic shopping.
#include <stdio.h>

int main() {
    int num_items,item_price,amount,left,cost=0,final_cost=0,i=1;
    printf("Enter Item Price: \n");
    scanf("%d",&item_price);
//input validation 
    if (item_price <=0) {
        printf("Invalid price %d\n",item_price);
        printf("Price must be greater than 0");
        return 0;
    }
    printf("Enter number of items: \n");
    scanf("%d",&num_items);
//input validation
    if (num_items <=0){
        printf("Invalid number of units %d\n",num_items);
        printf("Number of units must be greater than 0");
        return 0;
    }
    printf("Enter money amount: \n");
    scanf("%d",&amount);
//input validation 
    if (amount <0){
        printf("Invalid money amount %d\n",amount);
        printf("Money amount must be greater than or equal to 0");
        return 0;
    }
//cost calculation
    do{
        cost=i*item_price;
    final_cost+=cost;
    i++;
    } while (i<num_items+1);
    if (final_cost<=amount){
        printf("Has enough money");
    }
    else{
        left=final_cost-amount;
            printf("Needs %d dollar(s) to complete the purchase",left);
        }
        return 0;
    }
