//********** Variables ********************************************************

num = Serial.parseInt();

//********** Setup ************************************************************

void setup() { 
  Serial.begin(9600);       
  Serial.println("Entra un número?");
}
//********** Loop *************************************************************

void loop() {
  while (Serial.available() > 0) 
    {  
      Serial.read (num);
      result = num / 2;   

         if ((1 != result) || (result != 0))
         {
          result = result/2;
         }
 
    if (Serial.read() == '\n') //look for newline. Is the end of your sentence
    
    { 
      num = Serial.read();

        if (result = 0);
        {
          Serial.print("El ");
          Serial.print(num);
          Serial.print(" es parell"); 
        }   
     }

    else
      {
      Serial.print("El ");
      Serial.print(num);
      Serial.print(" es senar"); 
      }
    }
  }
