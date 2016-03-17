#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<bios.h>
#include<process.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<fstream.h>
int gd=DETECT,gm,err;
int h,k,p=0;
float d,z;
int sc[5];
int a=0,b=0,c=0;
void buffer()
{ long float h=getmaxx()/2,i,x,y,p;
float k=getmaxy()/2;
char load[][80]={"conio.h   ","graphics.h   ","initgraph.h   ","c:\turboc3\bgi   ","initializing  ","circle_draw.h  ","line-12.h  ","game_init.h   ","gm_load.bit   ","stdio.exe   ","templated.tp   ","extreme X ","drivers.h   ","char.exe   "};
int j,t;
x=h-50;
y=k-50;
for(p=1;p<=2;p++)
{
for(i=0,t=0;i<=6;i+=0.5)
{
 circle(x+50+100*sin(i),y+20+100*cos(i),7+2*i);
 for(j=7+2*i;j>=0;j-=1)
 {
  setcolor(4);
  circle(x+50+100*sin(i),y+20+100*cos(i),j);

  settextstyle(6,0,5);
  outtextxy(h-100,k+100,load[j]);
  setcolor(0);
  delay(20);
  bar(0,k+110,2*h,k+200);
  setfillstyle(0,0);
  floodfill(260,k+150,0);


  setcolor(0);
  if(j%2==0)
  circle(x+50+100*sin(i-0.5),y+20+100*cos(i-0.5),j-3);

  setcolor(0);
  circle(x+50+100*sin(i-1),y+20+100*cos(i-1),j-3);

 }

  if(i==6)
  {
   for(j=7+2*i;j>=0;j-=1)
   {
    if(j%2==0)
    {
     setcolor(0);
     circle(x+50+100*sin(5.5),y+20+100*cos(5.5),j);
    }
   setcolor(0);
   circle(x+50+100*sin(6),y+20+100*cos(6),j-1);
   }
  }
 }
}
}
void border()
{
int h,k,i,j;
float x;
h=getmaxx()/2;
k=getmaxy()/2;
for(i=0,j=0,x=1;i<2*k,j<2*h;i++,j++)
{
if(i%25==0)
if(i%2==0)
setfillstyle(6,15);
else setfillstyle(6,4);
bar((2*h)-20,2*k-i,2*h,2*k);
bar((2*h)-20-j,2*k-25,2*h,2*k);
bar(0,0,j,25);
bar(0,0,20,i);
delay(3);
x=x*-1;
}
}
void mainpage()
{ border();
  for(int i=0;i<32;i++)
 {
  delay(200);
  settextstyle(3,0,10);
  setcolor(i);
  outtextxy(70,50,"SPACE");
  outtextxy(120,240,"JORDAN");
  settextstyle(3,0,2);
  outtextxy(560,270,"TM");
 }
}
void first_page()
{
int h,a=0,s,t,b=1,c=2,u,v,m,n,x,i,j,k;
x=1;
char tic[][3]={"P","A","J"};
char nam[][6]={"arth","kshay","ahnvi"};
randomize();
for(i=0;i<=80;i++)
{
setcolor(i+1);
h=random(getmaxx());
k=random(getmaxy());
s=random(getmaxx());
t=random(getmaxy());
u=random(getmaxx());
v=random(getmaxy());
m=random(getmaxx());
n=random(getmaxy());
setfillstyle(15,0);
settextstyle(1,0,7);
outtextxy(h,k,tic[a]);
delay(15);
outtextxy(s,t,tic[b]);
delay(15);
outtextxy(u,v,tic[c]);
delay(15);
a=a+x;
b=b-x;
x=x*-1;
delay(50);
}
///////////////////////////////////////////////////////
if(i==80)
{setcolor(15);}
for(j=0;j<=getmaxx();j++)
{
setfillstyle(1,12);
bar(0,getmaxy()/2-25,j,getmaxy()/2+30);
delay(6);
}
settextstyle(5,0,6);
setfillstyle(0,2);
//////////////////
outtextxy(getmaxx()/2-130,getmaxy()/2-50,"P");
outtextxy(getmaxx()/2-100,getmaxy()/2-50,nam[0]);
delay(1500);
setfillstyle(1,12);
bar(getmaxx()/2-140,getmaxy()/2-25,getmaxx(),getmaxy()/2+30);
outtextxy(getmaxx()/2-130,getmaxy()/2-50,"P");
///////////////////
outtextxy(getmaxx()/2-100,getmaxy()/2-50,"A");
outtextxy(getmaxx()/2-70,getmaxy()/2-50,nam[1]);
delay(1500);
setfillstyle(1,12);
bar(getmaxx()/2-90,getmaxy()/2-25,getmaxx(),getmaxy()/2+30);
outtextxy(getmaxx()/2-100,getmaxy()/2-50,"A");
/////////////////
outtextxy(getmaxx()/2-70,getmaxy()/2-50,"J");
outtextxy(getmaxx()/2-40,getmaxy()/2-50,nam[2]);
delay(1500);
setfillstyle(1,12);
bar(getmaxx()/2-40,getmaxy()/2-25,getmaxx(),getmaxy()/2+30);
outtextxy(getmaxx()/2-70,getmaxy()/2-50,"J");
/////////////////

outtextxy(getmaxx()/2-30,getmaxy()/2-50,"animations");
settextstyle(1,0,1);
outtextxy(getmaxx()/2+205,getmaxy()/2-25,"TM");
delay(1000);
}
void basket()
{ for(int i=0;i<5;i++)
  {
  line(h/10+550+i,k/6,h/10+550+i,3*k/5);
   line(h/10+550,k/6+20+i,h/10+530,k/6+20+i);

   ellipse(h/10+515,k/6+22,1,361,15+i,10+i);
  }
  for(i=0;i<15;i++)
  {
   setcolor(15);
   line(h/10+495+i*2,k/6+22,h/10+500+i*2,k/6+65);
    line(h/10+535-i*2,k/6+22,h/10+530-i*2,k/6+65);
  }

}
void up_man()
{ int h=d+40;
int k=getmaxy()/2-50;
rectangle(h,k,h+12,k+25);
ellipse(h+6,k-10,0,360,7,11);      //Face
circle(h+9,k-11,1);                //Eyes
arc(h+6,k-16,-10,180,8);           //Cap
line(h-1,k-16,h+13,k-16);          //Cap line
line(h+7,k-6,h+13,k-6);            //mouth

for(int i=0;i<5;i++)               // Hands
{line(h+3+i,k+3,h+8+i,k+15);
line(h+9,k+15+i,h+18,k+10+i);
line(h+12,k+12-i,h+18-i,k+4-i);
}
circle(h+16,k,3);                 //Fists
circle(h+19,k+11,3);


}
//Standing Position 1//////////////////////////////////////////////////////////////////////////
void stand()
{ int h=d+40;
int k=getmaxy()/2-50;
for(int i=0;i<=8;i++)
{line(h+3+i,k+25,h+11+i,k+40);//front leg 1
 line(h+i,k+25,h-3+i,k+40);  //back leg 1
 line(h-3+i,k+40,h-12+i,k+55);//back leg 2
 line(h-22+16+i,k+55+i,h-30+18+i,k+55+i);//shoe 2
 line(h+11+i,k+40,h+11+i,k+55);//front leg 2
 line(h+11,k+54+3*i/4,h+23,k+54+3*i/4);
}

}
void  background()
{
line(0,3.7*k/5,h,3.7*k/5);       //Horizontal lines
line(0,2.4*k/5,h,2.4*k/5);
line(0,1.4*k/5,h/10,1.4*k/5);
line(h/10,k/10,h/10+70,k/10);
line(h/10+70,k/4,h/10+150,k/4);
line(h/10+150,k/9,h/10+220,k/9);
line(h/10+220,k/7,h/10+320,k/7);
line(h/10+320,k/11,h/10+410,k/11);
line(h/10+410,k/5,h/10+500,k/5);
line(h/10+500,k/7,h/10+580,k/7);

line(h/10,k/10,h/10,2.4*k/5);         //Vertical lines
line(h/10+70,k/10,h/10+70,2.4*k/5);
line(h/10+150,k/9,h/10+150,2.4*k/5);
line(h/10+220,k/9,h/10+220,2.4*k/5);
line(h/10+320,k/11,h/10+320,2.4*k/5);
line(h/10+410,k/11,h/10+410,2.4*k/5);
line(h/10+500,k/7,h/10+500,2.4*k/5);


for(int i=0;i<5;i++)        //Tree 1
{
line(h/10+20+i,k/3,h/10+20+i,2.4*k/5);

}
for(int r=0;r<15;r++)
{circle(h/10+30,k/3-20,r);
 circle(h/10+20,k/3-10,r);
 circle(h/10+10,k/3,r);
 circle(h/10+10,k/3-20,r);
 circle(h/10+30,k/3,r);
 circle(h/10+20,k/3-40,r);
}


for(i=0;i<5;i++)        //Tree 2
{
line(h/10+170+i,k/3,h/10+170+i,2.4*k/5);

}
for(r=0;r<15;r++)
{circle(h/10+180,k/3,r);
 circle(h/10+170,k/3+10,r);
 circle(h/10+160,k/3+20,r);
 circle(h/10+160,k/3,r);
 circle(h/10+180,k/3+20,r);
 circle(h/10+170,k/3-20,r);
}

for(i=0;i<5;i++)        //Tree 3
{
line(h/10+350+i,k/3,h/10+350+i,2.4*k/5);

}
for(r=0;r<15;r++)
{circle(h/10+360,k/3-20,r);
 circle(h/10+350,k/3-10,r);
 circle(h/10+340,k/3,r);
 circle(h/10+340,k/3-20,r);
 circle(h/10+360,k/3,r);
 circle(h/10+350,k/3-40,r);
}

}
void ufo_move()
{ delay(100);
float i,o,z;
floodfill(h,k,15);


for(z=0;z<400;z++)
 {
   line(0,2*k/3,h,2*k/3);

   for(int i=0;i<2;i++)
  {
   circle(h/2-100,2*k/3-100,i);
   circle(h/2-80,2*k/3-90,i);
   circle(h/2-200,2*k/3-150,i);
   circle(h/2+120,2*k/3-180,i);
   circle(h/2+150,2*k/3-50,i);
   circle(h/2+200,2*k/3-70,i);
   circle(h/2+40,2*k/3-60,i);
   circle(h/2-40,2*k/3-100,i);
   circle(h/2-50,2*k/3-90,i);

   circle(h/2-200,k-400,i);
   circle(h/2+200,k-350,i);
   circle(h/2-250,k-450,i);
   circle(h/2-150,k-320,i);
   circle(h/2+150,k-370,i);
   circle(h/2+250,k-190,i);
   circle(h/2-250,k-170,i);
   circle(h/2-180,k-350,i);
   circle(h/2-220,k-410,i);
   circle(h/2+150,k-250,i);
   circle(h/2+250,k-270,i);
   circle(h/2-280,k-210,i);
   circle(h/2+280,k-100,i);

   circle(h/2-80,k-400,i);
   circle(h/2-50,k-450,i);
   circle(h/2-89,k-400,i);
   circle(h/2-120,k-480,i);
   circle(h/2-135,k-490,i);
   circle(h/2-150,k-440,i);
   circle(h/2-250,k-420,i);
   circle(h/2-200,k-440,i);
   circle(h/2-300,k-340,i);
   circle(h/2-280,k-330,i);
   circle(h/2-160,k-360,i);
   circle(h/2-15,k-380,i);
   circle(h/2,k-261,i);
   circle(h/2-15,k-380,i);
   circle(h/2-15,k-380,i);
   circle(h/2-15,k-380,i);
  }
 for(i=0;i<=10;i++)
 {
  ellipse(h/7+550-z,k/7+100,0,360,65-i,45-i);
 }
 line(h/7+515-z,k/7+100,h/7+585-z,k/7+100);
 for(i=0;i<=100;i++)
 {
 ellipse(h/7+550-z,k/7+100,0,180,35-i,60-i);
 }
 setcolor(15);
 line(h/7+540-z,k/7+140,h/7+480-z,k/7+400);
 for(i=1;i<=25;i++)
 {
  line(h/7+540+i-z,k/7+140,h/7+480+(5.2*i)-z,k/7+400);
 }
 line(h/7+560-z,k/7+140,h/7+615-z,k/7+400);
 delay(1);
 cleardevice();

 }

 for(int w=0;w<2;w++)
  {
   circle(h/2-100,2*k/3-100,w);
   circle(h/2-80,2*k/3-90,w);
   circle(h/2-200,2*k/3-150,w);
   circle(h/2+120,2*k/3-180,w);
   circle(h/2+150,2*k/3-50,w);
   circle(h/2+200,2*k/3-70,w);
   circle(h/2+40,2*k/3-60,w);
   circle(h/2-40,2*k/3-100,w);
   circle(h/2-50,2*k/3-90,w);

   circle(h/2-200,k-400,w);
   circle(h/2+200,k-350,w);
   circle(h/2-250,k-450,w);
   circle(h/2-150,k-320,w);
   circle(h/2+150,k-370,w);
   circle(h/2+250,k-190,w);
   circle(h/2-250,k-170,w);
   circle(h/2-180,k-350,w);
   circle(h/2-220,k-410,w);
   circle(h/2+150,k-250,w);
   circle(h/2+250,k-270,w);
   circle(h/2-280,k-210,w);
   circle(h/2+280,k-100,w);

   circle(h/2-80,k-400,w);
   circle(h/2-50,k-450,w);
   circle(h/2-89,k-400,w);
   circle(h/2-120,k-480,w);
   circle(h/2-135,k-490,w);
   circle(h/2-150,k-440,w);
   circle(h/2-250,k-420,w);
   circle(h/2-200,k-440,w);
   circle(h/2-300,k-340,w);
   circle(h/2-280,k-330,w);
   circle(h/2-160,k-360,w);
   circle(h/2-15,k-380,w);
   circle(h/2,k-261,w);
   circle(h/2-15,k-380,w);
   circle(h/2-15,k-380,w);
   circle(h/2-15,k-380,w);


  }
 line(0,2*k/3,h,2*k/3);
 for(i=0;i<=10;i++)
 {
  ellipse(h/7+550-z,k/7+100,0,360,65-i,45-i);
 }
 line(h/7+515-z,k/7+100,h/7+585-z,k/7+100);
 for(i=0;i<=100;i++)
 {
 ellipse(h/7+550-z,k/7+100,0,180,35-i,60-i);
 }
 setcolor(15);

 settextstyle(1,0,2);
 outtextxy(0,400,"UFO:We are searching for the best basketball players on Earth!!");
 delay(2500);
 ///////////////////////reverse direction/////////////////////////////////
 for(z=0;z<400;z++)
 {for(int i=0;i<2;i++)
  {
   circle(h/2-100,2*k/3-100,i);
   circle(h/2-80,2*k/3-90,i);
   circle(h/2-200,2*k/3-150,i);
   circle(h/2+120,2*k/3-180,i);
   circle(h/2+150,2*k/3-50,i);
   circle(h/2+200,2*k/3-70,i);
   circle(h/2+40,2*k/3-60,i);
   circle(h/2-40,2*k/3-100,i);
   circle(h/2-50,2*k/3-90,i);

   circle(h/2-200,k-400,i);
   circle(h/2+200,k-350,i);
   circle(h/2-250,k-450,i);
   circle(h/2-150,k-320,i);
   circle(h/2+150,k-370,i);
   circle(h/2+250,k-190,i);
   circle(h/2-250,k-170,i);
   circle(h/2-180,k-350,i);
   circle(h/2-220,k-410,i);
   circle(h/2+150,k-250,i);
   circle(h/2+250,k-270,i);
   circle(h/2-280,k-210,i);
   circle(h/2+280,k-100,i);

   circle(h/2-80,k-400,i);
   circle(h/2-50,k-450,i);
   circle(h/2-89,k-400,i);
   circle(h/2-120,k-480,i);
   circle(h/2-135,k-490,i);
   circle(h/2-150,k-440,i);
   circle(h/2-250,k-420,i);
   circle(h/2-200,k-440,i);
   circle(h/2-300,k-340,i);
   circle(h/2-280,k-330,i);
   circle(h/2-160,k-360,i);
   circle(h/2-15,k-380,i);
   circle(h/2,k-261,i);
   circle(h/2-15,k-380,i);
   circle(h/2-15,k-380,i);
   circle(h/2-15,k-380,i);
   }
   line(0,2*k/3,h,2*k/3);
 for(i=0;i<=10;i++)
 {
  ellipse(h/7+550-400+z,k/7+100,0,360,65-i,45-i);
 }
 line(h/7+515-400+z,k/7+100,h/7+585-400+z,k/7+100);
 for(i=0;i<=100;i++)
 {
 ellipse(h/7+550-400+z,k/7+100,0,180,35-i,60-i);
 }
 setcolor(15);
 line(h/7+540-400+z,k/7+140,h/7+480-400+z,k/7+400);
 for(i=1;i<=25;i++)
 {
  line(h/7+540+i-400+z,k/7+140,h/7+480+(5.2*i)-400+z,k/7+400);
 }
 line(h/7+560-400+z,k/7+140,h/7+615-400+z,k/7+400);
 delay(1);
 cleardevice();
 }
}
void bkgroundspace()
{
  int k=getmaxy()-150;
   arc(h/2-250,2*k/3+400,46,150,400);
  line(0,k,h,k);
  floodfill(h/2,k+43,BLACK);

  setcolor(WHITE);
  //stars
  for(int i=0;i<2;i++)
  {
   circle(h/2-100,2*k/3-100,i);
   circle(h/2-80,2*k/3-90,i);
   circle(h/2-200,2*k/3-150,i);
   circle(h/2+120,2*k/3-180,i);
   circle(h/2+150,2*k/3-50,i);
   circle(h/2+200,2*k/3-70,i);
   circle(h/2+40,2*k/3-60,i);
   circle(h/2-40,2*k/3-100,i);
   circle(h/2-50,2*k/3-90,i);

   circle(h/2-200,k-400,i);
   circle(h/2+200,k-350,i);
   circle(h/2-250,k-450,i);
   circle(h/2-150,k-320,i);
   circle(h/2+150,k-370,i);
   circle(h/2+250,k-190,i);
   circle(h/2-250,k-170,i);
   circle(h/2-180,k-350,i);
   circle(h/2-220,k-410,i);
   circle(h/2+150,k-250,i);
   circle(h/2+250,k-270,i);
   circle(h/2-280,k-210,i);
   circle(h/2+280,k-100,i);

   circle(h/2-80,k-400,i);
   circle(h/2-50,k-450,i);
   circle(h/2-89,k-400,i);
   circle(h/2-120,k-480,i);
   circle(h/2-135,k-490,i);
   circle(h/2-150,k-440,i);
   circle(h/2-250,k-420,i);
   circle(h/2-200,k-440,i);
   circle(h/2-300,k-340,i);
   circle(h/2-280,k-330,i);
   circle(h/2-160,k-360,i);
   circle(h/2-15,k-380,i);
   circle(h/2,k-261,i);
   circle(h/2-15,k-380,i);
   circle(h/2-15,k-380,i);
   circle(h/2-15,k-380,i);

   circle(h-15,k-450,i);
   circle(h-85,k-440,i);
   circle(h-55,k-30,i);
   circle(h-5,k-20,i);
   circle(5,k-380,i);
   circle(h-105,k-10,i);
   circle(h-125,k-10,i);
   circle(h-195,k-80,i);
   circle(h-215,k-380,i);
   circle(h-205,k-390,i);
   circle(h-15,k-90,i);
   circle(h-95,k-100,i);
   circle(h-210,k-60,i);
   circle(h-205,k-380,i);
   circle(h-155,k-38,i);

  }
line(0,k-50,80,k-50);
line(0,k-40,80,k-40);
line(80,k-50,80,k-40);
circle(10,k-60,10);
circle(30,k-60,10);
circle(50,k-60,10);
circle(70,k-60,10);
line(75,k-40,75,k);
}

