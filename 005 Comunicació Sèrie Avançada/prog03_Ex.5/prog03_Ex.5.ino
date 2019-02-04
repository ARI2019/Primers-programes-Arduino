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
      result = num/10;

        if (result >= 10) 
        {
          result = result /10;  //Ha de tenir memòria de divisions per saber quants cops ho fa.
          } 

    }
              
    if (Serial.read() == '\n') //look for newline. Is the end of your sentence
    
    {
                              //Ha de comparar els resultats obtinguts i preguntar el port sèrie per un nou número. 
                              
  
      
    }   
     

    else
      {
     
      }
    }
  }
