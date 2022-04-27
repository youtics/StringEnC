#include <stdio.h>
#include <stdlib.h>

#include <string.h>
#include<conio.h>

int compararPalabras(char palabra1[], char palabra2[]);
int validarNombre(char nombre[]);
int cargarCaracteres(char palabra[], int dim, int val);

int main()
{
    char palabra[30];
    char palabra2[] = "Aabriel";
    int val=0;

    val = cargarCaracteres(palabra, 30,val);
    printf("\n");
    for(int i=0; i<val;i++)
    {
        printf("| %c |", palabra[i]);
    }

    char caracter;
    puts("ingrese un caracter");
    caracter=getchar();
    putchar(caracter);


    char destino [25];
    char espacio [] = " ", apellido [] = "Garcia", carrera [] = "Programacion";

    strcat (destino, carrera);
    strcat (destino, espacio);
    strcat (destino, apellido);
    printf ("\n%s\n", destino);
    system("pause");

    char str1 [] = "Los representantes estan", str2 [] = "re", str3 [] = "repu" , *substr;
    substr = strstr(str1, str2);
    //Compara y muestra a partir de la subcadena encontrada.
    printf ("\n\tEl primer substring es: \"%s\"\n", substr);
    system("pause");
    substr = strstr(str1, str3);
    //Compara y si no encuentra la subcadena devuelve NULL.
    printf ("\n\tEl segundo substring es: \"%s\"\n", substr);
    system("pause");


    /*char palabra3[] = {'H','o','l','a',' ','M','u','n','d','o','\0'};
    char palabra4[] = {'H','o','l','a','\0','M','u','n','d','o','\0'};
    printf("Palabra %c", palabra4[0]);

    char palabraCopiada[2];

    strcpy(palabraCopiada, palabra);
    printf("Palabra copiada %s\n", palabraCopiada);

    int validos = strlen(palabraCopiada);
    printf("Longitud = %d", validos);*/

    //int res = compararPalabras(palabra, palabra2);

    /*printf("Ingrese un nombre\n");
    fflush(stdin);
    scanf("%s", &palabra);
    printf("%s", palabra);*/

    //printf("Ingrese un nombre\n");
    //gets(palabra);
    //printf("%s", palabra);



    //int res = validarNombre("Gabriel");
    return 0;
}

int cargarCaracteres(char *palabra, int dim, int val)
{
    char continuar='s';

    while(val<dim && continuar=='s')
    {
        puts("Ingrese un CARACTER");
        fflush(stdin);
        scanf("%c", &palabra[val]);
        val++;
        puts("Desea continuar... presione s");
        continuar = getch();
    }
    return val;
}


int compararPalabras(char palabra1[], char palabra2[])
{
    int resultado = strcmpi(palabra1, palabra2);
    printf("resultado %d", resultado);
    /*if (resultado == 0)
        printf("Iguales");
    else if(resultado > 0)
        printf("Iguales");*/
    return resultado;
}

int validarTel(char telefono[])
{
    int i=0;
    int flag = 0;
    int esNumero;

    while(i<strlen(telefono) && flag==0)
    {
        esNumero = isdigit(telefono[i]);
        if (esNumero!=0)
        {
            i++;
        }else
        {
            printf("Error\n");
            flag=1;
        }
    }
    return flag;
}

int validarNombre(char nombre[])
{
    int i=0;
    int flag = 0;
    int esLetra;

    while(i<strlen(nombre) && flag==0)
    {
        esLetra = isalpha(nombre[i]);

        if (esLetra!=0)
        {
            printf("| %c |", nombre[i]);
            i++;
        }else
        {
            printf("Error\n");
            flag=1;
        }
    }
    return flag;
}



