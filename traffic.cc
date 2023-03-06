int RED =1 ;
int YELLOW = 2;
int GREEN = 0;
int Button = 3;
int red = 8;
int yellow = 9;
int green = 10;
int button = 11;
void setup(){ pinMode(RED,OUTPUT);
              pinMode(YELLOW,OUTPUT);
              pinMode(GREEN,OUTPUT);
              pinMode(Button,INPUT_PULLUP);
              pinMode(red,OUTPUT);
              pinMode(yellow,OUTPUT);
              pinMode(green,OUTPUT);
              pinMode(button,INPUT_PULLUP);
            }
void loop(){
            if(digitalRead(Button)==LOW)
                 {
                    digitalWrite(RED,HIGH);
                    delay(6000);
                    digitalWrite(RED,LOW);
                 }
             else
                 {
                    digitalWrite(RED,HIGH);
                    digitalWrite(green,HIGH);
                    delay(3000);
                    digitalWrite(RED,HIGH);
                    digitalWrite(green,HIGH);
                    digitalWrite(YELLOW,HIGH);
                    digitalWrite(yellow, HIGH);
                    delay(2000);
                    digitalWrite(RED,LOW);
                    digitalWrite(green, LOW);
                    digitalWrite(YELLOW,LOW);
                    digitalWrite(yellow,LOW);
                    digitalWrite(GREEN,HIGH);
                    digitalWrite(red, HIGH);
                    delay(3000);
                    digitalWrite(GREEN,HIGH);
                    digitalWrite(red, HIGH);
                    digitalWrite(YELLOW,HIGH);
                    digitalWrite(yellow, HIGH);
                    delay(2000);
                    digitalWrite(GREEN,LOW);
                    digitalWrite(YELLOW,LOW);
                    digitalWrite(red, LOW);
                    digitalWrite(YELLOW,HIGH);
                    digitalWrite(yellow, HIGH);
             }
}
