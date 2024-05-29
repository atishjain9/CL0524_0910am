/*Write a C Program to calculate amount for the inputted rate and quantity
    Note: rate should be in decimals
               qty should be in whole number
*/

# include <stdio.h>
main()
{
    //variable declaration
    int qty;
    float rate,amt;

    //variable initialization
    qty=rate=amt=0;

    //reading input
    printf("Heyy Enter Quantity Purchased...:");
    scanf("%d",&qty);

    printf("Heyy Enter Rate...:");
    scanf("%f",&rate);

    //process
    amt = rate * qty;

    //output

    printf("The Bill Amount is:%f",amt);

}
