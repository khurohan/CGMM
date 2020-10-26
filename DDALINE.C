#include<stdio.h>
#include<graphics.h>
#include<math.h>
#include<dos.h>

int graphicdriver=DETECT,graphicmode,x,y,x2,y2,dx,dy,i,steps;
float xincrement,yincrement,x1,y1;

void getcoordinates()
{ printf("Enter Coordinates of point A(x1,y1) :-\n");
  printf("\nEnter x1 : ");
  scanf("%f",&x1);
  printf("\nEnter y1 : ");
  scanf("%f",&y1);

  printf("\n\nEnter Coordinates of point B(x2,y2) :-\n");
  printf("\nEnter x2 : ");
  scanf("%d",&x2);
  printf("\nEnter y2 : ");
  scanf("%d",&y2);
}

void calculations()
{ dx=x2-x1;
  dy=y2-y1;

  if(abs(dx)>=abs(dy))
  { steps=abs(dx); }
  else
  { steps=abs(dy); }

  xincrement=(float)dx/steps;
  yincrement=(float)dy/steps;

  x=(int)x1;
  y=(int)y1;
}

void plot();
{ for(i=0;i<=steps;i++)
  { putpixel(x,y,WHITE);
    //printf("\nx = %d , y = %d",x,y);
    x1=x1+xincrement;
    x=(int)x1;
    y1=y1+yincrement;
    y=(int)y1;
    delay(23);
  }
}

void main()
{ clrscr();
  initgraph(&graphicdriver,&graphicmode,"C:\\TURBOC3\\BGI");
  getcoordinates();
  calculations();
  plot();
  getch();
  closegraph();
}
