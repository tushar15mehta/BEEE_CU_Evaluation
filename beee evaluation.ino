const int lamp = 7;
const int lamp2 =8;
boolean x = true;

void setup() {
  Serial.begin(9600);
  pinMode(lamp , OUTPUT);
  pinMode(lamp2, OUTPUT);

}

void loop() {
  int c = analogRead(A0);
  delay(500);
if ( c<=300 && x == true){
 
    digitalWrite(7,LOW);
  digitalWrite(8,HIGH);
  
  ;
    
  x = false;
 
  
  
 delay(1000);

}
else if ( c >300 && x == false){
  
   digitalWrite(8,LOW);
  digitalWrite(7,HIGH);
 x = true;

delay(1000);
}
}