
const int lf=9;///frontleft
const int lb=8;///backleft
const int rb=7;///backright
const int rf=6;//front right


void setup() {
  pinMode(lf,OUTPUT);
  pinMode(rf,OUTPUT);
  pinMode(lb,OUTPUT);
  pinMode(rb,OUTPUT);  
  Serial.begin(9600);
}

void loop() {
  while(!Serial.available());
  byte value=Serial.read();
  Serial.println(value);


  switch(value){
    case '1':
       digitalWrite(lf,HIGH);
       digitalWrite(rf,HIGH);
       digitalWrite(lb,LOW);
       digitalWrite(rb,LOW);
       
       break;

    case '2':
       digitalWrite(lf,LOW);
       digitalWrite(rf,LOW);
       digitalWrite(lb,HIGH);
       digitalWrite(rb,HIGH);
       break;


    case '3':
       digitalWrite(lf,HIGH);
       digitalWrite(rf,LOW);
       digitalWrite(lb,LOW);
       digitalWrite(rb,LOW);
       break;

    case '4':
       digitalWrite(lf,LOW);
       digitalWrite(rf,HIGH);
       digitalWrite(lb,LOW);
       digitalWrite(rb,LOW);
       break;
  }
}
