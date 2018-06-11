byte relayPin[4] = {2,7,8,10};
  
//D2 -> RELAY1
//D7 -> RELAY2
//D8 -> RELAY3
//D10 -> RELAY4
  
void setup(){
  for(int i = 0; i < 4; i++)  pinMode(relayPin[i],OUTPUT);
} 
  
// an sample to switch the 4 relays
  
void loop(){
    
  int i;
  for(i = 0; i < 4; i++)  digitalWrite(relayPin[i],HIGH);
  delay(1000);
  for(i = 0; i < 4; i++)  digitalWrite(relayPin[i],LOW);
  delay(1000);
   
}
