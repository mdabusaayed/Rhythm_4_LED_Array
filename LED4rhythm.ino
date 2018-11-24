int soundsensor = 3;
int led1 = 4;
int led2 = 5;
int led3 = 6;
int led4 = 7;
void setup() 
{ 
  pinMode (soundsensor, INPUT);
  pinMode (led1, OUTPUT);
  pinMode (led2, OUTPUT);
  pinMode (led3, OUTPUT);
  pinMode (led4, OUTPUT);
}

void loop()
{
  int sensorvalue = digitalRead (soundsensor);            //if the sound intensity is higher than threshold which is set by us, 
                                                          //then sensor would return the value as 1
  if (sensorvalue == 1)                                    
  {
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, HIGH);
    digitalWrite(led4, HIGH);
  }
  
  else
  {
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
  }
  
}