void story()
{ background();
  basket();
  up_man();
  stand();
  settextstyle(1,0,3);
  outtextxy(150,400,"Man : Wow! I play like Jordan.!! ");
  delay(1000);
  ufo_move();

}
void part2()
{background();
 basket();
 int k=getmaxy()/2-50;
 int h=getmaxx()/2;

rectangle(h,k,h+12,k+25);
ellipse(h+6,k-10,0,360,7,11);      //Face
circle(h+9,k-11,1);                //Eyes
arc(h+6,k-16,-10,180,8);           //Cap
line(h-1,k-16,h+13,k-16);          //Cap line
line(h+7,k-6,h+13,k-6);            //mouth
for(int i=0;i<5;i++)               // Hands
{line(h+3+i,k+3,h+8+i,k+15);
line(h+9,k+15+i,h+18,k+10+i);
line(h+12,k+12-i,h+18-i,k+4-i);
}
circle(h+16,k,3);                 //Fists
circle(h+19,k+11,3);

for(i=0;i<=8;i++)
{line(h+3+i,k+25,h+11+i,k+40);//front leg 1
 line(h+i,k+25,h-3+i,k+40);  //back leg 1
 line(h-3+i,k+40,h-12+i,k+55);//back leg 2
 line(h-22+16+i,k+55+i,h-30+18+i,k+55+i);//shoe 2
 line(h+11+i,k+40,h+11+i,k+55);//front leg 2
 line(h+11,k+54+3*i/4,h+23,k+54+3*i/4);
}  float o;
 for(i=0;i<=10;i++)
 {
  ellipse(h/7+270,k/7+50,0,360,65-i,45-i);
 }
 settextstyle(1,0,3);
 for(i=0;i<=100;i++)
 {
 ellipse(h/7+270,k/7+50,0,180,35-i,60-i);
 }
 setcolor(15);
 setcolor(WHITE);
  for(i=0;i<=2;i++)
  {outtextxy(80,400,"UFO: You think you are Jordan?");
  delay(1000);
  if(i>=1)
  setcolor(BLACK);
  }
  setcolor(WHITE);
  for(i=0;i<=2;i++)
  {outtextxy(80,400,"Man: No, I am better.");
  delay(1000);
    if(i>=1)
  setcolor(BLACK);
  }
  setcolor(WHITE);
  for(i=0;i<=2;i++)
  {outtextxy(80,400,"UFO: Prove it.");
  delay(1000);
   if(i>=1)
  setcolor(BLACK);
  }
  setcolor(WHITE);
  for(i=0;i<=2;i++)
  {outtextxy(50,400,"UFO: Come with me.I will take you to my planet.");
  delay(1000);
   if(i>=1)
  setcolor(BLACK);
  }
  setcolor(WHITE);
  for(i=0;i<=2;i++)
  {outtextxy(0,400,"UFO: Lets see if you got what it takes to be SPACE JORDAN!!!");
  delay(1000);;
   if(i>=1)
  setcolor(BLACK);
  }
  setcolor(WHITE);
  for(i=0;i<=2;i++)
  {outtextxy(80,400,"Man: Lets go then...");;
  delay(1000);;
   if(i>=1)
  setcolor(BLACK);
  }
  delay(100);
 float z;
  line(h/7+515-z,k/7+100,h/7+585-z,k/7+100);
 for(i=0;i<=100;i++)
 {
 ellipse(h/7+550-z,k/7+100,0,180,35-i,60-i);
 }
 setcolor(15);
 line(h/7+540-z,k/7+140,h/7+480-z,k/7+400);
 for(i=1;i<=25;i++)
 {
  line(h/7+540+i-z,k/7+140,h/7+480+(5.2*i)-z,k/7+400);
 }
 line(h/7+560-z,k/7+140,h/7+615-z,k/7+400);
 delay(1000);

}
void ballthrow(int ang,int vel)
{int cball[1000];
 randomize();
 int x,y=2.8*k/5-70;
 float t=0;
 float o;
 o=22.0/7*ang/180;
 d=250;
 x=d+65;
 circle(d+65,2.8*k/5-70,10); //B@LL
 getimage(d-5,2.8*k/5-60,d+15,2.8*k/5-80,cball);
 do
 {

  background();
  basket();
 up_man();
 stand();

   delay(80);
    cleardevice();
   x+=vel*cos(o)*t;
   y-=(vel*sin(o)*t)- (0.5*11.1*t*t);
   circle(x,y,10);
   t+=0.1;

  }while(x<=(h/10+500));

}
void planet()
{
  circle(h/2-30,k/2+50,100);
  setfillstyle(LTBKSLASH_FILL,15);
  floodfill(h/2-30,k/2+50,15);

  //stars
  for(int i=0;i<2;i++)
  {
   circle(h/2-100,2*k/3-100,i);
   circle(h/2-140,2*k/3-90,i);
   circle(h/2-200,2*k/3-150,i);
   circle(h/2+120,2*k/3-180,i);
   circle(h/2+150,2*k/3-50,i);
   circle(h/2+200,2*k/3-70,i);
   circle(h/2+140,2*k/3-60,i);
   circle(h/2-170,2*k/3+100,i);
   circle(h/2-150,2*k/3+90,i);

   circle(h/2-200,k-400,i);
   circle(h/2+200,k-350,i);
   circle(h/2-250,k-450,i);
   circle(h/2-150,k-320,i);
   circle(h/2+150,k-370,i);
   circle(h/2+250,k-190,i);
   circle(h/2-250,k-170,i);
   circle(h/2-180,k-350,i);
   circle(h/2-220,k-410,i);
   circle(h/2+150,k-250,i);
   circle(h/2+250,k-270,i);
   circle(h/2-280,k-210,i);
   circle(h/2+280,k-100,i);

   circle(h/2-80,k-400,i);
   circle(h/2-50,k-450,i);
   circle(h/2-89,k-400,i);
   circle(h/2-120,k-480,i);
   circle(h/2-135,k-490,i);
   circle(h/2-150,k-440,i);
   circle(h/2-250,k-420,i);
   circle(h/2-200,k-440,i);
   circle(h/2-300,k-340,i);
   circle(h/2-280,k-330,i);
   circle(h/2-160,k-360,i);
   circle(h/2-190,k-10,i);
   circle(h/2+70,k/2-20,i);
   circle(h/2+100,k/2-40,i);
   circle(h/2,k/2-180,i);
   circle(h/2,k/2-200,i);
   circle(h/2-30,k/2-150,i);
   circle(h/2-50,k/2-110,i);
   circle(h/2+30,k/2-90,i);
   circle(h/2+50,k/2-100,i);
   circle(h/2+40,k/2-120,i);
   circle(h/2,k/2-80,i);
   circle(h/2-5,k/2-75,i);
   circle(h/2+39,k/2-99,i);
   circle(h/2+56,k/2-56,i);
   circle(h/2,k/2-45,i);
   circle(h/2-45,k/2-77,i);
   circle(h/2,k/2-69,i);
   circle(h/2+70,k/2,i);
   circle(h/2+76,k/2+46,i);

   circle(h-85,k-440,i);
   circle(h-55,k-30,i);
   circle(5,k-380,i);
   circle(h-105,k-10,i);
   circle(h-125,k-10,i);
   circle(h-195,k-80,i);
   circle(h-215,k-380,i);
   circle(h-205,k-390,i);
   circle(h-95,k-100,i);
   circle(h-210,k-60,i);
   circle(h-205,k-380,i);
   circle(h-155,k-38,i);

  }
}
void ufo()
{
float i,k=getmaxy()-700,o,z;
for(z=0;z<570-5*h/14;z+=4)
 {
 cleardevice();
 planet();
 for(i=0;i<=10;i++)
 {
  ellipse(h/7+550-z,k/7+100,0,360,65-i,45-i);
 }
 line(h/7+515-z,k/7+100,h/7+585-z,k/7+100);
 for(i=0;i<=100;i++)
 {
 ellipse(h/7+550-z,k/7+100,0,180,35-i,60-i);
 }
 setcolor(15);
 line(h/7+540-z,k/7+140,h/7+480-z,k/7+400);
 for(i=1;i<=25;i++)
 {
  line(h/7+540+i-z,k/7+140,h/7+480+(5.2*i)-z,k/7+400);
 }
 line(h/7+560-z,k/7+140,h/7+615-z,k/7+400);
 delay(30);

 }
}
void ballthrow1(int ang,int vel)
{int cball[1000];
 randomize();
 int x,y=2.8*k/5-70;
 float t=0;
 float o;
 o=22.0/7*ang/180;
 d=100;
 x=d+5;
 circle(d+5,2.8*k/5-70,10); //B@LL
 getimage(d-5,2.8*k/5-60,d+15,2.8*k/5-80,cball);
 do
 {

  bkgroundspace();
  basket();
  up_man();
  stand();


   delay(70);
    cleardevice();
   x+=vel*cos(o)*t;
   y-=(vel*sin(o)*t)- (0.5*11.1*t*t);
   circle(x,y,10);
   t+=0.1;

  }while(x<=(h/10+500));

}
void up_man1()
{
void bkgroundspace();
void stand();
void basket();
d=100;
int h=d-21;
for(int k=0;k<getmaxy()/2-50;k+=10)
{
delay(120);
cleardevice();
bkgroundspace();
basket();


rectangle(h,k,h+12,k+25);
ellipse(h+6,k-10,0,360,7,11);      //Face
circle(h+9,k-11,1);                //Eyes
arc(h+6,k-16,-10,180,8);           //Cap
line(h-1,k-16,h+13,k-16);          //Cap line
line(h+7,k-6,h+13,k-6);            //mouth

for(int i=0;i<5;i++)               // Hands
{line(h+3+i,k+3,h+8+i,k+15);
line(h+9,k+15+i,h+18,k+10+i);
line(h+12,k+12-i,h+18-i,k+4-i);
}
circle(h+16,k,3);                 //Fists
circle(h+19,k+11,3);
for(int i1=0;i1<=8;i1++)
{line(h+3+i1,k+25,h+11+i1,k+40);//front leg 1
 line(h+i1,k+25,h-3+i1,k+40);  //back leg 1
 line(h-3+i1,k+40,h-12+i1,k+55);//back leg 2
 line(h-22+16+i1,k+55+i1,h-30+18+i1,k+55+i1);//shoe 2
 line(h+11+i1,k+40,h+11+i1,k+55);//front leg 2
 line(h+11,k+54+3*i1/4,h+23,k+54+3*i1/4);
}
}
}
void part3()
{ufo();
 delay(300);
 up_man1();
 delay(300);
 ballthrow1(56,17);
}
void border1()
{
 int j=0,k=0;
 char bor[][2]={"*","0"};
//////////////////////////////
 for(int i=0;i<getmaxx();i+=15)
 {
  if(k%2==0)
  {
   setcolor(15);
   j++;
  }
  else
  {
   j--;
   setcolor(4);}
   settextstyle(1,0,3);
   outtextxy(i,0,bor[j]);
   delay(50);
   k++;
  }

 ////////////////////////////////////
 for( i=0;i<getmaxy();i+=20)
 {
  if(k%2==0)
  {
   setcolor(15);
   j++;
  }
  else
  {
   j--;
   setcolor(4);}
   settextstyle(1,0,3);
   outtextxy(getmaxx()-15,i+20,bor[j]);
   delay(50);
   k++;
  }
//////////////////////
 for(i=getmaxx();i>=0;i-=15)
 {
  if(k%2==0)
  {
   setcolor(15);
   j++;
  }
  else
  {
   j--;
   setcolor(4);}
   settextstyle(1,0,3);
   outtextxy(i-30,getmaxy()-25,bor[j]);
   delay(50);
   k++;
  }
 /////////////////////////////////
 for(i=getmaxy();i>=40;i-=20)
 {

  if(k%2==0)
  {
   setcolor(15);
   j++;
  }
  else
  {
   j--;
   setcolor(4);}
   settextstyle(1,0,3);
   outtextxy(0,i-45,bor[j]);
   delay(50);
   k++;
  }
}
/////////////////////////////////////////////////////////////////
void menu()
{border1();
int h=getmaxx()/2;
settextstyle(SANS_SERIF_FONT,0,7);
setcolor(15);
outtextxy(130,40," MAIN MENU");
setcolor(4);
for(int i=170;i<h+60;i++)
{
setfillstyle(1,15);
rectangle(i-150,140,i,180);
delay(5);
setfillstyle(1,0);
if(i!=h+59)
bar(i-150,130,i-1,190);

}
settextstyle(3,0,2);
setcolor(15);
outtextxy(h-70,140,"NEW GAME");
outtextxy(h-110,140,"1.");
///////////////////////////////
setcolor(4);
for( i=170;i<h+60;i++)
{
setfillstyle(1,15);
rectangle(i-150,220,i,260);
delay(5);
setfillstyle(1,0);
if(i!=h+59)
bar(i-150,220,i-1,260);

} setcolor(15);
outtextxy(h-80,220,"INSTRUCTIONS");
outtextxy(h-110,220,"2.");
/////////////////////////////////////
setcolor(4);
for( i=170;i<h+60;i++)
{
setfillstyle(1,15);
rectangle(i-150,300,i,340);
delay(5);
setfillstyle(1,0);
if(i!=h+59)
bar(i-150,300,i-1,380);

}
setcolor(15);
outtextxy(h-60,300,"SCORES");
outtextxy(h-110,300,"3.");
////////////////////////////////////////
setcolor(4);
for( i=170;i<h+60;i++)
{
setfillstyle(1,15);
rectangle(i-150,380,i,420);
delay(5);
setfillstyle(1,0);
if(i!=h+59)
bar(i-150,380,i-1,420);

}
setcolor(15);
outtextxy(h-40,380,"EXIT");
outtextxy(h-110,380,"4.");
////////////////////////////////
    }

