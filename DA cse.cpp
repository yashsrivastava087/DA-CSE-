#include <graphics.h>
#include <conio.h>

int main()
{
    int gdriver = DETECT, gmode;
    initgraph(&gdriver, &gmode, "");

    int a = 200, b = -190;
    int c = 200, d = -190;
    float x = 0.5, y = 0.5;
    float m = 0.5, n = 0.5;


    for (int i = 0; i <= 450; i++)
    {
    		
        setcolor(BROWN);
        setfillstyle(LTSLASH_FILL,BLUE);
        // Left cloud
        ellipse(40, 30, 60, 240, 10, 15);
        ellipse(65, 20, 345, 165, 20, 15);
        ellipse(105, 27, 340, 160, 20, 15);
        ellipse(109, 42, 230, 50, 20, 10);
        ellipse(66, 46, 163, 340, 31, 17);

        // Right cloud
        ellipse(450, 30, 60, 240, 10, 15);
        ellipse(475, 20, 345, 165, 20, 15);
        ellipse(512, 27, 340, 160, 20, 15);
        ellipse(518, 42, 230, 50, 20, 10);
        ellipse(476, 46, 163, 340, 31, 15);
        line(0, 175, 700, 175);
        floodfill(50, 50, BROWN);

        setcolor(BROWN);
        setfillstyle(SOLID_FILL,BROWN);
        // First triangle
        line(0, 175, 150, 100);
        line(150, 100, 300, 175);
        line(0, 175, 700, 175);
        floodfill(100, 150, BROWN);
        
         // Second triangle
        line(250, 151, 375, 100);
        line(375, 100, 425, 135);

        
        setcolor(BROWN);
        setfillstyle(SOLID_FILL,BROWN);
		// Third triangle
        line(350, 175, 500, 100);
        line(500, 100, 630, 175);
        line(0, 175, 700, 175);
        floodfill(500, 120, BROWN);
        
        // Fourth triangle
        line(200, 125, 255, 100);
        line(255, 100, 305, 127);

    
		setcolor(YELLOW);
        setfillstyle(SOLID_FILL, YELLOW);
        // Sun
        
        circle(310, 55, 35);
        floodfill(310, 55, YELLOW);
		
		if(150+i<400){
	
	
		// Bottom line of the mountain
        line(0, 175, 700, 175);
		
        // Road
        line(0, 401, 701, 401);
    	}
    	
    	else{
	
		setcolor(WHITE);
		setfillstyle(SOLID_FILL,BLUE);
		// Bottom line of the mountain
        line(0, 175, 700, 175);
		
        // Road
        line(0, 401, 701, 401);
        floodfill(0, 300, WHITE);
    	}
    	
        setcolor(WHITE);
		setfillstyle(SOLID_FILL,GREEN);
        line(0, 401, 701, 401);
		floodfill(0, 402, WHITE);
        // Cycle
        circle(40 + i, 377, 23);
        circle(150 + i, 377, 23);
        line(40 + i, 370, 100 + i, 370);
        line(40 + i, 370, 60 + i, 340);
        line(100 + i, 370, 120 + i, 340);
        line(120 + i, 340, 60 + i, 340);
        line(60 + i, 340, 60 + i, 335);
        line(55 + i, 335, 65 + i, 335);
        line(150 + i, 370, 100 + i, 320);
        line(100 + i, 320, 90 + i, 320);

        delay(20);
        cleardevice();
    }

    getch();
    closegraph();
	return 0;
}