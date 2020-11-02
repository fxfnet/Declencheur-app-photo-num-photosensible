const int optoPin=2;
const int sensorPin=A0;

int sensorValue=0;

void setup() {
Serial.begin(9600);
pinMode(optoPin, OUTPUT);
digitalWrite(optoPin,HIGH);
 }

void loop(){
sensorValue=analogRead(sensorPin);
delay (1);
Serial.print (sensorValue);
if(sensorValue < 590){
digitalWrite(optoPin, HIGH);
delay (5);
} else{
digitalWrite(optoPin, LOW);
delay (5);
}
}
