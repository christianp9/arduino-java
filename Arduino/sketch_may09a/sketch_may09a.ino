int inpu;
void setup() {
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if(Serial.available() > 0){
    inpu = Serial.read();
    if(inpu == '1'){
      digitalWrite(13, HIGH);
      }else{
        digitalWrite(13, LOW);
        }
    }
}
