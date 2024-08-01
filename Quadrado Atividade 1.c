        /*Quadrado-580776*/
#include "raylib.h"

#define LARGURAeAlTURA 20
#define inicio_x 300
#define inicio_y 300


int main(void)
{
    int posicao_X = inicio_x;
    int posicao_Y = inicio_y;

    InitWindow(600, 600, "Quadrado");



        while (!WindowShouldClose()){
		if(posicao_X<0||posicao_Y<0||posicao_Y+20>=600||posicao_X+20>=600){
			break;
		}

            if(IsKeyPressed(KEY_UP)){
               posicao_Y-=20;
               
            }
            if(IsKeyPressed(KEY_DOWN)){
               posicao_Y+=20;
               
            }
             if(IsKeyPressed(KEY_RIGHT)){
               posicao_X+=20;
              
            }
            if(IsKeyPressed(KEY_LEFT)){
               posicao_X-=20;
              }
           

                BeginDrawing();
            ClearBackground(RAYWHITE);
            DrawRectangle(posicao_X, posicao_Y, LARGURAeAlTURA, LARGURAeAlTURA, GREEN);
            EndDrawing();
        }


    return 0;
}


