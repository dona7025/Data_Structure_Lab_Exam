#include<stdio.h>
    void main()
        {
            int i,x,AB,BC,AC,AD,AE,CD,DE,set1[5],set2[5],flag,j;
            printf(" 5 vetices of graph are:");
            printf("\n A,B,C,D,E");
            AB=1;
            BC=3;
            AC=5;
            AE=7;
            AD=10;
            CD=4;
            DE=2;
            printf("\nCost of Edges in increasing Order:");
            printf("\n cost of AB=%d",AB);
            printf("\n cost of DE=%d",DE);
            printf("\n cost of BC=%d",BC);
            printf("\n cost of CD=%d",CD);
            printf("\n cost of AC=%d",AC);
            printf("\n cost of AE=%d",AE);
            printf("\n cost of AD=%d",AD);


            printf("\n\n Shortest Path is:");
            printf("\n\t AB->BC->CD->DE");
            x= AB+BC+CD+DE;
            printf("\nTotal cost of the shortest path:%d \n\n",x);
//Disjoint Consept(Both the sets may not have common elements)
    printf("\nInput 5 elements of first set:");
    for(i=0;i<5;i++)
        {
            scanf("%d",&set1[i]);
        }
    printf("\nInput 5 elements of Second set:");
    for(i=0;i<5;i++)
        {
            scanf("%d",&set2[i]);
        }
        flag=1;
        for(i=0;i<5;i++)
        {
            for(j=0;j<5;j++)
            {
                if(set1[i]==set2[j])
                {
                    flag=0;
                }
            }

        }
        if(flag==0)
        {
            printf("\nThe Two sets are Not Disjoint");
        }
        else
        {
            printf("\nThe Two sets are Disjoint");
        }
    getch();
}




