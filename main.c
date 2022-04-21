#include <kipr/wombat.h>
int leftwheel=0;
int rightwheel=3;
int light=1;
int line=0;
int arm=3;
int claw=1;
int up=700;
int down=970;
int cubeheight=600;
int cube=1110;
int close=1100;
int open=50;
int cubeclose=1700;
int cubeopen=1180;
int rightspeed=1100;
int leftspeed=1100;
int turnright=1100;
int turnleft=1500;
int blackline=3850;
int linedistance=13500;
int lineupwithcube1=500;
int lineupwithcube=1000;
int getcube=3500;
int returntoline=1000;
int returntoline2=900;
int stackcube=4000;

int main()
{
    msleep(2000);
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
    while(((digital(4))==0)||((digital(5)==0)))
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
        msleep(1500);
    set_servo_position(arm,up);
        msleep(500);
    set_servo_position(claw,open);
    	msleep(500);
    mav(rightwheel,0);
    mav(leftwheel,0);
        msleep(500);
    set_servo_position(arm,cubeheight);
    set_servo_position(claw,close);
        msleep(100);
    set_servo_position(arm,up);
    set_servo_position(claw,open);
        msleep(100);
    set_servo_position(arm,cubeheight);
    set_servo_position(claw,close);
        msleep(100);
    set_servo_position(arm,up);
    set_servo_position(claw,open);
        msleep(100);
    return 0;
}