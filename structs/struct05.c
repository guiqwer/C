#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct node
{
    int x;
    struct node *p;
} node;

void imprimir(node *);

// lista encadeada
int main()
{
    node n1, n2, n3, n4;

    n1.x = 10;
    n1.p = &n2;

    n2.x = 20;
    n2.p = &n3;

    n3.x = 30;
    n3.p = &n4;

    n4.x = 40;
    n4.p = NULL;

    imprimir(&n1);
}

void imprimir(node *p)
{
    node *i = p;

    for (node *i = p; i != NULL; i = i->p)
    {
        if (i->p == NULL)
        {
            printf("Último elemento da lista: %d\n", i->x);
        }
        else
        {
            printf("%d -> ", i->x);
        }
    }
}
