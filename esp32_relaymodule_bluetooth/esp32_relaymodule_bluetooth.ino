#include <BluetoothSerial.h>

BluetoothSerial SerialBT;


int LUZ2= 2;
int LUZ3= 3;
int LUZ4= 4;
int LUZ5= 5;
int LUZ6= 6;
int LUZ22= 23;
int LUZ7= 7;
int LUZ8= 8;
int LUZ9= 9;
int LUZ10= 10;
int LUZ11= 11;
int LUZ23= 24;
int LUZ12= 12;
int LUZ13= 13;
int LUZ14= 14;
int LUZ15= 15;
int LUZ16= 16;
int LUZ24= 25;
int LUZ17= 18;
int LUZ18= 19;
int LUZ19= 20;
int LUZ20= 21;
int LUZ25= 26;
int LUZ21= 22;



void setup() {
  SerialBT.begin("Dios");
  Serial.begin(115200);

pinMode(2, OUTPUT);
digitalWrite(2, HIGH);
pinMode(3, OUTPUT);
digitalWrite(3, HIGH);
pinMode(4, OUTPUT);
digitalWrite(4, HIGH);
pinMode(5, OUTPUT);
digitalWrite(5, HIGH);
pinMode(6, OUTPUT);
digitalWrite(6, HIGH);
pinMode(23, OUTPUT);
digitalWrite(23, HIGH);
pinMode(7, OUTPUT);
digitalWrite(7, HIGH);
pinMode(8, OUTPUT);
digitalWrite(8, HIGH);
pinMode(9, OUTPUT);
digitalWrite(9, HIGH);
pinMode(10, OUTPUT);
digitalWrite(10, HIGH);
pinMode(11, OUTPUT);
digitalWrite(11, HIGH);
pinMode(24, OUTPUT);
digitalWrite(24, HIGH);
pinMode(12, OUTPUT);
digitalWrite(12, HIGH);
pinMode(13, OUTPUT);
digitalWrite(13, HIGH);
pinMode(14, OUTPUT);
digitalWrite(14, HIGH);
pinMode(15, OUTPUT);
digitalWrite(15, HIGH);
pinMode(16, OUTPUT);
digitalWrite(16, HIGH);
pinMode(25, OUTPUT);
digitalWrite(25, HIGH);
pinMode(18, OUTPUT);
digitalWrite(18, HIGH);
pinMode(19, OUTPUT);
digitalWrite(19, HIGH);
pinMode(20, OUTPUT);
digitalWrite(20, HIGH);
pinMode(21, OUTPUT);
digitalWrite(21, HIGH);
pinMode(26, OUTPUT);
digitalWrite(26, HIGH);
pinMode(22, OUTPUT);
digitalWrite(22, HIGH);
}

