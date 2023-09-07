 int reading = 0;
 int red = 7;
 int yellow = 6;
 int green = 5;
 int butten = 8;
 int counter = 0;

void setup()
{
  for(int i = 5; i <= 7; i++)
  {
    pinMode(i , OUTPUT);
  }
  pinMode(butten , INPUT);
}

void loop()
{
  reading = digitalRead(butten);
  if(reading == HIGH)
  {
    counter++;
    while(digitalRead(butten) == 1);
  }
  if(counter == 1)
  {
    digitalWrite(7 , HIGH);
  }
  else if(counter == 2)
  {
     digitalWrite(6 , HIGH);
  }
   else if(counter == 3)
  {
     digitalWrite(5 , HIGH);
  }
  else
  {
    for(int i = 5; i <= 7; i++)
    {
      digitalWrite(i , LOW);
    }
    counter = 0;
  }
}