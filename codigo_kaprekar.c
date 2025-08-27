
#include <stdio.h>

int main()
{
    int n, a, b, c, d, asc, desc, pasos = 0;
    printf("==================================================\n");
    printf("Ingrese un número de 4 dígitos: ");
    scanf("%d", &n);
    printf("\n");
    while (n != 6174 && n != 0) // El ciclo continúa hasta llegar a 6174
    {
        a = n / 1000;
        b = (n / 100) % 10;
        c = (n / 10) % 10;
        d = n % 10;
        // Ordenar descendente manualmente
        int x1 = a, x2 = b, x3 = c, x4 = d;
        // 6 comparaciones para 4 dígitos
        if (x1 < x2) // Si el primero es menor que el segundo
        {
            int t = x1;
            x1 = x2;
            x2 = t;
        }
        if (x1 < x3) // Si el primero es menor que el tercero
        {
            int t = x1;
            x1 = x3;
            x3 = t;
        }
        if (x1 < x4) // Si el primero es menor que el cuarto
        {
            int t = x1;
            x1 = x4;
            x4 = t;
        }
        if (x2 < x3) // Si el segundo es menor que el tercero
        {
            int t = x2;
            x2 = x3;
            x3 = t;
        }
        if (x2 < x4) // Si el segundo es menor que el cuarto
        {
            int t = x2;
            x2 = x4;
            x4 = t;
        }
        if (x3 < x4) // Si el tercero es menor que el cuarto
        {
            int t = x3;
            x3 = x4;
            x4 = t;
        }
        desc = x1 * 1000 + x2 * 100 + x3 * 10 + x4;
        // Ordenar ascendente manualmente
        x1 = a;
        x2 = b;
        x3 = c;
        x4 = d;
        if (x1 > x2) // Si el primero es mayor que el segundo
        {
            int t = x1;
            x1 = x2;
            x2 = t;
        }
        if (x1 > x3)    // Si el primero es mayor que el tercero
        {
            int t = x1;
            x1 = x3;
            x3 = t;
        }
        if (x1 > x4)    // Si el primero es mayor que el cuarto
        {
            int t = x1;
            x1 = x4;
            x4 = t;
        }
        if (x2 > x3)    // Si el segundo es mayor que el tercero
        {
            int t = x2;
            x2 = x3;
            x3 = t;
        }
        if (x2 > x4)    // Si el segundo es mayor que el cuarto
        {
            int t = x2;
            x2 = x4;
            x4 = t;
        }
        if (x3 > x4)    // Si el tercero es mayor que el cuarto
        {
            int t = x3;
            x3 = x4;
            x4 = t;
        }
        asc = x1 * 1000 + x2 * 100 + x3 * 10 + x4;  
        printf("Paso %d: %04d - %04d = %04d\n", pasos + 1, desc, asc, desc - asc);  
        n = desc - asc;
        pasos++;
    }
    printf("\nKaprekar: %d en %d pasos\n", n, pasos);   // Mostrar el número de Kaprekar y los pasos
    printf("==================================================\n");
    return 0;
}