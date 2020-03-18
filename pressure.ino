 
long milNow,milPast;
int z,k,y,s,l,r,le;

 int t=1;
int d=0;
int analogInPin = A0;
    int sensorValue = 0;        // value read from the pressure sensor via the amplifier stage
float outputValue = 0; 

unsigned long h,g,j,val,o,b,x,m,w,val1;
unsigned long percent;
unsigned long pot1,prpot;
unsigned long pot();
unsigned long a;

unsigned long current;
unsigned long previous1;

int potPin = A1; // Select the input pin for the potentiometer
int prpotpin = A2;
int led = 5; // Select the pin for the LED
 int relay = 6;
 int motor = 8;
void setup()
{
 pinMode(led, OUTPUT);
 pinMode(relay, OUTPUT);
 pinMode(motor, OUTPUT);
 // Declare the ledPin as an OUTPUT
 Serial.begin(9600);
}
 
void loop() {
  // The value coming from the sensor
  // The mapped value
 int t=1;
  val = analogRead(potPin);
  val1= analogRead(prpotpin);
  sensorValue = analogRead(analogInPin);            
  //outputValue = map(sensorValue, 10, 1023, 0, 100); 
 d=0; 
 r=0;
 o=0;
 boolean input = digitalRead(2);
 //Serial.print("ff");
 //Serial.println(input);
pot1 = pot( val);
prpot = pot( val1);

 Serial.print("pot1= ");
 Serial.println(pot1);
 /*Serial.print("y=");
 Serial.println(y);*/
 
 s= mm(input,&j,&d,&r);

 // Serial.print("pe");
 //Serial.println(current - previous1);

// Serial.print("s");
// Serial.println(s);
  switch(s){

  case 3:
  
   for(;;){
    
  boolean input = digitalRead(2);
     val = analogRead(potPin);
     val1= analogRead(prpotpin);
     
      prpot = pot( val1);
       pot1 = pot( val);
     // int l = pot1;
     Serial.print("pot");
 Serial.println(pot1);
     sensorValue = analogRead(analogInPin); 
     int pr= pressure(sensorValue);
    if(pr<prpot){
      
  Serial.print("r");
 Serial.println(r);
  s= mm(input,&j,&d,&r);
 /*if(d=0){
   
      current = millis();
      h=pot1*1000+10000+j;
      Serial.print("h=");
      Serial.println(h);
      g=current;
      Serial.print("g=");
      Serial.println(g); 
     
      if(g<=h) {
        blink1(pot1);
        }}*/
        
       
    
/*else{
  digitalWrite(led,HIGH);
  
  }   */   
          
        
    if(r>2){
      digitalWrite(relay, HIGH);
       digitalWrite(led, LOW);
        digitalWrite(motor, LOW);
      delay(1000);
      r=0;
      break;
      }
    Serial.print("d");
   Serial.println(d);
    
     
     
    if(d%2==0){

      if (d==0){
        current = millis();
      h=pot1*1000+10000+j;
      Serial.print("h=");
      Serial.println(h);
      g=current;
      Serial.print("g=");
      Serial.println(g); 
     
      if(g<=h) {
        blink1(pot1);
        
        
        }
        
      
    else
       digitalWrite(led,HIGH);
     }
     
     digitalWrite(motor,LOW);
     }
    else{
        //digitalWrite(led,HIGH);
      digitalWrite(motor,HIGH);
    }
    le = pot1-x;
      le=abs(le);
      Serial.print("le");
   Serial.println(le);
      if(le>2){
       m=b+pot1*1000;
//Serial.print("m");
  // Serial.println(m);
  }
   if( b<m){
        blink1(pot1);
    
    }
    
  else{
  digitalWrite(led,HIGH);
  relay1(pot1);
  }
  
   b=millis();
   if(b-j>=58500){
    digitalWrite(relay, HIGH);
       digitalWrite(led, LOW);
    break;     
   }
      
  
   
    Serial.print("b");
   Serial.println(b);
  Serial.print("j");
   Serial.println(j);
   Serial.print("m");
   Serial.println(m);
    x=pot1;
   // int w = x;
    Serial.print("x");
   Serial.println(x);
    }
    else{
    //  for(;;){
        
 digitalWrite(motor, LOW);
          relay1(pot1);
          digitalWrite(led,HIGH);
            d=0;
      Serial.print("o");
   Serial.println(o);
      o=millis();
     j=o;
       Serial.print("b");
   Serial.println(b);
      if(o-b>=58500){
         digitalWrite(relay, HIGH);
       digitalWrite(led, LOW);
   
     break;
     }//}
     }}
         
         
    
    
    
    break;


  case 2:
    for(;;){
      boolean input = digitalRead(2);
      val = analogRead(potPin);
      pot1 = pot( val);
      Serial.print("pot1");
   Serial.println(pot1);
     sensorValue = analogRead(analogInPin);

 s= mm(input,&j,&d,&r);
         if(s>2){
            digitalWrite(relay, HIGH);
       digitalWrite(led, LOW);
        digitalWrite(motor, LOW);
        delay(1000);
        s=3;
          break;
          
          
          }   
         if(d>2){
          digitalWrite(relay, HIGH);
       digitalWrite(led, LOW);
        digitalWrite(motor, LOW);
        delay(1000);
        d=0;
          break;
          
          }
          
        
   val1= analogRead(prpotpin);
     
      prpot = pot( val1);
int pr= pressure(sensorValue);
      if(pr<prpot){

        
      current = millis();
      
      h=pot1*1000+10000+j;
      Serial.print("h=");
      Serial.println(h);
      g=current;
      Serial.print("g=");
      Serial.println(g); 
     
      if(g<=h) {
        blink1(pot1);
        }
       else{
            s = mm(input,&j,&d,&r);
         
         if(s>1){
          digitalWrite(relay, HIGH);
       digitalWrite(led, LOW);
        digitalWrite(motor, LOW);
        t=1;
        
          break;
          
          }
      //digitalWrite(led,HIGH);
       digitalWrite(motor,HIGH);
       // relay1(pot1); 
            l=pot1-w;
            l=abs(l);
             Serial.print("l");
   Serial.println(l);
          if(l>2){
       m=b+pot1*1000;
Serial.print("m");
   Serial.println(m);
   }
   if( b<m){
        blink1(pot1);
    
    }
    else{
  digitalWrite(led,HIGH);
  relay1(pot1);
  }
    
       
        }
      b=millis();
  
    w=pot1;
      Serial.print("w");
   Serial.println(w);  
     }
     else
     {
      digitalWrite(relay, HIGH);
       digitalWrite(led, LOW);
        digitalWrite(motor, LOW);
        break;
        }
        }
       
       break;
  
  default:

  digitalWrite(relay, HIGH);
  digitalWrite(led, LOW);
  digitalWrite(motor, LOW);
  
  break;



  
  }}

