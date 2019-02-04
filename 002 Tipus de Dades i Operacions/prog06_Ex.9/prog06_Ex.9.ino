
/**********************************************************************************
**                                                                               **
**                               Math Is Fun                                     **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
int drive_gb = 100;
long drive_mb, drive_kb, real_drive_mb, real_drive_kb, missing_drive_kb;

//********** Setup ****************************************************************
void setup()
{

  Serial.begin (9600);
  
  Serial.print ("Your HD is ");
  Serial.print (drive_gb);
  Serial.println (" GB large");

  Serial.print ("In theory, it can store");
  Serial.print ( );
  Serial.print ("Megabytes");
  Serial.print ();
  Serial.println (" Kilobytes");

  Serial.print ("But it really only stores");
  Serial.print (" ");
  Serial.println (" ");

  Serial.print ("You are missing ");
  Serial.println (" !");

}

//********** Loop *****************************************************************
void loop()
{
}

//********** Funcions *************************************************************