class game
{
 char name[80];
 int score;
 public:
 void getscore();
 void putscore();
}obj;

void add()
{  fstream fio;
   fio.open("scores.txt",ios::app);
   obj.getscore();
   fio.write((char*)&obj,sizeof(obj));
   fio.close();
}

void game::getscore()
{
  settextstyle(1,0,1);
  outtextxy(120,150,"Enter your name :");
  gotoxy(40,11);
  cin>>name;
  score=0;
  for(int q=0;q<a;q++)
  score+=sc[q];
   }

void game::putscore()
{
 cout<<"\t\t";
 cout<<name<<"\t\t"<<score<<"\n"; }

void display()
{
outtextxy(100,50,"NAME");
outtextxy(200,50,"SCORES");
fstream fin;
 fin.open("scores.txt",ios::in);
      fin.seekg(0,ios::beg);//set file pointer to the beginning
      fin.read((char*)&obj,sizeof(obj));//read first record

       while(!fin.eof())//search whole file
	{
	  obj.putscore();

	fin.read((char*)&obj,sizeof(obj));//read next record
      }
       fin.close();


}
//option 3
void scores()
{
display();

}

void up_man2()
{
d=120;
int h=d-21;
int k=getmaxy()/2-50;
rectangle(h,k,h+12,k+25);
ellipse(h+6,k-10,0,360,7,11);      //Face
circle(h+9,k-11,1);                //Eyes
arc(h+6,k-16,-10,180,8);           //Cap
line(h-1,k-16,h+13,k-16);          //Cap line
//arc(h+3,k-9,90,270,2);           //Ear
line(h+7,k-6,h+13,k-6);            //mouth

//setcolor(RED);
for(int i=0;i<5;i++)               // Hands
{line(h+3+i,k+3,h+8+i,k+15);
line(h+9,k+15+i,h+18,k+10+i);
line(h+12,k+12-i,h+18-i,k+4-i);
}
circle(h+16,k,3);                 //Fists
circle(h+19,k+11,3);


}
void stand2()
{ int h=d-21;
int k=getmaxy()/2-50;
for(int i=0;i<=8;i++)
{
 line(h+3+i,k+25,h+11+i,k+40);//front leg 1
 line(h+i,k+25,h-3+i,k+40);  //back leg 1
 line(h-3+i,k+40,h-12+i,k+55);//back leg 2
 line(h-22+16+i,k+55+i,h-30+18+i,k+55+i);//shoe 2
 line(h+11+i,k+40,h+11+i,k+55);//front leg 2
 line(h+11,k+54+3*i/4,h+23,k+54+3*i/4);
}

}


