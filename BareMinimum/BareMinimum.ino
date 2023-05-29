// Every adruino program has this 2 method
void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT); // Tell the adruino which pin we work with and we use it as out
  //or in put

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(13, HIGH); // let adruino know what output we gonna work
 // turn the LED in pin 13 to high which mean the voltage to high(= 1 in) programming
 // Because computer blink so fast so we dont know if it is blink or not
  delay(10); // This will wait the state between ON and OFF so it can blink, it will be on for 100ms
  digitalWrite(13, LOW); // Set the LED off
  delay(10); // it will be off 900 ms
}
