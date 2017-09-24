int a[4] = {10,11,12,13};// the transistor bases

int b[16] = {1,0,14,15,9,8,7,6,16,17,18,19,5,4,3,2};/*anodes of leds/*



int i,j;


void setup()//declaring the pins as output.
{
  for(i=0;i<4;i++)
  {
    pinMode(a[i], OUTPUT);
  }
   for(i=0;i<16;i++)
  {
    pinMode(b[i], OUTPUT);
  }
}

void loop()
{
  for(i=0;i<4;i++)
  {
    digitalWrite(a[i], HIGH);

     for(j=0;j<16;j++)
     {
        digitalWrite(b[j], HIGH);
      delay(50);
        digitalWrite(b[j], LOW);
      delay(50);
     }
    
    digitalWrite(a[i], LOW);
  }
     
}