void background2()
{

  settextstyle(1,0,1);
  outtextxy(380,438,"Angle");
  outtextxy(210,438,"Velocity");
  int k=getmaxy()-150;
  int n=getmaxy()-150;;
   arc(h/2-250,2*k/3+400,46,150,400);
  line(0,k,h,k);
  floodfill(h/2,k+43,BLACK);

  setcolor(WHITE);
  //stars
  for(int i=0;i<2;i++)
  {
   circle(h/2-100,2*k/3-100,i);
   circle(h/2-80,2*k/3-90,i);
   circle(h/2-200,2*k/3-150,i);
   circle(h/2+120,2*k/3-180,i);
   circle(h/2+150,2*k/3-50,i);
   circle(h/2+200,2*k/3-70,i);
   circle(h/2+40,2*k/3-60,i);
   circle(h/2-40,2*k/3-100,i);
   circle(h/2-50,2*k/3-90,i);

   circle(h/2-200,k-400,i);
   circle(h/2+200,k-350,i);
   circle(h/2-250,k-450,i);
   circle(h/2-150,k-320,i);
   circle(h/2+150,k-370,i);
   circle(h/2+250,k-190,i);
   circle(h/2-250,k-170,i);
   circle(h/2-180,k-350,i);
   circle(h/2-220,k-410,i);
   circle(h/2+150,k-250,i);
   circle(h/2+250,k-270,i);
   circle(h/2-280,k-210,i);
   circle(h/2+280,k-100,i);

   circle(h/2-80,k-400,i);
   circle(h/2-50,k-450,i);
   circle(h/2-89,k-400,i);
   circle(h/2-120,k-480,i);
   circle(h/2-135,k-490,i);
   circle(h/2-150,k-440,i);
   circle(h/2-250,k-420,i);
   circle(h/2-200,k-440,i);
   circle(h/2-300,k-340,i);
   circle(h/2-280,k-330,i);
   circle(h/2-160,k-360,i);
   circle(h/2-15,k-380,i);
   circle(h/2,k-261,i);
   circle(h/2-15,k-380,i);
   circle(h/2-15,k-380,i);
   circle(h/2-15,k-380,i);

   circle(h-15,k-450,i);
   circle(h-85,k-440,i);
   circle(h-55,k-30,i);
   circle(h-5,k-20,i);
   circle(5,k-380,i);
   circle(h-105,k-10,i);
   circle(h-125,k-10,i);
   circle(h-195,k-80,i);
   circle(h-215,k-380,i);
   circle(h-205,k-390,i);
   circle(h-15,k-90,i);
   circle(h-95,k-100,i);
   circle(h-210,k-60,i);
   circle(h-205,k-380,i);
   circle(h-155,k-38,i);

  }
  //SCORE BOARD
  settextstyle(1,0,1);
  outtextxy(60,12,"SCORE");
 line(0,10,0,70);
 line(0,10,180,10);
 line(0,35,180,35);
 line(0,70,180,70);
 line(45,35,45,70);
 line(180,10,180,70);
 line(90,35,90,70);
 line(135,35,135,70);


}
//////////////////////////////////METER 1/////////////////////////
void move_meter1()
{
 void static_meter();
 float h,k;
 h= getmaxx();
 k= getmaxy();
 int i,j,p,q;
 char ch;
 arc(h/6.5,k,0,180,h/6.5);
 for(i=0;i<180;i++)
 { settextstyle(1,0,1);
  outtextxy(40,340,"Press Enter");
   up_man2();
   stand2();
   basket();
   background2();
   if(p>1)
 {
 for(int t1=0;t1<a;t1++)
 {gotoxy(t1*6+3,4);
 cout<<sc[t1];}
 }

  arc(h/6.5,k,0,180,h/6.5);
  float m=h/6.5-(h/6.5)*cos(i*3.14/180);
  float n=k-(h/6.5)*sin(i*3.14/180);
  line(h/6.5-2,k,m,n);
  line(h/6.5-1,k,m,n);
  line(h/6.5,k,m,n);
  line(h/6.5+1,k,m,n);
  line(h/6.5+2,k,m,n);


  static_meter();
  delay(30);
  cleardevice();
  b=i;
  if(kbhit())
   ch=getch();
   if(ch==13)
   break;
 }
}
/////////////////////////////////METER 2////////////////////////////////////
void move_meter2()
{
 void static_meter();
 float h,k;
 h= getmaxx();
 k= getmaxy();
 int i,j,p,q;
 char ch;
 char s2[20][20]={"0","20","40","60","80","100","120","140","160","180"};

 for(i=0;i<180;i++)
 {
 if(p>1)
 {
 for(int t1=0;t1<a;t1++)
 {gotoxy(t1*6+3,4);
 cout<<sc[t1];}
 }
   settextstyle(1,0,1);
  outtextxy(380,438,"Angle");
  outtextxy(459,340,"Press Spacebar");
   up_man2();
   stand2();
   basket();
   background2();



  arc(5.5*h/6.5,k,0,180,h/6.5);
  float m=5.5*h/6.5-(h/6.5)*cos(i*3.14/180);
  float n=k-(h/6.5)*sin(i*3.14/180);
  line(5.5*h/6.5-2,k,m,n);
  line(5.5*h/6.5-1,k,m,n);
  line(5.5*h/6.5,k,m,n);
  line(5.5*h/6.5+1,k,m,n);
  line(5.5*h/6.5+2,k,m,n);


  static_meter();
  delay(30);
  cleardevice();

  if(kbhit())
  ch=getch();
   if(ch==32)
   { c=i;
     break;
   }
 }
}
/////////////////////////////////STATIC METER///////////////////////
void static_meter()
{
 float h,k;
 h= getmaxx();
 k= getmaxy();
 int p,q,b;
 settextstyle(2,0,5);
 char s1[10][10]={"0","30","60","90","120","150","180"};
 char s2[20][20]={"0","20","40","60","80","100","120","140","160","180"};
 line(0,5.1*k/6.5,h,5.1*k/6.5);
 arc(h/6.5,k,0,180,h/6.5);
  /////////////////////written angle////////////////////////////////////
  for(p=0,q=0;p<=180;q++)
  {
   float m=h/6.5-(h/6.5)*cos(p*3.14/180);
   float n=k-(h/6.5)*sin(p*3.14/180);
   if(q==0)
   outtextxy(m+2,n-10,s1[0]);
   if(q==1)
   outtextxy(m,n,s1[1]);
   if(q==2)
   outtextxy(m+2,n,s1[2]);
   if(q==3)
   outtextxy(m,n+5,s1[3]);
   if(q==4)
   outtextxy(m-15,n+5,s1[4]);
   if(q==5)
   outtextxy(m-25,n,s1[5]);
   if(q==6)
   outtextxy(m-30,n-10,s1[6]);
   p=p+30;
  }
  /////////////////////////WRITTEN SPEED//////////////////////////
 arc(5.5*h/6.5,k,0,180,h/6.5);
 for(p=0,q=0;p<=180;q++)
  {
   float m=5.5*h/6.5-(h/6.5)*cos(p*3.14/180);
   float n=k-(h/6.5)*sin(p*3.14/180);
   if(q==0)
   outtextxy(m,n-8,s2[0]);
   if(q==1)
   outtextxy(m,n,s2[1]);
   if(q==2)
   outtextxy(m,n,s2[2]);
   if(q==3)
   outtextxy(m,n,s2[3]);
   if(q==4)
   outtextxy(m,n,s2[4]);
   if(q==5)
   outtextxy(m-10,n+3,s2[5]);
   if(q==6)
   outtextxy(m-20,n+4,s2[6]);
   if(q==7)
   outtextxy(m-23,n+2,s2[7]);
   if(q==8)
   outtextxy(m-28,n,s2[8]);
   if(q==9)
   outtextxy(m-31,n-8,s2[9]);
   p=p+20;
  }
}


