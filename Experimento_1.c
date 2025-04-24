#include "raylib.h"

int main(void)
{
    // Inicialización
    const int screenWidth = 800;
    const int screenHeight = 600;

    InitWindow(screenWidth, screenHeight, "Cara de Anime");
    SetTargetFPS(60);

    // Colores principales
    Color skinColor = (Color){ 255, 241, 230, 255 };     // Color de piel
    Color hairColor = (Color){ 245, 222, 179, 255 };     // Color de pelo rubio
    Color eyeOutlineColor = BLACK;                       // Contorno de ojos
    Color eyeColor = (Color){ 255, 105, 180, 255 };      // Color rosa de ojos
    Color blushColor = (Color){ 255, 182, 193, 200 };    // Rubor en las mejillas
    Color heartColor = WHITE;                            // Color de los corazones

    // Bucle principal
    while (!WindowShouldClose())    
    {
        // Dibujo
        BeginDrawing();
        
        ClearBackground(RAYWHITE);
        
        // Dibujar cara (forma básica)
        DrawEllipse(screenWidth/2, screenHeight/2, 150, 200, skinColor);
        
        // Dibujar pelo
        DrawEllipse(screenWidth/2, screenHeight/2 - 50, 180, 180, hairColor);
        
        // Dibujar flequillo
        DrawRectangle(screenWidth/2 - 150, screenHeight/2 - 170, 300, 100, hairColor);
        
        // Mechones laterales
        DrawEllipse(screenWidth/2 - 150, screenHeight/2, 40, 150, hairColor);
        DrawEllipse(screenWidth/2 + 150, screenHeight/2, 40, 150, hairColor);
        
        // Dibujar cara sobre pelo (para asegurar que se ve correctamente)
        DrawEllipse(screenWidth/2, screenHeight/2, 150, 200, skinColor);
        
        // Dibujar ojos (izquierdo)
        DrawEllipse(screenWidth/2 - 60, screenHeight/2 - 20, 40, 20, WHITE);
        DrawEllipse(screenWidth/2 - 60, screenHeight/2 - 20, 40, 20, eyeOutlineColor);
        DrawEllipse(screenWidth/2 - 60, screenHeight/2 - 20, 35, 15, WHITE);
        DrawEllipse(screenWidth/2 - 60, screenHeight/2 - 20, 25, 13, eyeColor);
        
        // Dibujar ojos (derecho)
        DrawEllipse(screenWidth/2 + 60, screenHeight/2 - 20, 40, 20, WHITE);
        DrawEllipse(screenWidth/2 + 60, screenHeight/2 - 20, 40, 20, eyeOutlineColor);
        DrawEllipse(screenWidth/2 + 60, screenHeight/2 - 20, 35, 15, WHITE);
        DrawEllipse(screenWidth/2 + 60, screenHeight/2 - 20, 25, 13, eyeColor);
        
        // Corazones en los ojos
        DrawPoly((Vector2){screenWidth/2 - 60, screenHeight/2 - 20}, 3, 10, 0, heartColor);
        DrawPoly((Vector2){screenWidth/2 + 60, screenHeight/2 - 20}, 3, 10, 0, heartColor);
        
        // Rubor en las mejillas
        DrawCircle(screenWidth/2 - 90, screenHeight/2 + 30, 35, blushColor);
        DrawCircle(screenWidth/2 + 90, screenHeight/2 + 30, 35, blushColor);
        
        // Dibujar boca (pequeña línea)
        DrawLine(screenWidth/2 - 20, screenHeight/2 + 60, screenWidth/2 + 20, screenHeight/2 + 60, eyeOutlineColor);
        
        EndDrawing();
    }

    // Cerrar ventana y liberar recursos
    CloseWindow();

    return 0;
}