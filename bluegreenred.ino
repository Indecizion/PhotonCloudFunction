int led(String input);
int red = D6;
int green = D3;
int blue = D0;
void setup()
{
  Particle.function("led", led);
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
}

void loop()
{
  // this loops forever
}


int led(String input)
{
  digitalWrite(red, LOW);
  digitalWrite(green, LOW);
  digitalWrite(blue, LOW);
  if(input.toLowerCase() == "red")
  {
    digitalWrite(red, HIGH);
    digitalWrite(green, LOW);
    digitalWrite(blue, LOW);
  }
  if(input.toLowerCase() == "green")
  {
    digitalWrite(green, HIGH);  
    digitalWrite(red, LOW);
    digitalWrite(blue, LOW);
  }
  if(input.toLowerCase() == "blue")
  {
    digitalWrite(blue, HIGH);  
    digitalWrite(red, LOW);
    digitalWrite(green, LOW);
  }
  else return -1;
}


//input.toLowerCase() needed?