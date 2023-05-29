// Every adruino program has this 2 method
int ledRed = 2;
int ledGreen = 10;
int ledYellow = 3;
void setup() {
  // put your setup code here, to run once:
  //The resean I choose pin 13 because it connected to the LED on adruino so if I choose another pin(10), it still
  //connect to the breadboard but in the LED adruino it not connected
  pinMode(ledGreen, OUTPUT); // Tell the adruino which pin we work with and we use it as out
  pinMode(ledRed, OUTPUT);
  pinMode(ledYellow, OUTPUT);
  //or in put

}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(ledGreen, HIGH); // let adruino know what output we gonna work
 // turn the LED in pin 13 to high which mean the voltage to high(= 1 in) programming
 // Because computer blink so fast so we dont know if it is blink or not
  delay(10000); // This will wait the state between ON and OFF so it can blink, it will be on for 100ms
  digitalWrite(ledGreen, LOW); // Set the LED off
  delay(100); // it will be off 900 ms

  digitalWrite(ledYellow, HIGH);// Set the yellow pedestrian to stay last long 3s
  delay(3000);
  digitalWrite(ledYellow, LOW);
  delay(100); // Set the gap time between 3 states 0.1s

  digitalWrite(ledRed, HIGH);
  delay(8000); // set the red pedestrian to 8s
  digitalWrite(ledRed, LOW);
  delay(100);
}
