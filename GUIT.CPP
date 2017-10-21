#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
union REGS ip,op;

void show()
{
  ip.x.ax=1;
  int86(0x33,&ip,&op);
  ip.x.ax=7;
  ip.x.cx=150;
  ip.x.dx=400;
  int86(0x33,&ip,&op);
}

void detect(int *b,int *xp,int *yp)
{
  ip.x.ax=3;
  int86(0x33,&ip,&op);
  *b=op.x.bx;
  *xp=op.x.cx;
  *yp=op.x.dx;
}

void guitar()
{
  int gd=DETECT,gm;
  initgraph(&gd,&gm,"c:\\tc\\bgi");
  int y=getmaxy();
  int a=14,b=1;
  printf("Press ESC to exit\n\t %c\n\n",b);
  printf("%c   %c   %c   %c   %c\n",a,a,a,a,a);
  printf("   %c   %c   %c   %c  \n ",a,a,a,a);
  printf("%c   %c   %c   %c   %c\n",a,a,a,a,a);
  printf("\n\n\n\n\n\t\t\t\t\t\t\t\t\t  %c %c %c  \n ",b,b,b,b);
  setfillstyle(1,8);
  bar(185,0,365,y);
  setfillstyle(1,3);
  bar(185,0,365,100);
  setfillstyle(1,3);
  bar(185,200,365,300);
  setfillstyle(1,3);
  bar(185,400,365,500);
  setfillstyle(1,12);
  bar(0,300,185,y);
  setfillstyle(1,12);
  bar(365,300,600,y);
  setfillstyle(1,12);
  setcolor(12);
  fillellipse(535,350,100,90);
  setfillstyle(1,0);
  setcolor(0);
  fillellipse(411,285,45,30);
  setbkcolor(0);
  setfillstyle(1,0);
  setcolor(0);
  fillellipse(615,450,20,40);
  setfillstyle(1,0);
  setcolor(0);
  fillellipse(124,295,60,45);
  setfillstyle(1,0);
  setcolor(0);
  fillellipse(275,y,119,119);
  setcolor(6);
  line(200,0,200,y);   //1700
  line(225,0,225,y);   //1800
  line(250,0,250,y);   //1900
  line(275,0,275,y);   //2000
  line(300,0,300,y);   //2100
  line(325,0,325,y);   //2200
  line(350,0,350,y);   //2300
  setcolor(15);
  settextstyle(1,0,5);
  outtextxy(400,100,"GUITAR");
  outtextxy(380,150,"Simulator");
}

void tune(int j,int k)
{
  int i=10;
  sound(i+j+k);
  delay(50);
  nosound();
}

void play()
{
  int j,b,xp,yp,y;
  y=getmaxy();
  int k;
  detect(&b,&xp,&yp);
  if((b==1)&&(xp>195 && xp<205))
  {
    k=100;
    if(yp>0 && yp<100)
    {
      j=600;
      tune(j,k);
    }
    if(yp>100 && yp<200)
    {
      j=1000;
      tune(j,k);
    }
    if(yp>200 && yp<300)
    {
      j=1400;
      tune(j,k);
    }
    if(yp>300 && yp<400)
    {
      j=1800;
      tune(j,k);
    }
    if(yp>400 && yp<y)
    {
      j=2200;
      tune(j,k);
    }
  }
  if((b==1)&&(xp>220 && xp<230))
  {
    k=200;
    if(yp>0 && yp<100)
    {
      j=600;
      tune(j,k);
    }
    if(yp>100 && yp<200)
    {
      j=1000;
      tune(j,k);
    }
    if(yp>200 && yp<300)
    {
      j=1400;
      tune(j,k);
    }
    if(yp>300 && yp<400)
    {
      j=1800;
      tune(j,k);
    }
    if(yp>400 && yp<y)
    {
      j=2200;
      tune(j,k);
    }
  }
  if((b==1)&&(xp>245 && xp<255))
  {
    k=300;
    if(yp>0 && yp<100)
    {
      j=600;
      tune(j,k);
    }
    if(yp>100 && yp<200)
    {
      j=1000;
      tune(j,k);
    }
    if(yp>200 && yp<300)
    {
      j=1400;
      tune(j,k);
    }
    if(yp>300 && yp<400)
    {
      j=1800;
      tune(j,k);
    }
    if(yp>400 && yp<y)
    {
      j=2200;
      tune(j,k);
    }
  }
  if((b==1)&&(xp>270 && xp<280))
  {
    k=400;
    if(yp>0 && yp<100)
    {
      j=600;
      tune(j,k);
    }
    if(yp>100 && yp<200)
    {
      j=1000;
      tune(j,k);
    }
    if(yp>200 && yp<300)
    {
      j=1400;
      tune(j,k);
    }
    if(yp>300 && yp<400)
    {
      j=1800;
      tune(j,k);
    }
    if(yp>400 && yp<y)
    {
      j=2200;
      tune(j,k);
    }
  }
  if((b==1)&&(xp>295 && xp<305))
  {
    k=500;
    if(yp>0 && yp<100)
    {
      j=600;
      tune(j,k);
    }
    if(yp>100 && yp<200)
    {
      j=1000;
      tune(j,k);
    }
    if(yp>200 && yp<300)
    {
      j=1400;
      tune(j,k);
    }
    if(yp>300 && yp<400)
    {
      j=1800;
      tune(j,k);
    }
    if(yp>400 && yp<y)
    {
      j=2200;
      tune(j,k);
    }
  }
  if((b==1)&&(xp>320 && xp<330))
  {
    k=600;
    if(yp>0 && yp<100)
    {
      j=600;
      tune(j,k);
    }
    if(yp>100 && yp<200)
    {
      j=1000;
      tune(j,k);
    }
    if(yp>200 && yp<300)
    {
      j=1400;
      tune(j,k);
     }
    if(yp>300 && yp<400)
    {
      j=1800;
      tune(j,k);
    }
    if(yp>400 && yp<y)
    {
      j=2200;
      tune(j,k);
    }
  }
  if((b==1)&&(xp>345 &&xp<355))
  {
    k=700;
    if(yp>0 && yp<100)
    {
      j=600;
      tune(j,k);
    }
    if(yp>100 && yp<200)
    {
      j=1000;
      tune(j,k);
    }
    if(yp>200 && yp<300)
    {
      j=1400;
      tune(j,k);
    }
    if(yp>300 && yp<400)
    {
      j=1800;
      tune(j,k);
    }
    if(yp>400 && yp<y)
    {
      j=2200;
      tune(j,k);
    }
  }
}

void main()
{
  guitar();
  show();
  while(!kbhit())
  {
    play();
    delay(10);
  }
  getch();
}
