int valordoterminaldois = 0;

void setup(){
 pinMode(10, OUTPUT);
 pinMode(9, OUTPUT);
 pinMode(8, OUTPUT);
 
  pinMode(2, INPUT);
}




void loop(){
 
  valordoterminaldois = digitalRead(2);
 
  if(valordoterminaldois == 0 ) {
    digitalWrite(9, HIGH);
    delay(1000);
    digitalWrite(9, LOW);
    delay(1000);
  }
  else{
digitalWrite(10, HIGH);
digitalWrite(9,LOW);
digitalWrite(8, LOW);
 delay(1000);
    
digitalWrite(10, LOW);
digitalWrite(9, LOW);  
digitalWrite(8, HIGH);  
  delay(1000);
    
digitalWrite(10, LOW);
digitalWrite(9, HIGH);  
digitalWrite(8, LOW);
  delay(1000);
 
  }
 
 
 
}