void ballthrow2()
{
if(p>1)
 {
 for(int t1=0;t1<=a;t1++)
 {gotoxy(t1*6+3,4);
 cout<<sc[t1];}
 }
 move_meter1();
 move_meter2();


 int cball[1000];
 randomize();
 int x,y=2.8*k/5-70;
 float t=0;
 float o;
 int vel=b;
 o=22.0/7*c/180;


  x=d+5;
 circle(d+5,2.8*k/5-70,10); //B@LL
 getimage(d-5,2.8*k/5-60,d+15,2.8*k/5-80,cball);

do
 {
 static_meter();
 background2();
 basket();
 up_man2();
 stand2();

 delay(70);
 cleardevice();
 if(p>1)
 {
 for(int t1=0;t1<a;t1++)
 {gotoxy(t1*6+3,4);
 cout<<sc[t1];}
 }
 x+=vel*cos(o)*t;
 y-=(vel*sin(o)*t)-(0.5*11.1*t*t);
 circle(x,y,10);
 t+=0.1;
 if(x<0||x>h||y<0||y>k-150)
 break;


 }while(x<=(h/10+500));

  static_meter();
  background2();
  basket();
  up_man2();
  stand2();
  circle(x,y,10);
  delay(100);

  if(x>h/10+500)
  {
  if(y>k/6-10&&y<k/6+50)
  sc[a]=500;
  else if(y>k/6-50&&y<k/6+82)
  sc[a]=100;
  else if(y>k/6-60&&y<k/6+120)
  sc[a]=50;
  else if(y>k/6-70&&y<k/6+160)
  sc[a]=25;
  else sc[a]=0;
  }
  else sc[a]=0;

 for(int t1=0;t1<=a;t1++)
 {gotoxy(t1*6+3,4);
 cout<<sc[t1];}

}
void credits()
{
cleardevice();
int h,k,i=0,j;
h=getmaxx()/2;
k=getmaxy()/2;
for(j=0;j<500;j++)
{ setcolor(10);
settextstyle(3,1,10);
outtextxy(h-345,k-230,"Credits");}

for(i=0;i<300;i++)
{ setcolor(10);
settextstyle(3,1,10);
outtextxy(h-345,k-230,"Credits");
settextstyle(1,0,3);
setcolor(10);
outtextxy(h-78,k+150-i,"Developed by :");
setcolor(6);
outtextxy(h-125,k+200-i,"PAJ Animations (TM)");
outtextxy(h-75,k+250-i,"Parth Verma");
outtextxy(h-110,k+300-i,"Akshay Maheshwari");
outtextxy(h-70,k+350-i,"Jahnvi Patel");


delay(10);
cleardevice();}
setcolor(10);
outtextxy(h-78,k-150,"Developed by :");
setcolor(i);
outtextxy(h-125,k-100,"PAJ Animations (TM)");
outtextxy(h-75,k-50,"Parth Verma");
outtextxy(h-110,k,"Akshay Maheshwari");
outtextxy(h-70,k+50,"Jahnvi Patel");
setcolor(10);
settextstyle(3,1,10);
outtextxy(h-345,k-230,"Credits");
delay(500);
settextstyle(1,0,3);
setcolor(10);
outtextxy(h-170,k+150,"Thanks to Smriti Mam and others ");
delay(2000);
}

