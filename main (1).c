#include <kipr/wombat.h>
int light=1;
int line=0;
int leftwheel=0;
int rightwheel=3;
int arm=3;
int claw=1;
int up=650;
int down=1200;
int cube=75;
int close=800;
int open=265;
int rightspeed=1000;
int leftspeed=1000;
int turnright=1220;
int turnleft=1500;
int blackline=3850;
int linedistance1=8800;
int linedistance2=9000;
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
    while(analog(line)<blackline)
    {
    mav(leftwheel,leftspeed);
    mav(rightwheel,rightspeed);
    	msleep(10);
    }
    mav(leftwheel,leftspeed);
    mav(rightwheel,rightspeed);
    	msleep(780);
    cmpc(0);
    while(analog(line)<blackline)
    {
        mav(rightwheel,rightspeed);
        mav(leftwheel,-leftspeed);
        msleep(10);
    }
    cmpc(0);
    while (gmpc(0)<linedistance1)
    {
   		if (analog(line)>blackline)
   		{
       	mav(leftwheel,800);
       	mav (rightwheel,-10);
       	msleep(5);
   		}
        else 
        {
        mav(leftwheel,-10);
        mav (rightwheel,800);
        msleep(5);
       }
    }
    set_servo_position(claw,close);
    msleep(10);
    set_servo_position(arm,up);
    mav(leftwheel,leftspeed);
    mav(rightwheel,rightspeed);
    	msleep(990);
    set_servo_position(claw,open);
    set_servo_position(arm,down);
    cmpc(0);
    while (gmpc(0)<linedistance2)
    {
   		if (analog(line)>blackline)
   		{
       	mav(leftwheel,800);
       	mav (rightwheel,-10);
       	msleep(5);
   		}
        else 
        {
        mav(leftwheel,-10);
        mav (rightwheel,800);
        msleep(5);
       }
    }
    set_servo_position(arm,up);
    mav(rightwheel,rightspeed);
    mav(leftwheel,leftspeed);
        msleep(100);
    set_servo_position(claw,open);
    	msleep(1000);
    
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
    while(analog(0)<blackline)
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
