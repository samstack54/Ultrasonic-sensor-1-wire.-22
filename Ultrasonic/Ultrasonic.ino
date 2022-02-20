 // Ultrasonic Sensor HC-SR04

 const int trigPin = 12;
 const int echoPin = 11;
 long duration;
 int distance;
 
 void setup() {
 pinMode(trigPin, OUTPUT); 
 pinMode(echoPin, INPUT); 
 Serial.begin(9600); 
 }
 
 void loop() {
 delay(50) ;
 digitalWrite(trigPin, LOW); // Clears the trigPin
 delayMicroseconds(5);
 digitalWrite(trigPin, HIGH);
 delayMicroseconds(15);
 digitalWrite(trigPin, LOW);

 duration = pulseIn(echoPin, HIGH); //travel time us
 distance= duration*0.0344/2;

  if (distance <= 400 && distance >= 2)  {
   Serial.print(distance);
   Serial.println(" cm");
  }
 }
