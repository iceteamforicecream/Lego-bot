#include <kipr/wombat.h>
int leftwheel=0;
int rightwheel=3;
int light=1;
int line=0;
int arm=3;
int claw=1;
int up=700;
int down=1600;
int abovecubes=400;
int shakeheight=1000;
int cubeheight=1250;
int stackheight=900;
int close=960;
int open=1950;
int cubehalfopen=1380;
int cubeopen=1800;
int rightspeed=1200;
int leftspeed=1200;
int turnright=1050;
int turnleft=1050;
int placegreencube=300;
int placeredcube=500;
int blackline=3500;
int linedistance=15000;
int lineupwithcube1=50;
int lineupwithcube=1850;
int lineupwithcube4=5200;
int lineuptogetcube4=2500;
int getcube1=3500;
int getcube=5800;
int getcube4=700;
int cubeonline=5000;
int cubepassline=5200;
int gopassline=4800;
int stackcube=2200;
int stackcube4=2000;

int main()
{
    enable_servos();
    set_servo_position(arm,up);
    set_servo_position(claw,cubeopen);
    cmpc(0);
    while(abs(gmpc(0))<lineupwithcube1)
    {
        mav(rightwheel,-rightspeed);
        mav(leftwheel,-leftspeed);
        msleep(10);
    }
    while(abs(gmpc(0))<turnleft)
    {
        mav(rightwheel,-rightspeed);
        mav(leftwheel,leftspeed);
        msleep(10);
    }
    set_servo_position(arm,cubeheight);
    cmpc(0);
    while(abs(gmpc(0))<getcube1)
    {
        mav(rightwheel,rightspeed);
        mav(leftwheel,leftspeed);
        msleep(10);
    }
    set_servo_position(claw,close);
    	msleep(50);
    cmpc(0);
    while(abs(gmpc(0))<cubeonline)
    {
    	mav(rightwheel,-rightspeed);
        mav(leftwheel,-leftspeed);
        msleep(10);
    }
    set_servo_position(claw,cubeopen);
        msleep(50);
    	mav(rightwheel,-rightspeed);
        mav(leftwheel,-leftspeed);
        msleep(600);
    cmpc(0);
    while(abs(gmpc(0))<turnleft)
    {
        mav(rightwheel,-rightspeed);
        mav(leftwheel,leftspeed);
        msleep(10);
    }
    cmpc(0);
    while(abs(gmpc(0))<lineupwithcube)
    {
        mav(rightwheel,rightspeed);
        mav(leftwheel,leftspeed);
        msleep(10);
    }
    cmpc(0);
    while(abs(gmpc(0))<turnright)
    {
        mav(rightwheel,rightspeed);
        mav(leftwheel,-leftspeed);
        msleep(10);
    }
    cmpc(0);
    while(abs(gmpc(0))<getcube)
    {
        mav(rightwheel,rightspeed);
        mav(leftwheel,leftspeed);
        msleep(10);
    }
    set_servo_position(claw,close);
        msleep(50);
    cmpc(0);
    while(abs(gmpc(0))<cubeonline)
    {
        mav(rightwheel,-rightspeed);
        mav(leftwheel,-leftspeed);
        msleep(10);
    }
    set_servo_position(claw,cubeopen);
        msleep(50);
    	mav(rightwheel,-rightspeed);
        mav(leftwheel,-leftspeed);
        msleep(600);
    cmpc(0);
    while(abs(gmpc(0))<turnleft)
    {
        mav(rightwheel,-rightspeed);
        mav(leftwheel,leftspeed);
        msleep(10);
    }
    cmpc(0);
    while(abs(gmpc(0))<lineupwithcube)
    {
        mav(rightwheel,rightspeed);
        mav(leftwheel,leftspeed);
        msleep(10);
    }
    cmpc(0);
    while(abs(gmpc(0))<turnright)
    {
        mav(rightwheel,rightspeed);
        mav(leftwheel,-leftspeed);
        msleep(10);
    }
    cmpc(0);
    while(abs(gmpc(0))<getcube)
    {
        mav(rightwheel,rightspeed);
        mav(leftwheel,leftspeed);
        msleep(10);
    }
    set_servo_position(claw,close);
        msleep(50);
    set_servo_position(arm,stackheight);
    cmpc(0);
   	while(abs(gmpc(0))<cubepassline)
    {
        mav(rightwheel,-rightspeed);
        mav(leftwheel,-leftspeed);
        msleep(10);
    }
    cmpc(0);
    while(abs(gmpc(0))<turnright)
    {
        mav(rightwheel,rightspeed);
        mav(leftwheel,-leftspeed);
        msleep(10);
    }
    set_servo_position(arm,stackheight);
    cmpc(0);
    while(abs(gmpc(0))<stackcube)
    {
        mav(rightwheel,rightspeed);
        mav(leftwheel,leftspeed);
        msleep(10);
    }
    cmpc(0);
    while(abs(gmpc(0))<placegreencube)
    {
        mav(rightwheel,-rightspeed);
        mav(leftwheel,leftspeed);
        msleep(10);
    }
    mav(rightwheel,rightspeed);
    mav(leftwheel,leftspeed);
        msleep(100);
    	mav(rightwheel,0);
        mav(leftwheel,0);
    msleep(900);
    set_servo_position(claw,cubehalfopen);
    	msleep(300);
    set_servo_position(claw,cubeopen);
    	msleep(300);
    set_servo_position(arm,abovecubes);
        msleep(300);
    cmpc(0);
    while(abs(gmpc(0))<placegreencube)
    {
        mav(rightwheel,rightspeed);
        mav(leftwheel,-leftspeed);
        msleep(10);
    }
    cmpc(0);
    while(abs(gmpc(0))<lineuptogetcube4)
    {
        mav(rightwheel,-rightspeed);
        mav(leftwheel,-leftspeed);
        msleep(10);
    }
    cmpc(0);
    while(abs(gmpc(0))<turnleft)
    {
        mav(rightwheel,-rightspeed);
        mav(leftwheel,leftspeed);
        msleep(10);
    }
    set_servo_position(arm,cubeheight);
        cmpc(0);
    while(analog(0)<blackline)
    {
        mav(rightwheel,rightspeed);
        mav(leftwheel,leftspeed);
        msleep(10);
    }
    cmpc(0);
   	while(abs(gmpc(0))<gopassline)
    {
        mav(rightwheel,rightspeed);
        mav(leftwheel,leftspeed);
        msleep(10);
    }
    cmpc(0);
    while(abs(gmpc(0))<turnright)
    {
        mav(rightwheel,rightspeed);
        mav(leftwheel,-leftspeed);
        msleep(10);
    }
    cmpc(0);
    while(abs(gmpc(0))<lineupwithcube4)
    {
        mav(rightwheel,rightspeed);
        mav(leftwheel,leftspeed);
        msleep(10);
    }
    cmpc(0);
    while(abs(gmpc(0))<turnleft)
    {
        mav(rightwheel,-rightspeed);
        mav(leftwheel,leftspeed);
        msleep(10);
    }
    cmpc(0);
    while(abs(gmpc(0))<getcube4)
    {
        mav(rightwheel,rightspeed);
        mav(leftwheel,leftspeed);
        msleep(10);
    }
    set_servo_position(claw,close);
    msleep(50);
    cmpc(0);
    while(abs(gmpc(0))<getcube4)
    {
        mav(rightwheel,-rightspeed);
        mav(leftwheel,-leftspeed);
        msleep(10);
    }
    cmpc(0);
   	while(abs(gmpc(0))<turnleft)
    {
        mav(rightwheel,-rightspeed);
        mav(leftwheel,leftspeed);
        msleep(10);
    }
    set_servo_position(arm,stackheight);
    cmpc(0);
    while(abs(gmpc(0))<stackcube4)
    {
        mav(rightwheel,rightspeed);
        mav(leftwheel,leftspeed);
        msleep(10);
    }
    cmpc(0);
   	while(abs(gmpc(0))<turnleft)
    {
        mav(rightwheel,-rightspeed);
        mav(leftwheel,leftspeed);
        msleep(10);
    }
    cmpc(0);
    while(abs(gmpc(0))<placeredcube)
    {
        mav(rightwheel,rightspeed);
        mav(leftwheel,leftspeed);
        msleep(10);
    }
    	mav(rightwheel,0);
        mav(leftwheel,0);
    set_servo_position(claw,cubehalfopen);
    	msleep(300);
    set_servo_position(claw,cubeopen);
    	msleep(300);
    set_servo_position(arm,abovecubes);
        msleep(300);
    return 0;
}