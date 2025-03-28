#include <stdio.h>

int main() {
    int id, stock, cantidad, opcion,val,val2,val3;
    float precio, total_ganancias = 0;
    char nombre[30];

    // Registro del producto
    printf("Ingrese el ID del producto: ");
    scanf("%d", &id);
    
    printf("Ingrese el nombre del producto: ");
    fgets(nombre, 30, stdin);
    
    printf("Ingrese la cantidad inicial en stock: ");
    scanf("%d", &stock);
    
    printf("Ingrese el precio unitario del producto: ");
    scanf("%f", &precio);

    do {
        printf("\nMenú de Opciones:\n");
        printf("1. Vender producto\n");
        printf("2. Reabastecer producto\n");
        printf("3. Mostrar información del producto\n");
        printf("4. Mostrar total de ganancias\n");
        printf("5. Salir\n");
        printf("Seleccione una opción: ");
        scanf("%d", &opcion);

        switch(opcion) {
            case 1:
                while (cantidad<1|| val !=1 || cantidad>stock)
                {
                    printf("Ingrese la cantidad a vender: ");
                    val=scanf("%d", &cantidad);
                    if (cantidad<1)
                    {
                        printf("La cantidad no puede ser negativo ni cero, vuelva a ingresar\n");
                    }
                    if (val !=1)
                    {
                        printf("El valor ingresado es incorrecto, vuelva a ingresar\n");
                    }
                    
                    if (cantidad>stock)
                    {
                        printf("No se puede realizar la venta, no existe suficiente stock, vuelva a ingresar\n");
                    }
                    
                }
                
                
                
                break;

            case 2:
            while (cantidad<1|| val !=1 || cantidad>stock)
            {
                printf("Ingrese la cantidad a agregar al stock: ");
                scanf("%d", &cantidad);;
                if (cantidad<1)
                {
                    printf("La cantidad no puede ser negativo ni cero, vuelva a ingresar\n");
                }
                if (val !=1)
                {
                    printf("El valor ingresado es incorrecto, vuelva a ingresar\n");
                }
                
                if (cantidad>stock)
                {
                    printf("No se puede realizar la venta, no existe suficiente stock, vuelva a ingresar\n");
                }
                
            }
                
                
                break;

            case 3:
                printf("\nInformación del producto:\n");
                printf("ID: %d\n", id);
                printf("Nombre: %s", nombre);
                printf("Stock disponible: %d\n", stock);
                printf("Precio unitario: %.2f\n", precio);
                break;

            case 4:
                printf("Total de ganancias: $%.2f\n", total_ganancias);
                break;

            case 5:
                printf("Saliendo del programa...\n");
                break;

            default:
                printf("Opción inválida. Intente nuevamente.\n");
        }
    } while (opcion != 5);

    return 0;
}
