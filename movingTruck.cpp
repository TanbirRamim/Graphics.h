#include <graphics.h>
#include <conio.h>

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    int x = 0, y = 200;
    while (!kbhit())
    {
        // Clear the previous frame
        cleardevice();

        // Draw the bus or car
        rectangle(x, y, x + 100, y + 50);
        rectangle(x + 10, y - 20, x + 90, y);
        circle(x + 25, y + 70, 20);
        circle(x + 75, y + 70, 20);

        // Move the bus or car to the right
        x = x + 5;
        if (x > getmaxx())
        {
            x = 0;
        }

        // Update the screen
        delay(50);
    }

    getch();
    closegraph();
    return 0;
}
