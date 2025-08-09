const int relayPin=4;
const int greenPin= 2;
const int yellowPin=3;
const int redPin= 13;
const int trigPin= 5;
const int echoPin=6;
const int buzzPin=12;
const int threshold=15; 
int pingTravelTime;
float distance;
float distanceReal;
bool startSequenceStarted=false; 
void setup() {
  // put your setup code here, to run once:
pinMode(relayPin,OUTPUT); 
pinMode(trigPin,OUTPUT); 
pinMode(greenPin,OUTPUT); 
pinMode(yellowPin,OUTPUT); 
pinMode(redPin,OUTPUT); 
pinMode(echoPin,INPUT); 
pinMode(buzzPin,OUTPUT);  
}

void loop() {
  // put your main code here, to run repeatedly:
measureDistance(); 
if (distanceReal>threshold && startSequenceStarted==false){ 
  startSequence(); 
startSequenceStarted=true; 
}
else if (distanceReal<=threshold){ 
  digitalWrite(buzzPin,HIGH); 
  delay(3000);
  digitalWrite(buzzPin,LOW); 
measureDistance(); 
}
}

//main ignition system, relay pin starts the ignition
void startSequence(){ 
delay(2000); 
digitalWrite(buzzPin,LOW); 
digitalWrite(redPin,HIGH); 
delay(1000); 
digitalWrite(yellowPin,HIGH); 
delay(1000); 
digitalWrite(greenPin,HIGH); 
digitalWrite(relayPin,HIGH); 
delay(5000); 
digitalWrite(relayPin,LOW); 
digitalWrite(redPin,LOW); 
digitalWrite(yellowPin,LOW); 
digitalWrite(greenPin,LOW); 
}

//ultrasonic 
void measureDistance(){ 
  digitalWrite(trigPin,LOW); 
  delayMicroseconds(10); 
  digitalWrite(trigPin,HIGH); 
  delayMicroseconds(10); 
  digitalWrite(trigPin,LOW); 
  pingTravelTime = pulseIn(echoPin,HIGH);
  delayMicroseconds(25); 
  distance= 343.*(pingTravelTime/10000.);
  distanceReal=distance/2.;
  Serial.println(distanceReal); 
  delay(10);
}