void link()
{
cleardevice();
setbkcolor(0);
void credits();
void border1();
void menu();
void instruct();
char op[2],y='y';
int h=getmaxx()/2,x;
{ menu();
 char opt[][10]={"E","n","t","e","r"," ","t","h","e"," ","o","p","t","i","o","n",":"};
 for(x=0;x<17;x++)
 {
  setcolor(4);
  outtextxy(h-100+(10*x),430,opt[x]);
  delay(50);
 }
}
gotoxy(0,0);
cin>>op;
settextstyle(1,0,2);
if(op[0]=='1'||op[0]=='2'||op[0]=='3'||op[0]=='4')
outtextxy(390,430,op);
delay(50);
if(op[0]=='1')
{
 basket();
  ballthrow(53,15);
  story();
 part2();
 part3();
 delay(300);
 line(0,5.1*k/6.5,h,5.1*k/6.5);
background2();
for( p=1;p<=4;p++)
{ballthrow2();
settextstyle(2,0,6);
outtextxy(200,340,"Press ENTER to continue.");

 for(int t=0;t<=a;t++)
 {gotoxy(t*6+3,4);
 cout<<sc[t];}

 a++;

getch();}
cleardevice();
add();
cleardevice();
link();
}

else if(op[0]=='2')
{cleardevice();
 settextstyle(3,0,4);
setcolor(4);
outtextxy(200,10,"INSTRUCTIONS");
setcolor(15);
settextstyle(3,0,2);
outtextxy(10,50,"SPACE JORDAN is a game that encompasses several features");
outtextxy(10,80,"of the classical basketball and even more.Your target is to");
outtextxy(10,110,"score maximum points and prove the UFO wrong.You have ");
outtextxy(10,140,"just four chances to prove your skills. The velocity and ");
outtextxy(10,170,"angle must be selected for the corresponding ball shoots ");
outtextxy(10,200,"through the meters provided.You can score a maximum of");
outtextxy(10,230,"500 points by directly hiting the basket.");
settextstyle(5,0,4);
outtextxy(10,300,"Get ready to escape into the world of space!");

 delay(10000);
 cleardevice();
 credits();
 delay(100);
 link();
}
else if(op[0]=='3')
{ cleardevice();
scores();
 delay(5000);
 link();
}
if(op[0]=='4')
{
 cleardevice();
 outtextxy(getmaxx()/2-210,getmaxy()/2-38,"ARE YOU SURE YOU WANT TO EXIT (Y/N): _");
 gotoxy(68,14);
 cin>>y;
 if(y=='n'||y=='N')
 link();
 if(y=='y'||y=='Y')
 exit(0);
}
else
{
 for(int m=1;m<=2;m++)
 {
  outtextxy(h+60+5,430,"INVALID INPUT");
  delay(500);
  setcolor(0);
  bar(h+70,420,h+170,440);
 }
 link();
}
}

void main()
{
clrscr();
int gdriver = DETECT, gmode, errorcode;
initgraph(&gdriver, &gmode, "c:\\Turboc3\\bgi");
h=getmaxx();
k=getmaxy();
first_page();
cleardevice();
buffer();
cleardevice();
mainpage();
delay(400);
cleardevice();
link();
getch();
}