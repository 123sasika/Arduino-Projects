int a=8;
int b=9;
int c=10;
int d=11;
int e=12;
int wait=60;
int wait1=140;
int wait2=70;

void setup() {
pinMode(a,OUTPUT);
pinMode(b,OUTPUT);
pinMode(c,OUTPUT);
pinMode(d,OUTPUT);
pinMode(e,OUTPUT);

}

void loop() {
for(int i=0;i<5;i++){
digitalWrite(a,HIGH);
delay(wait1);
digitalWrite(a,LOW);

digitalWrite(b,HIGH);
delay(wait2);
digitalWrite(b,LOW);

digitalWrite(c,HIGH);
delay(wait);
digitalWrite(c,LOW);

digitalWrite(d,HIGH);
delay(wait2);
digitalWrite(d,LOW);

digitalWrite(e,HIGH);
delay(wait1);
digitalWrite(e,LOW);

digitalWrite(d,HIGH);
delay(wait2);
digitalWrite(d,LOW);

digitalWrite(c,HIGH);
delay(wait);
digitalWrite(c,LOW);

digitalWrite(b,HIGH);
delay(wait2);
digitalWrite(b,LOW);

}
}
