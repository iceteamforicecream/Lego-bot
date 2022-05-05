#include <kipr/wombat.h>
int leftwheel=0;
int rightwheel=3;
int light=1;
int line=0;
int arm=3;
int claw=1;
int up=666;
int down=1775;
int abovecubes=400;
int shakeheight=1000;
int cubeheight=1250;
int stackheight=1000;
int close=1140;
int open=2500;
int cubehalfopen=1470;
int cubeopen=1800;
int rightspeed=1000;
int leftspeed=1000;
int turnright=1150;
int turnleft=1140;
int placecubeg=600;
int placecuber=500;
int blackline=3850;
int linedistance=13500;
int lineupwithcube=1850;
int lineupwithcube4=1500;
int getcube1=3570;
int getcube=4200;
int cubeonline=1000;
int cubepassline=1100;
int stackcube=2300;

int main()
{
    enable_servos();
    set_servo_position(arm,up);
    set_servo_position(claw,cubeopen);
    cmpc(0);
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
    while(analog(0)<blackline)
    {
        mav(rightwheel,-rightspeed);
        mav(leftwheel,-leftspeed);
        msleep(10);
    }
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
        msleep(500);
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
    while(analog(0)<blackline)
    {
        mav(rightwheel,rightspeed);
        mav(leftwheel,leftspeed);
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
    while(analog(0)<blackline)
    {
        mav(rightwheel,-rightspeed);
        mav(leftwheel,-leftspeed);
        msleep(10);
    }
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
        msleep(500);
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
    while(analog(0)<blackline)
    {
        mav(rightwheel,rightspeed);
        mav(leftwheel,leftspeed);
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
    while(analog(0)<blackline)
    {
        mav(rightwheel,-rightspeed);
        mav(leftwheel,-leftspeed);
        msleep(10);
    }
    set_servo_position(arm,up);
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
    while(abs(gmpc(0))<placecubeg)
    {
        mav(rightwheel,-rightspeed);
        mav(leftwheel,leftspeed);
        msleep(10);
    }
    	mav(rightwheel,0);
        mav(leftwheel,0);
    set_servo_position(claw,cubehalfopen);
    	msleep(330);
    set_servo_position(claw,cubeopen);
    	msleep(330);
    set_servo_position(arm,abovecubes);
        msleep(330);
    cmpc(0);
    while(abs(gmpc(0))<placecubeg)
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
    set_servo_position(arm,cubeheight);
    cmpc(0);
    while(abs(gmpc(0))<turnleft)
    {
        mav(rightwheel,-rightspeed);
        mav(leftwheel,leftspeed);
        msleep(10);
    }
    while(analog(0)<blackline)
    {
        mav(rightwheel,rightspeed);
        mav(leftwheel,leftspeed);
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
    while(analog(0)<blackline)
    {
        mav(rightwheel,-rightspeed);
        mav(leftwheel,-leftspeed);
        msleep(10);
    }
    cmpc(0);
   	while(abs(gmpc(0))<cubepassline)
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
    while(abs(gmpc(0))<stackcube)
    {
        mav(rightwheel,rightspeed);
        mav(leftwheel,leftspeed);
        msleep(10);
    }
    cmpc(0);
    while(abs(gmpc(0))<placecuber)
    {
        mav(rightwheel,rightspeed);
        mav(leftwheel,-leftspeed);
        msleep(10);
    }
    set_servo_position(claw,cubeopen);
    	msleep(50);
    set_servo_position(arm,up);
    	msleep(50);
    cmpc(0);
    while(abs(gmpc(0))<placecuber)
    {
        mav(rightwheel,-rightspeed);
        mav(leftwheel,leftspeed);
        msleep(10);
    }
    return 0;
}