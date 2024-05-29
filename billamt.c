//Program to Calculate Bill Amount

# include <stdio.h>
main()
{
    int p1,p2,billamt;
    p1=p2=billamt=0;

    //input
    printf("Enter the Price of Toothpaste: ");
    scanf("%d",&p1);

    printf("Enter the Price of ToothBrush: ");
    scanf("%d",&p2);

    //process
    billamt = p1 + p2;

    //output
    printf("Total Bill Amount is: %d ",billamt);

}

