//Total & Average Example

# include <stdio.h>
main()
{
    int m,p,c;
    float tot,avg;

    printf("Enter Maths Marks:");
    scanf("%d",&m);

    printf("Enter Physics Marks:");
    scanf("%d",&p);

    printf("Enter Chemistry Marks:");
    scanf("%d",&c);

    tot = m + p + c;
    avg = tot / 3;

    printf("\nTotal Marks: %.0f",tot);
    printf("\nAverage Marks: %.2f %%",avg);

}
