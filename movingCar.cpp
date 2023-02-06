#include <graphics.h>
#include <conio.h>
#include <dos.h>

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // Draw the buildings
    rectangle(100, 50, 150, 300);
    rectangle(225, 75, 275, 325);
    rectangle(350, 100, 400, 350);
    setfillstyle(SOLID_FILL, BROWN);
    floodfill(125, 100, WHITE);
    floodfill(250, 100, WHITE);
    floodfill(375, 100, WHITE);

    // Draw the trees
    rectangle(75, 300, 85, 325);
    rectangle(65, 325, 95, 375);
    rectangle(375, 300, 385, 325);
    rectangle(365, 325, 395, 375);
    setfillstyle(SOLID_FILL, GREEN);
    floodfill(70, 340, WHITE);
    floodfill(380, 340, WHITE);

    // Draw the car
    rectangle(100, 400, 150, 450);
    rectangle(150, 425, 200, 450);
    circle(125, 450, 25);
    circle(175, 450, 25);
    setfillstyle(SOLID_FILL, RED);
    floodfill(127, 437, WHITE);
    floodfill(177, 437, WHITE);

    // Move the car
    for (int i = 0; i < 250; i++)
    {
        cleardevice();
        rectangle(100, 50, 150, 300);
        rectangle(225, 75, 275, 325);
        rectangle(350, 100, 400, 350);
        setfillstyle(SOLID_FILL, BROWN);
        floodfill(125 + i, 100, WHITE);
        floodfill(250 + i, 100, WHITE);
        floodfill(375 + i, 100, WHITE);
        rectangle(75, 300, 85, 325);
        rectangle(65, 325, 95, 375);
        rectangle(375, 300, 385, 325);
        rectangle(365, 325, 395, 375);
        setfillstyle(SOLID_FILL, GREEN);
        floodfill(70, 340, WHITE);
        floodfill(380, 340, WHITE);
        rectangle(100 + i, 400, 150 + i, 450);
        rectangle(150 + i, 425, 200 + i, 450);
        circle(125 + i, 450, 25);
        circle(175 + i, 450, 25);
        setfillstyle(SOLID_FILL, RED);
        floodfill(127 + i, 437, WHITE);
        floodfill(177 + i, 437, WHITE);
        delay(20);
    }

    getch();
    closegraph();
    return 0;
}
