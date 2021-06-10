#include <stdio.h>
void imprimir(int[], int, int);
void shell(int[], int);

int main()
{
    int cant_arreglo = 0, i;

    printf("\nDigite la cantidad de numeros que quiere ordenar :");
    scanf("%i", &cant_arreglo);

    int arrays[cant_arreglo];
    for (i = 0; i < cant_arreglo; i++)
    {
        printf("\nDigite el numero que va en la posicion numero %i :", i + 1);
        fflush(stdin);
        scanf("%i", &arrays[i]);
    }
    printf("Los numeros del vector desordenado son :\n");
    for (i = 0; i < cant_arreglo; i++)
    {
        printf("%i \t", arrays[i]);
    }

    shell(arrays, cant_arreglo);
    printf("\n Los numeros ordenados son :\n");
    imprimir(arrays,cant_arreglo,i);
    

    return 0;
}

void shell(int vector[], int espacio)
{int intermedio=(espacio/2);
int i=0,j=0,k=0,aux=0;

while (intermedio>0)
{for ( i = intermedio; i < espacio; i++)
{j=i-intermedio;
while (j>=0)
{k=j+intermedio;
if (vector[j]<=vector[k])
{j--;
}
else{

    aux=vector[j];
    vector[j]=vector[k];
    vector[k]=aux;
    j=j-intermedio;
}
}

}
intermedio=intermedio/2;
}







}
  
void imprimir (int a[],int b,int i){

for ( i = 0; i <b; i++)
{printf("%d \t",a[i]);
}


printf("probando");

}