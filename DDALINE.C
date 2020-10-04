#include<stdio.h>
#include<graphics.h>
#include<math.h>
#include<dos.h>

void main()
{ int gd=DETECT,gm,x,y,x2,y2,dx,dy,i,steps;
  float xin,yin,x1,y1;

  clrscr();

  printf("Enter Coordinates of point A(x1,y1) :-\n");
  printf("\nEnter x1 : ");
  scanf("%f",&x1);
  printf("\nEnter y1 : ");
  scanf("%f",&y1);

  printf("\n\nEnter Coordinates of point B(x2,y2) :-\n");
  printf("\nEnter x2 : ");
  scanf("%d",&x2);
  printf("\nEnter y2 : ");
  scanf("%d",&y2);

  dx=x2-x1;
  dy=y2-y1;

  //printf("\ndx = %d , dy = %d",dx,dy);
  //getch();

  if(abs(dx)>=abs(dy))
  { steps=abs(dx); }
  else
  { steps=abs(dy); }

  //printf("\nsteps = %d",steps);
  //getch();

  xin=(float)dx/steps;
  yin=(float)dy/steps;

  //printf("\nxin = %f , yin = %f",xin,yin);
  //getch();

  x=(int)x1;
  y=(int)y1;

  initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
  for(i=0;i<=steps;i++)
  { putpixel(x,y,WHITE);
    //printf("\nx = %d , y = %d",x,y);
    x1=x1+xin;
    x=(int)x1;
    y1=y1+yin;
    y=(int)y1;
    delay(23);
  }
  getch();
  closegraph();
}
