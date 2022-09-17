#define NOTE_C 262
#define NOTE_D 294
#define NOTE_E 330
#define NOTE_F 349
#define NOTE_G 392
#define NOTE_A 440
#define NOTE_B 493

#define ACTIVATED LOW

const int PIEZO = 8;
const int LED = 13;

const int BUTTON_C = A0;
const int BUTTON_D = A1;
const int BUTTON_E = A2;
const int BUTTON_F = A3;
const int BUTTON_G = A4;
const int BUTTON_A = A5;
const int BUTTON_B = 4;

void setup() 
{ 
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  
  pinMode(PIEZO, OUTPUT); 
  
  pinMode(BUTTON_A, INPUT);
  pinMode(BUTTON_B, INPUT); 
  pinMode(BUTTON_C, INPUT); 
  pinMode(BUTTON_D, INPUT);   
  pinMode(BUTTON_E, INPUT);  
  pinMode(BUTTON_F, INPUT);  
  pinMode(BUTTON_G, INPUT);
}

 void loop() 
{
   if(digitalRead(BUTTON_A) == 1)
 {
  	tone(PIEZO,NOTE_A,100); 
    setColor(255, 0, 0); // Red
 }
  
   if(digitalRead(BUTTON_B) ==  1) 
 {
  	tone(PIEZO,NOTE_B,100);
    setColor(0, 255, 0); // Green
 }
  
   if(digitalRead(BUTTON_C) ==  1) 
 {
	tone(PIEZO,NOTE_C,100); 
    setColor(0, 0, 255); // Blue
 }
  
 if(digitalRead(BUTTON_D) ==  1)
 {
	tone(PIEZO,NOTE_D,100); 
    setColor(255, 255, 125); // Raspberry
 }
  
 if(digitalRead(BUTTON_E) ==  1) 
 {
   	tone(PIEZO,NOTE_E,100);
   	setColor(255, 0, 255); // Magenta
 }

 if(digitalRead(BUTTON_F) == 1) 
 {
	tone(PIEZO,NOTE_F,100);
   	setColor(0, 255, 255); // Cyan
 }
  
 if(digitalRead(BUTTON_G) == 1) 
 {
	tone(PIEZO,NOTE_G,100);
   	setColor(255, 255, 255); // White
  }
        
   delay(5);
 }

void setColor(int redValue, int greenValue, int blueValue) {
  analogWrite(11, redValue);
  analogWrite(10, greenValue);
  analogWrite(9, blueValue);
  //delay(50);
}



