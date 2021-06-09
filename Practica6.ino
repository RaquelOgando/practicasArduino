long dis;
long tiem;
int led1 = 11;
void setup( ){
Serial.begin(9600);
pinMode(10, OUTPUT); 
pinMode(9, INPUT);
pinMode(11, INPUT);
}
void loop(){
digitalWrite(10,LOW);
delayMicroseconds(5);
digitalWrite(10, HIGH);
delayMicroseconds(10);
tiem=pulseIn(9, HIGH);
dis= long(0.017*tiem);
if(dis>20){ 
digitalWrite(11, LOW);
}
else
{
digitalWrite(11,HIGH);
}
Serial.println("LA DISTANCIA MEDIDA ES:");
Serial.println(dis);
Serial.println("cm");
delay(500);
}
