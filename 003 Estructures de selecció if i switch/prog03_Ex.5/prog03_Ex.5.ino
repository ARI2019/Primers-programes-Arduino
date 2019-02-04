/**********************************************************************************
**                                                                               **
**                          Control Structures                                   **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
int Indicador;

//********** Setup ****************************************************************
void setup()              // run once, when the sketch starts
{
  Serial.begin(9600);     // set up Serial library at 9600 bps

  if (Indicador <= 3.5)

  Serial println(Qualificació energètica = A);

   else if ( ( Indicador > 3.5) && (Indicador < 6.5) )

   Serial println(Qualificació energètica = B);

    else if ( ( Indicador > 6.5) && (Indicador < 11.5) )

    Serial println(Qualificació energètica = C);

      else if( ( Indicador > 11.1) && (Indicador < 17.7) )

      Serial println(Qualificació energètica = D);

        else if ( ( Indicador > 17.7) && (Indicador < 38.2) )

        Serial println(Qualificació energètica = E);

          else if ( ( Indicador > 38.2) && (Indicador < 43.2) )

          Serial println(Qualificació energètica = F);

            else

            ( Indicador >= 43.2 )

            Serial println(Qualificació energètica = G);

}

//********** Loop *****************************************************************
void loop()   // we need this to be here even though its empty
{
}

//********** Funcions *************************************************************
