#define pinRelayVentil    12    //Output pin for 3-way-valve
#define pinRelayPumpe     4    //Output pin for pump
#define pinRelayHeater    14    //Output pin for heater

int valHeater;
int valPumpe;
int valVentil;

void setup() {
  Serial.begin(115200);
  pinMode(pinRelayVentil, INPUT);
  pinMode(pinRelayPumpe, INPUT);
  pinMode(pinRelayHeater, INPUT);
}

void loop() {
  valHeater = digitalRead(pinRelayHeater);
  valPumpe = digitalRead(pinRelayPumpe);
  valVentil = digitalRead(pinRelayVentil);
  Serial.print(valVentil);
  Serial.print(" ");
  Serial.print(valPumpe);
  Serial.print(" ");
  Serial.println(valHeater); 
  delay(50);
}
