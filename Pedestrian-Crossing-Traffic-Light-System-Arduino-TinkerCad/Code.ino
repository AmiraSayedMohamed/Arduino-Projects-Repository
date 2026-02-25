// declare the leds

int red = 10;
int orange = 9;
int green = 8;

// declare pushbutton switch

int pushButton = 7;
int readPushbutton = 0;


void setup()
{
  pinMode(red, OUTPUT);
  pinMode(orange, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(pushButton, INPUT);
  
  digitalWrite(red, LOW);
  digitalWrite(orange, LOW);
  digitalWrite(green, LOW);
  
  Serial.begin(9600);
}

void loop()
{
  int readPushbutton = digitalRead(pushButton);
  
  if(readPushbutton == 0)
  {
  	digitalWrite(green, HIGH);
    digitalWrite(orange, LOW);
    digitalWrite(red, LOW);
  }
  
  else if(readPushbutton == 1)
  {
  	digitalWrite(green, LOW);
    digitalWrite(orange, HIGH);
    digitalWrite(red, LOW);
    Serial.println("Pedistrain are waiting");
    delay(5000);
    
    digitalWrite(green, LOW);
    digitalWrite(orange, LOW);
    digitalWrite(red, HIGH);
    Serial.println("Pedistrain Crossing");
    delay(5000);
  }
  
}














