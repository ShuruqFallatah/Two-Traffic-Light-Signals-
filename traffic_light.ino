#define led1 13 
#define led2 12
#define led3 11

#define led4 7 
#define led5 8
#define led6 9

void setup() {
 pinMode(led1,HIGH);
 pinMode(led2,HIGH);
 pinMode(led3,HIGH);

 pinMode(led4,HIGH);
 pinMode(led5,HIGH);
 pinMode(led6,HIGH);
}

void loop() {

 {
   digitalWrite(led1,HIGH);
   digitalWrite(led2,LOW);
   digitalWrite(led3,LOW);
   digitalWrite(led5,LOW);
   digitalWrite(led4,LOW);
   digitalWrite(led6,HIGH);
delay(5000);
   
   digitalWrite(led1,HIGH);
   digitalWrite(led2,LOW);
   digitalWrite(led3,LOW);
   digitalWrite(led4,LOW);
   digitalWrite(led5,HIGH);
   digitalWrite(led6,LOW);
delay(3000);
   digitalWrite(led1,HIGH);
   digitalWrite(led2,HIGH);
   digitalWrite(led5,LOW);
   digitalWrite(led4,HIGH);
   digitalWrite(led3,LOW);
   digitalWrite(led6,LOW);
delay(3000);

   digitalWrite(led1,LOW);
   digitalWrite(led2,LOW);
   digitalWrite(led3,HIGH);
   digitalWrite(led4,HIGH);
   digitalWrite(led5,LOW);
   digitalWrite(led6,LOW);
delay(5000);

   digitalWrite(led1,LOW);
   digitalWrite(led2,HIGH);
   digitalWrite(led5,LOW);
   digitalWrite(led4,HIGH);
   digitalWrite(led3,LOW);
   digitalWrite(led6,LOW);
delay(3000);
   
   digitalWrite(led1,HIGH);
   digitalWrite(led2,LOW);
   digitalWrite(led5,HIGH);
   digitalWrite(led4,HIGH);
   digitalWrite(led3,LOW);
   digitalWrite(led6,LOW);
delay(3000);
}
}
