#include <stdio.h>
void array ();
int main()
{
    int i, j, n = 5, choice;
    int a[] = {1, 2, 3, 4, 5};
    while (1)
    {
        printf("\n0-Exit\n1-No changes\n2-changes\n3-index 0\n4-index 1\n5-index 2\n6-index 3\n7-index 4\n");
        printf("Which index You want change :");
        scanf("%d,", &choice);
        switch (choice)
        {
        case 0:
            return 0;
            break;
        case 1:
            printf("\n");
            array();
            printf("\n");
            break;
        case 2:
            printf("\n");
            for (i = 0; i <= n - 1; i++)
            {
                printf("%d,", a[i]);
            }
            break;
        case 3:
            printf("\n");
            scanf("%d", &a[0]);
            printf("apply changes press 2 :\n");
            printf("No changes press 1:");
            printf("\n");
            break;
        case 4:
            printf("\n");
            scanf("%d", &a[1]);
            printf("apply changes press  2 :\n");
            printf("No changes press 1:");
            printf("\n");
            break;
        case 5:
            printf("\n");
            scanf("%d", &a[2]);
            printf("apply changes press  2 :\n");
            printf("No changes press 1:");
            printf("\n");
            break;
        case 6:
            printf("\n");
            scanf("%d", &a[3]);
            printf("apply changes press  2 :\n");
            printf("No changes press 1:");
            printf("\n");
            break;
        case 7:
            printf("\n");
            scanf("%d", &a[4]);
            printf("apply changes press  2 :\n");
            printf("No changes press 1:");
            printf("\n");
            break;
        default:
            break;
        }
    }
}
void array ()
{
    int a[] = {1, 2, 3, 4, 5}, n = 5, i;
    for (i = 0; i <= n - 1; i++)
    {
        printf("%d,", a[i]);
    }
}