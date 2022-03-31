#include <kipr/wombat.h>
int leftwheel=0;
int rightwheel=3;
int arm=3;
int claw=1;
int up=100;
int down=1000;
int cube=75;
int close=600;
int open=50;
int rightspeed=600;
int leftspeed=600;
int startdistance=2500;
int turnright=1220;
int turnleft=1500;
int linedistance=16000;
int rcube1=500;
int gcube1=1000;
int getcube=4000;
int returntoline=4000;
int stackcube=4000;

int main()
{
    enable_servos();
    set_servo_position(arm,down);
    set_servo_position(claw,open);
    cmpc(0);
    while(gmpc(0)<startdistance)
    {
    mav(leftwheel,leftspeed);
    mav(rightwheel,rightspeed);
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
    while(gmpc(0)<linedistance)
    {
        mav(rightwheel,rightspeed);
        mav(leftwheel,leftspeed);
        msleep(10);
    }
    set_servo_position(arm,up);
    	msleep(5);
    mav(rightwheel,rightspeed);
    mav(leftwheel,leftspeed);
        msleep(10);
    set_servo_position(claw,open);
    	msleep(5);
    
    cmpc(0);
    while(abs(gmpc(0))<rcube1)
    {
        mav(rightwheel,-rightspeed);
        mav(leftwheel,-leftspeed);
        msleep(10);
    }
    set_servo_position(arm,cube);
        cmpc(0);
    while(abs(gmpc(0))<turnleft)
    {
        mav(rightwheel,-rightspeed);
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
    	msleep(5);
    	cmpc(0);
    while(abs(gmpc(0))<returntoline)
    {
        mav(rightwheel,-rightspeed);
        mav(leftwheel,-leftspeed);
        msleep(10);
    }
    set_servo_position(claw,open);
    	mav(rightwheel,-rightspeed);
        mav(leftwheel,-leftspeed);
        msleep(10);
    while(abs(gmpc(0))<turnleft)
    {
        mav(rightwheel,rightspeed);
        mav(leftwheel,-leftspeed);
        msleep(10);
    }
    while(abs(gmpc(0))<gcube1)
    {
        mav(rightwheel,rightspeed);
        mav(leftwheel,leftspeed);
        msleep(10);
    }
    while(abs(gmpc(0))<turnright)
    {
        mav(rightwheel,-rightspeed);
        mav(leftwheel,leftspeed);
        msleep(10);
    }
    	mav(rightwheel,rightspeed);
        mav(leftwheel,leftspeed);
        msleep(10);
    while(abs(gmpc(0))<getcube)
    {
        mav(rightwheel,rightspeed);
        mav(leftwheel,leftspeed);
        msleep(10);
    }
    set_servo_position(claw,close);
    while(abs(gmpc(0))<returntoline)
    {
        mav(rightwheel,-rightspeed);
        mav(leftwheel,-leftspeed);
        msleep(10);
    }
    set_servo_position(claw,open);
    	mav(rightwheel,-rightspeed);
        mav(leftwheel,-leftspeed);
        msleep(10);
        while(abs(gmpc(0))<turnleft)
    {
        mav(rightwheel,rightspeed);
        mav(leftwheel,-leftspeed);
        msleep(10);
    }
    while(abs(gmpc(0))<gcube1)
    {
        mav(rightwheel,rightspeed);
        mav(leftwheel,leftspeed);
        msleep(10);
    }
    while(abs(gmpc(0))<turnright)
    {
        mav(rightwheel,-rightspeed);
        mav(leftwheel,leftspeed);
        msleep(10);
    }
    	mav(rightwheel,rightspeed);
        mav(leftwheel,leftspeed);
        msleep(10);
    while(abs(gmpc(0))<getcube)
    {
        mav(rightwheel,rightspeed);
        mav(leftwheel,leftspeed);
        msleep(10);
    }
    set_servo_position(claw,close);
    while(abs(gmpc(0))<returntoline)
    {
        mav(rightwheel,-rightspeed);
        mav(leftwheel,-leftspeed);
        msleep(10);
    }
   		mav(rightwheel,-rightspeed);
        mav(leftwheel,-leftspeed);
        msleep(10);
    while(abs(gmpc(0))<stackcube)
    {
        mav(rightwheel,rightspeed);
        mav(leftwheel,leftspeed);
        msleep(10);
    }
    	mav(rightwheel,rightspeed);
        mav(leftwheel,-leftspeed);
        msleep(10);
    set_servo_position(claw,open);
    	mav(rightwheel,-rightspeed);
        mav(leftwheel,leftspeed);
        msleep(10);
    return 0;
}
