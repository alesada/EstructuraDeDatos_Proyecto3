#ifndef AUXILIARYFUNCTIONS_H_INCLUDED
#define AUXILIARYFUNCTIONS_H_INCLUDED

#define true 1
#define false 0

typedef struct
{
    char flightCode[7];
    char airlineName[31];
    char planeModel[11];
    char origin[4];
    char destination[4];
    char state[31];
    struct node *next;
} node;

typedef node *pointer;

void insertHead(pointer *P, int num)
{
    pointer newNode = NULL;

    /*newNode = (node*) malloc(sizeof(node));

    newNode->num = num;
    newNode->sig = *P;

    *P = newNode;*/
}

void insertTail(pointer *P, int num)
{
    pointer newNode = NULL, aux = NULL;

    /*aux = *P;

    while(aux->sig != NULL)
        aux = aux->sig;

    newNode = (nodo*) malloc(sizeof(nodo));

    newNode->num = num;
    newNode->sig = NULL;

    aux->sig = newNode;*/
}

void removeHead(pointer *P)
{

    pointer ref = NULL;
/*
    ref = *P;

    *P = ref->sig;
    free(ref);*/
}

void removeTail(pointer *P)
{
    pointer ant = NULL, ref = NULL;
    /*ref = *P;

    if (ref->sig == NULL)
        *P = NULL;
    else {
        while(ref->sig != NULL) {
            ant = ref;
            ref = ref->sig;
        }
        ant->sig = NULL;
    }
    free(ref);*/
}

void printRecursive(pointer P)
{
    if(P != NULL)
    {
        //printf("\n  Direccion = %d | Numero = %d | Siguiente = %d |", P, P->num, P->sig);
        recorreRecursivo(P->next);
    }
}

void verifyRange(int *value, int max, int min)
{
    if(*value > max || *value < min)
    {
        do {
            printf("\tN%cmero no es valido, intente de nuevo: ", 163);
            scanf("%i", &*value);
        } while(*value > max || *value < min);
    }
}

void pauseAndWipe()
{
    printf("\n\n");
    system("pause");
    system("cls");
}

#endif