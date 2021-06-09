 const int pinBuzzer =9;
void setup() {
  // initialize the digital pin as an output.

  for ( int i = 11 ; i <= 12 ; i++)
  {
    pinMode(i, OUTPUT);
  }

}

void loop() {
 
       digitalWrite( 11 , HIGH) ;
       digitalWrite( 12 , HIGH) ;
       tone(pinBuzzer,440);
       delay (200) ;
       digitalWrite( 11 , LOW);
       digitalWrite( 12 , LOW) ;
       noTone(pinBuzzer);
       delay (200) ;
}
