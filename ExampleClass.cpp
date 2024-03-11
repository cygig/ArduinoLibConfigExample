#include "ExampleClass.h"
// #include "ExampleClass_DefineDelta.h" // You can do include this to define Delta

void ExampleClass::printDefintions()
{
  Serial.print("DEF_ALPHA is ");
  Serial.println(DEF_ALPHA);


  #ifdef DEF_BRAVO
    Serial.print("DEF_BRAVO is defined as ");
    Serial.println(DEF_BRAVO);
  #else
    Serial.println("DEF_BRAVO is not defined.");
  #endif

  // Note the different between #if and if()
  if (isDefinedCharlie)
  {
    Serial.print("DEF_CHARLIE is defined as ");
    Serial.println(charlieValue);
  }
  else
    Serial.println("DEF_CHARLIE is not defined.");


  #ifdef DEF_DELTA
    Serial.print("DEF_DELTA is defined as ");
    Serial.println(DEF_DELTA);
  #else
    Serial.println("DEF_DELTA is not defined.");
  #endif


  if(isDefinedEcho)
  {
    Serial.print("DEF_ECHO is defined as ");
    Serial.println(echoValue);
  }
  else
    Serial.println("DEF_ECHO is not defined.");

  
  #ifdef DEF_FOXTROT
    Serial.print("DEF_FOXTROT is defined as ");
    Serial.println(DEF_FOXTROT);
  #else
    Serial.println("DEF_FOXTROT is not defined."); 
  #endif


  #ifdef DEF_GOLF
    Serial.print("DEF_GOLF is defined as ");
    Serial.println(DEF_GOLF);
  #else
    Serial.println("DEF_GOLF is not defined."); 
  #endif

}