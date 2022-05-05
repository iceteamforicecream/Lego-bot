#include <kipr/wombat.h>
int leftwheel=0;
int rightwheel=3;
int light=1;
int line=0;
int arm=3;
int claw=1;
int up=700;
int down=1650;
int shakeheight=480;
int cubeheight=1250;
int stackheight=415;
int close=960;
int open=1950;
int cubeopen=1550;
int rightspeed=1200;
int leftspeed=1200;
int turnright=1300;
int turnleft=1600;
int blackline=3850;
int linedistance=14550;
int lineupwithcube1=500;
int lineupwithcube=1000;
int getcube=3500;
int returntoline=1000;
int returntoline2=900;
int stackcube=4000;

int main()
{
    msleep(1500);
    enable_servos();
    set_servo_position(arm,down);
    set_servo_position(claw,close);
    while(analog(line)<blackline)
    {
    mav(leftwheel,leftspeed);
    mav(rightwheel,rightspeed);
    	msleep(10);
    }
    mav(leftwheel,leftspeed);
    mav(rightwheel,rightspeed);
    	msleep(500);
    set_servo_position(claw,open);
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
    while(gmpc(0)<linedistance)
    {
   		mav(rightwheel,rightspeed);
        mav(leftwheel,leftspeed);
        msleep(10);
    }
    set_servo_position(claw,close);
        msleep(500);
    set_servo_position(arm,up);
        msleep(1000);
    set_servo_position(claw,open);
    	msleep(500);
    mav(rightwheel,0);
    mav(leftwheel,0);
        msleep(1000);
    set_servo_position(arm,shakeheight);
    set_servo_position(claw,close);
        msleep(300);
    set_servo_position(arm,up);
    set_servo_position(claw,open);
        msleep(300);
    set_servo_position(arm,shakeheight);
    set_servo_position(claw,close);
        msleep(500);
    set_servo_position(arm,up);
    set_servo_position(claw,open);
        msleep(300);
    set_servo_position(claw,open);
    cmpc(0);
    return 0;
}