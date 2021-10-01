void setup() {
  // put your setup code here, to run once:
 pinMode(3,OUTPUT); 
 pinMode(2,OUTPUT); 
 pinMode(1,OUTPUT); 
} 
const int B=0; 
const int R=1; 
const int G=2; 
const int Y=3; 
const int Bl=4; 
const int M=5; 
const int C=6; 
const int W=7; 

void loop() {
  // put your setup code here, to run once:
  for(int i=B; i<=W; i++)
  {
    display(i);
    delay(500);
  }
}  
   void display(int colour_number)
{ 
  switch(colour_number){ 
  case B: digitalWrite(1,0);
          digitalWrite(2,0);
          digitalWrite(3,0);
          break;
  case R: digitalWrite(1,0);
          digitalWrite(2,0);
          digitalWrite(3,1);
          break;
  case G: digitalWrite(1,0);
          digitalWrite(2,1);
          digitalWrite(3,0);
          break;                
  case Y: digitalWrite(1,0);
          digitalWrite(2,1);
          digitalWrite(3,1);
          break;
  case Bl: digitalWrite(1,1);
          digitalWrite(2,0);
          digitalWrite(3,0);
          break;        
  case M: digitalWrite(1,1);
          digitalWrite(2,0);
          digitalWrite(3,1);
          break;         
  case C: digitalWrite(1,1);
          digitalWrite(2,1);
          digitalWrite(3,0);
          break;
  case W: digitalWrite(1,1);
          digitalWrite(2,1);
          digitalWrite(3,1);
          break;        

}
}
