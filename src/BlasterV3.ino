#include "SoftwareSerial.h"
#include "DFPlayer_Mini_Mp3.h"
#include <Adafruit_SSD1306.h>

SoftwareSerial mySerial(11, 12); // RX, TX

// Pins
int trigger = 3;
int reload = 2;
int ammo = 10;
int laser = 4;

void setup() {
  Serial.begin(9600);
  mySerial.begin(9600);
  
  mp3_set_serial(mySerial);
  mp3_set_volume(10);       // set volume (30 max)
  mp3_set_EQ(0);   

  pinMode(trigger,INPUT_PULLUP);
  pinMode(trigger, INPUT);
  digitalWrite(trigger, HIGH);

  pinMode(reload,INPUT_PULLUP);
  pinMode(reload, INPUT);
  digitalWrite(reload, HIGH);

  pinMode(laser,OUTPUT);
  digitalWrite(laser,LOW);  
  mp3_play(4); 
  delay(500);
}

void loop() { 
    if(digitalRead(trigger)== HIGH) {
      if (ammo != 0) {
        Serial.write("Fire");
        mp3_play(1); 
        digitalWrite(laser,HIGH);
        delay(1200);
        ammo = ammo - 1; 
        digitalWrite(laser,LOW);
        delay(100);
      }else {
        mp3_play(2); 
        delay(1200); 
      }
  } 
  else {
    if(digitalRead(reload) == LOW) {
      mp3_play(3);
      delay(1200);
      ammo = 10;
    }
  }  
}