unsigned long pot( unsigned long x){
 
 percent = map(x,0,1023,0,100); 
 
 return percent;

}

int blink1(int p) {
  digitalWrite(led, HIGH);
  digitalWrite(relay, LOW);
  // Turn the ledPin on
      delay(p*10);// On time given by percent value
      digitalWrite(led, LOW); 
      digitalWrite(relay, HIGH);
       // Turn the ledPin off
      delay(1000 - (p*10));
  }

int mm(boolean f, unsigned long*u,int*v,int*q){
   Serial.print("f");
 Serial.println(f);
    
if(f == 1){
  milNow= millis();
  *u=milNow;
      if(milNow - milPast>=3000){
         t=3;
       *v=0;
       *q=*q+1;
      }
      else if((milNow - milPast>=200)&&!(milNow - milPast>=3000)){
        t=2;
       *v=*v+1;
        }
 }
  else{
 milPast = millis();
 t=1;
 }
 Serial.print("current");
 Serial.println(milNow);
 Serial.print("previous1");
 Serial.println(milPast);
 Serial.print("t");
 Serial.println(t);
  return t;
  }

  int pressure(int z){
           
  outputValue = map(z, 0, 1023, 0, 100);
       return outputValue;
      
  }

int relay1(int p){

  
  digitalWrite(relay, LOW);
  // Turn the ledPin on
      delay(p*10);// On time given by percent value
      
       digitalWrite(relay, HIGH);// Turn the ledPin off
      delay(1000 - (p*10));
  


}
  
