#include<stdio.h>
int main()
{
    int cca1, cca2, MT, lca1, lca2, lca3, total, cca1_c, cca2_c, MT_c, lca1_c, lca2_c, lca3_c;
    printf("Enter the marks of CCA1, CCA2, MT, LCA1, LCA2, LCA3: ");
    scanf("%d %d %d %d %d %d", &cca1, &cca2, &MT, &lca1, &lca2, &lca3);
    total = cca1 + cca2 + MT + lca1 + lca2 + lca3;
    cca1_c = (cca1 * 9) / 15;
    cca2_c = (cca2 * 9) / 15;
    MT_c = (MT * 24) / 30;
    lca1_c = (lca1 * 9) / 15;
    lca2_c = (lca2 * 9) / 15;
    lca3_c = (lca3 * 9) / 15;
    printf("Total marks = %d\n", total);
    if(total < 24)
    {
        printf("Fail\n");
    }
    else
    {
        printf("Pass\n");
    }
    return 0;
}