#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    int W; // width of the building.
    int H; // height of the building.
    scanf("%d%d", &W, &H);
    int N; // maximum number of turns before game over.
    scanf("%d", &N);
    int x0;
    int y0;
    scanf("%d%d", &x0, &y0);
    
    int old_x = 0;
    int new_x = W;
    int old_y = 0;
    int new_y = H;

    // game loop
    while (1) {
        char bombDir[4]; // the direction of the bombs from batman's current location (U, UR, R, DR, D, DL, L or UL)
        scanf("%s", bombDir);
        
        //Here is where we want to divide the board and start guessing in the halfpoint of the new cropped board
        // UPPER QUADRANTS - Y remains above H/2, X is dependent of W
        if( !strcmp(bombDir, "U")){
           new_y = y0;
           y0 = old_y + (new_y - old_y) / 2;
        }
        else if (!strcmp( bombDir , "UR")){
            new_y = y0;
            y0 = old_y + (new_y - old_y) / 2;

            old_x = x0;
            x0 = old_x + (new_x - old_x) / 2;
        }
        else if (!strcmp( bombDir , "R")){
            old_x = x0; 
            x0 = old_x + (new_x - old_x) / 2;
        }
        else if (!strcmp( bombDir , "UL")){
            new_y = y0;
            y0 = old_y + (new_y - old_y) / 2;
            
            new_x = x0;
            x0 = old_x + (new_x - old_x) / 2;
        }
        // UPPER QUADRANTS - Y remains below H/2, X is still dependent of W
        else if (!strcmp( bombDir , "DR")){
            old_y = y0;
            y0 = old_y + (new_y - old_y) / 2;

            old_x = x0;
            x0 = old_x + (new_x - old_x) / 2;
        }
        else if (!strcmp( bombDir , "D")){
            old_y = y0;
            y0 = old_y + (new_y - old_y) / 2;
        }
        else if (!strcmp( bombDir , "DL")){
            old_y = y0;
            y0 = old_y + (new_y - old_y) / 2;

            new_x = x0;
            x0 = old_x + (new_x - old_x) / 2;
        }
        else if (!strcmp( bombDir , "L")){
            new_x = x0; 
            x0 = old_x + (new_x - old_x) / 2;
        }

        
        // Write an action using printf(). DON'T FORGET THE TRAILING \n
        // To debug: fprintf(stderr, "Debug messages...\n");
        // the location of the next window Batman should jump to.
        printf("%d %d\n", x0, y0);
    }

    return 0;
}