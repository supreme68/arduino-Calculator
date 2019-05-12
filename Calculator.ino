#define ROWS 2
#define COLUMNS 4

int inputPins[ROWS] {2,4};
int outputPins[COLUMNS] {5,7,8,9};

void setColumnsVoltageLow(){
     for(int c=1; c<=COLUMNS; c++){ 
         digitalWrite(outputPins[c], LOW);
     }
}

int getPressedbutton(){
    for(int c=1; c<=COLUMNS; c++){ 
         digitalWrite(outputPins[c], HIGH);
          for(int r=1; r<=ROWS; r++){
              if(digitalRead(inputPins[r]) == HIGH){
                   setColumnsVoltageLow();
                   if(r==2){
                        return c+4;
                   }
                   return c;
              } 
         }
      setColumnsVoltageLow();
      }
     return 20;
  }

void setup() {
  for(byte i=0;i<COLUMNS;i++)  //for loop used to make pin mode of outputs as output
  {
    pinMode(outputPins[i],OUTPUT);
  }
  
  for(byte s=0;s<COLUMNS;s++)
  {
    switch (getPressedbutton())  //switch used to specify which button
      {
            case 20:
            Serial.println(1);
       break;  
            case 1:
            Serial.println(2);
       break;
            case 2:
            Serial.println(3);
       break;
            case 3:
            Serial.println("F1");
       break;
            case 4:
            Serial.println(4);
       break;
            case 5:
            Serial.println(5);
       break;
            case 6:
            Serial.println(6);
       break;
            case 7:
            Serial.println("F2");
       break;
            case 8:
            Serial.println(7);
       break;
            case 9:
            Serial.println(8);
       break;
            case 10:
            Serial.println(9);
       break;
            case 11:
            Serial.println("F3");
       break;
            case 12:
            Serial.println("Mode");
       break;
            case 13:
            Serial.println(0);
       break;
            case 14:
            Serial.println("Cancel");
       break;
            case 15:
            Serial.println("Enter");
       break;
            default:
            ;
}
}
}

void loop(){

}
