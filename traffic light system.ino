int r = 8;
int y=12;
int g=13;
void setup() 
{ pinMode(r, OUTPUT);
pinMode(y, OUTPUT);
pinMode(g, OUTPUT);

}

void loop() 
{digitalWrite(r, HIGH);
 delay(150);
 
digitalWrite(y, HIGH);
delay(700);
digitalWrite(y, LOW);
delay(700);
digitalWrite(y, HIGH);
delay(700);
digitalWrite(y, LOW)
;delay(700);
digitalWrite(y, HIGH);
delay(700);
digitalWrite(y, LOW);
delay(700);

digitalWrite(r, LOW);
digitalWrite(y, LOW);
digitalWrite(g, HIGH);
delay(1000);
digitalWrite(g, LOW);
delay(1000);
}
