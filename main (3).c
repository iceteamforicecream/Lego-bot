#include <kipr/wombat.h>
int leftwheel=0;
int rightwheel=3;
int light=1;
int line=0;
int button1=4;
int button2=5;
int arm=3;
int claw=1;
int up=650;
int down=1200;
int cube=75;
int close=800;
int open=265;
int rightspeed=1000;
int leftspeed=1000;
int turnright=1100;
int turnleft=1500;
int blackline=3850;
int passline=100;
int linedistance1=6500;
int linedistance2=7000;
int skipline=1000;
int gototransporter=1000;
int lineupwithcube1=500;
int lineupwithcube=1000;
int getcube=4000;
int returntoline=1000;
int returntoline2=900;
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
    	msleep(1000);
    cmpc(0);
    while(abs(gmpc(0))<turnright)
    {
   		mav(rightwheel,rightspeed);
        mav(leftwheel,-leftspeed);
        msleep(10);
    }
    while(((digital(0))==0)||((digital(1)==0)))
    {
        mav(rightwheel,-rightspeed);
        mav(leftwheel,-leftspeed);
        msleep(10);
    }
    cmpc(0);
    while(gmpc(0)<linedistance1)
    {
   		mav(rightwheel,rightspeed);
        mav(leftwheel,leftspeed);
        msleep(10);
    }
    set_servo_position(claw,close);
    msleep(5);
    set_servo_position(arm,up);
    cmpc(0);
	while(gmpc(0)<skipline)
    {
   		mav(rightwheel,rightspeed);
        mav(leftwheel,leftspeed);
        msleep(10);
    }
    set_servo_position(arm,down);
    msleep(5);
    set_servo_position(claw,open);
    cmpc(0);
    while(gmpc(0)<linedistance2)
    {
   		mav(rightwheel,rightspeed);
        mav(leftwheel,leftspeed);
        msleep(10);
    }
    set_servo_position(claw,close);
    msleep(5);
    set_servo_position(arm,up);
    cmpc(0);
    while(gmpc(0)<gototransporter)
    {
   		mav(rightwheel,rightspeed);
        mav(leftwheel,leftspeed);
        msleep(10);
    }
    set_servo_position(claw,open);
    	msleep(5000);
    
    cmpc(0);
    while(abs(gmpc(0))<lineupwithcube1)
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
    cmpc(0);
    while(abs(gmpc(0))<turnleft)
    {
        mav(rightwheel,rightspeed);
        mav(leftwheel,-leftspeed);
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
    while(analog(0)<blackline)
    {
        mav(rightwheel,-rightspeed);
        mav(leftwheel,-leftspeed);
        msleep(10);
    }
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
    cmpc(0);
    while(abs(gmpc(0))<turnleft)
    {
        mav(rightwheel,rightspeed);
        mav(leftwheel,-leftspeed);
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
    while(analog(0)<blackline)
    {
        mav(rightwheel,-rightspeed);
        mav(leftwheel,-leftspeed);
        msleep(10);
    }
    cmpc(0);
   	while(abs(gmpc(0))<returntoline2)
    {
        mav(rightwheel,-rightspeed);
        mav(leftwheel,-leftspeed);
        msleep(10);
    }
    cmpc(0);
    while(abs(gmpc(0))<turnright)
    {
        mav(rightwheel,-rightspeed);
        mav(leftwheel,leftspeed);
        msleep(10);
    }
    cmpc(0);
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
    	msleep(10);
    set_servo_position(arm,up);
    	mav(rightwheel,-rightspeed);
        mav(leftwheel,leftspeed);
        msleep(10);
    set_servo_position(arm,cube);
    cmpc(0);
    while(abs(gmpc(0))<lineupwithcube)
    {
        mav(rightwheel,-rightspeed);
        mav(leftwheel,-leftspeed);
        msleep(10);
    }
    cmpc(0);
    while(abs(gmpc(0))<lineupwithcube)
    {
        mav(rightwheel,-rightspeed);
        mav(leftwheel,-leftspeed);
        msleep(10);
    }
    cmpc(0);
    while(abs(gmpc(0))<turnleft)
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
    while(analog(0)<blackline)
    {
        mav(rightwheel,-rightspeed);
        mav(leftwheel,-leftspeed);
        msleep(10);
    }
    cmpc(0);
   	while(abs(gmpc(0))<returntoline2)
    {
        mav(rightwheel,-rightspeed);
        mav(leftwheel,-leftspeed);
        msleep(10);
    }
    cmpc(0);
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
    	msleep(10);
    set_servo_position(arm,up);
    	mav(rightwheel,-rightspeed);
        mav(leftwheel,leftspeed);
        msleep(10);
    return 0;
}
