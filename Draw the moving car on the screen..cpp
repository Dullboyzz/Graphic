#include <graphics.h>
#include <conio.h>

int main() {
    int i, j = 0, gd = DETECT, gm;

    // Initialize graphics mode
    initgraph(&gd, &gm, "");

    // Display text
    settextstyle(DEFAULT_FONT, HORIZ_DIR, 2);
    outtextxy(25, 240, "Press any key to view the moving car");
    getch();

    // Set viewport
    setviewport(0, 0, 639, 440, 1);

    // Draw moving car
    for (i = 0; i <= 420; i += 10, j++) {
        // Draw car components
        rectangle(50 + i, 275, 150 + i, 400);
        rectangle(150 + i, 350, 200 + i, 400);
        circle(75 + i, 410, 10);
        circle(175 + i, 410, 10);
        
        // Change color
        setcolor(j);
        
        // Delay
        delay(100);

        // Clear viewport
        clearviewport();

        // Break loop if reached end position
        if (i == 420)
            break;
    }

    // Wait for user input before closing
    getch();

    // Close graphics mode
    closegraph();

    return 0;
}