void loop() 
{   

  
  if (SerialBT.available()) { 
    int x = SerialBT.read(); 
    Serial.write(x); 

    if (char(x) == 'A') {
      digitalWrite(2,LOW);
      SerialBT.print("Light OFF\n");
    }   
    
    if (char(x) == 'a') { 
      digitalWrite(2,HIGH);
      SerialBT.print("Light ON\n");
    }
     if (char(x) == 'R') {
      digitalWrite(3,LOW);
      SerialBT.print("Light OFF\n");
    }   
    
    if (char(x) == 'r') { 
      digitalWrite(3,HIGH);
      SerialBT.print("Light ON\n");
    }
     if (char(x) == 'B') {
      digitalWrite(4,LOW);
      delay(800);
      digitalWrite(4,HIGH);
      SerialBT.print("Light OFF\n");
    }   
    
    if (char(x) == 'b') { 
      digitalWrite(4,HIGH);
      SerialBT.print("Light ON\n");
    }
     if (char(x) == 'S') {
      digitalWrite(5,LOW);
      SerialBT.print("Light OFF\n");
    }   
    
    if (char(x) == 's') { 
      digitalWrite(5,HIGH);
      SerialBT.print("Light ON\n");
    }
     if (char(x) == 'C') {
      digitalWrite(6,LOW);
      SerialBT.print("Light OFF\n");
    }   
    
    if (char(x) == 'c') { 
      digitalWrite(6,HIGH);
      SerialBT.print("Light ON\n");
    }
     if (char(x) == 'T') {
      digitalWrite(23,LOW);
      SerialBT.print("Light OFF\n");
    }   
    
    if (char(x) == 't') { 
      digitalWrite(23,HIGH);
      SerialBT.print("Light ON\n");
    }
     if (char(x) == 'D') {
      digitalWrite(7,LOW);
      SerialBT.print("Light OFF\n");
    }   
    
    if (char(x) == 'd') { 
      digitalWrite(7,HIGH);
      SerialBT.print("Light ON\n");
    }
     if (char(x) == 'U') {
      digitalWrite(8,LOW);
      SerialBT.print("Light OFF\n");
    }   
    
    if (char(x) == 'u') { 
      digitalWrite(8,HIGH);
      SerialBT.print("Light ON\n");
    }
     if (char(x) == 'E') {
      digitalWrite(9,LOW);
      SerialBT.print("Light OFF\n");
    }   
    
    if (char(x) == 'e') { 
      digitalWrite(9,HIGH);
      SerialBT.print("Light ON\n");
    }
     if (char(x) == 'V') {
      digitalWrite(10,LOW);
      SerialBT.print("Light OFF\n");
    }   
    
    if (char(x) == 'v') { 
      digitalWrite(10,HIGH);
      SerialBT.print("Light ON\n");
    }
     if (char(x) == 'F') {
      digitalWrite(11,LOW);
      SerialBT.print("Light OFF\n");
    }   
    
    if (char(x) == 'f') { 
      digitalWrite(11,HIGH);
      SerialBT.print("Light ON\n");
    }
     if (char(x) == 'W') {
      digitalWrite(24,LOW);
      SerialBT.print("Light OFF\n");
    }   
    
    if (char(x) == 'w') { 
      digitalWrite(24,HIGH);
      SerialBT.print("Light ON\n");
    }
     if (char(x) == 'G') {
      digitalWrite(12,LOW);
      SerialBT.print("Light OFF\n");
    }   
    
    if (char(x) == 'g') { 
      digitalWrite(12,HIGH);
      SerialBT.print("Light ON\n");
    }
     if (char(x) == 'X') {
      digitalWrite(13,LOW);
      SerialBT.print("Light OFF\n");
    }   
    
    if (char(x) == 'x') { 
      digitalWrite(13,HIGH);
      SerialBT.print("Light ON\n");
    }
     if (char(x) == 'H') {
      digitalWrite(14,LOW);
      SerialBT.print("Light OFF\n");
    }   
    
    if (char(x) == 'h') { 
      digitalWrite(14,HIGH);
      SerialBT.print("Light ON\n");
    }
     if (char(x) == 'Y') {
      digitalWrite(15,LOW);
      SerialBT.print("Light OFF\n");
    }   
    
    if (char(x) == 'y') { 
      digitalWrite(15,HIGH);
      SerialBT.print("Light ON\n");
    }
    if (char(x) == 'I') {
      digitalWrite(16,LOW);
      SerialBT.print("Light OFF\n");
    }   
    
    if (char(x) == 'i') { 
      digitalWrite(16,HIGH);
      SerialBT.print("Light ON\n");
    }
     if (char(x) == 'Z') {
      digitalWrite(25,LOW);
      SerialBT.print("Light OFF\n");
    }   
    
    if (char(x) == 'z') { 
      digitalWrite(25,HIGH);
      SerialBT.print("Light ON\n");
    }
    if (char(x) == 'J') {
      digitalWrite(17,LOW);
      SerialBT.print("Light OFF\n");
    }   
    
    if (char(x) == 'j') { 
      digitalWrite(17,HIGH);
      SerialBT.print("Light ON\n");
    }
     if (char(x) == '0') {
      digitalWrite(18,LOW);
      SerialBT.print("Light OFF\n");
    }   
    
    if (char(x) == '1') { 
      digitalWrite(18,HIGH);
      SerialBT.print("Light ON\n");
    }
    if (char(x) == 'K') {
      digitalWrite(19,LOW);
      SerialBT.print("Light OFF\n");
    }   
    
    if (char(x) == 'k') { 
      digitalWrite(19,HIGH);
      SerialBT.print("Light ON\n");
    }
     if (char(x) == '2') {
      digitalWrite(20,LOW);
      SerialBT.print("Light OFF\n");
    }   
    
    if (char(x) == '3') { 
      digitalWrite(20,HIGH);
      SerialBT.print("Light ON\n");
    }
    if (char(x) == 'L') {
      digitalWrite(21,LOW);
      SerialBT.print("Light OFF\n");
    }   
    
    if (char(x) == 'l') { 
      digitalWrite(21,HIGH);
      SerialBT.print("Light ON\n");
    }
     if (char(x) == '4') {
      digitalWrite(26,LOW);
      SerialBT.print("Light OFF\n");
    }   
    
    if (char(x) == '5') { 
      digitalWrite(26,HIGH);
      SerialBT.print("Light ON\n");
    }
    if (char(x) == 'M') {
      digitalWrite(22,LOW);
      SerialBT.print("Light OFF\n");
    }   
    
    if (char(x) == 'm') { 
      digitalWrite(22,HIGH);
      SerialBT.print("Light ON\n");
    }
    
}

}
