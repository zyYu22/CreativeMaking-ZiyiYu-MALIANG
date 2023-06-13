/****************************************************************
GestureTest.ino
APDS-9960 RGB and Gesture Sensor
Shawn Hymel @ SparkFun Electronics
May 30, 2014
https://github.com/sparkfun/APDS-9960_RGB_and_Gesture_Sensor

Tests the gesture sensing abilities of the APDS-9960. Configures
APDS-9960 over I2C and waits for gesture events. Calculates the
direction of the swipe (up, down, left, right) and displays it
on a serial console. 

To perform a NEAR gesture, hold your hand
far above the sensor and move it close to the sensor (within 2
inches). Hold your hand there for at least 1 second and move it
away.

To perform a FAR gesture, hold your hand within 2 inches of the
sensor for at least 1 second and then move it above (out of
range) of the sensor.

Hardware Connections:

IMPORTANT: The APDS-9960 can only accept 3.3V!
 
 Arduino Pin  APDS-9960 Board  Function
 
 3.3V         VCC              Power
 GND          GND              Ground
 A4           SDA              I2C Data
 A5           SCL              I2C Clock
 2            INT              Interrupt

Resources:
Include Wire.h and SparkFun_APDS-9960.h

Development environment specifics:
Written in Arduino 1.0.5
Tested with SparkFun Arduino Pro Mini 3.3V

This code is beerware; if you see me (or any other SparkFun 
employee) at the local, and you've found our code helpful, please
buy us a round!

Distributed as-is; no warranty is given.
****************************************************************/

#include <Wire.h>
#include <SparkFun_APDS9960.h>

#include <Arduino.h>//

#define trigPin 4
#define echoPin 5

// Pins
#define APDS9960_INT    2 // Needs to be an interrupt pin

// Constants

// Global Variables
SparkFun_APDS9960 apds = SparkFun_APDS9960();
int isr_flag = 0;


void setup() {

  // Set interrupt pin as input
  pinMode(APDS9960_INT, INPUT);
  //pinMode(Button_PIN, INPUT);
  

  // Initialize Serial port
  Serial.begin(9600);
  Serial.println();
  Serial.println(F("--------------------------------"));
  Serial.println(F("SparkFun APDS-9960 - GestureTest"));
  Serial.println(F("--------------------------------"));
  
  // Initialize interrupt service routine
  attachInterrupt(0, interruptRoutine, FALLING);

  // Initialize APDS-9960 (configure I2C and initial values)
  if ( apds.init() ) {
    Serial.println(F("APDS-9960 initialization complete"));
  } else {
    Serial.println(F("Something went wrong during APDS-9960 init!"));
  }
  
  // Start running the APDS-9960 gesture sensor engine
  if ( apds.enableGestureSensor(true) ) {
    Serial.println(F("Gesture sensor is now running"));
  } else {
    Serial.println(F("Something went wrong during gesture sensor init!"));
  }

  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  digitalWrite(trigPin, LOW);


}

void loop() {

// 触发超声波传感器
  // 将trigPin拉高至少10us
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
 
  // 声音往返传输的时间ms
  // echoPin被拉高的时间等于声音往返时间（微秒）
  unsigned long duration = pulseIn(echoPin, HIGH, 30000); // 计算这个引脚从高变低电平的时间，最大30ms
 
  // 声音的速度340m/s
  // 340m/s = 0.034mm/us
  float distance = duration * 0.034 / 2; //计算距离mm，声音是往返，所以除以2

  delay(10000);


  
/*if(digitalRead(Button_PIN) == HIGH)         // 当检测到按键按下时
{
Serial.println(66);
//count=count+1;                             //计数加1
}*/



/////////////////////////////////

   if( isr_flag == 1 ) {
    detachInterrupt(0);
    handleGesture();
    isr_flag = 0;
    attachInterrupt(0, interruptRoutine, FALLING);
  }

  /////////////////
  if (distance <= 5){
     Serial.println("66");
  }

}

void interruptRoutine() {
  isr_flag = 1;
}

void handleGesture() {
    if ( apds.isGestureAvailable() ) {
    switch ( apds.readGesture() ) {
      case DIR_UP:
        Serial.println("1");
        break;
      case DIR_DOWN:
        Serial.println("2");
        break;
      case DIR_LEFT:
        Serial.println("3");
        break;
      case DIR_RIGHT:
        Serial.println("4");
        break;
      case DIR_NEAR:
        Serial.println("5");
        break;
      case DIR_FAR:
        Serial.println("6");
        break;
      default:
        Serial.println("7");
    }
  }
}

