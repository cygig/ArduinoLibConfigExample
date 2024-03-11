#ifndef EXAMPLECLASS_H
#define EXAMPLECLASS_H

#if ARDUINO >= 100
 #include "Arduino.h"
#else
 #include "WProgram.h"
#endif

#include "ExampleClass_Config.h" // This will allow Foxtrot and Golf to be defined
#define DEF_ALPHA 100 // This take precedence over the defintion in the ino sketch

class ExampleClass
{
  public:
    // You can implement the constructor in the header file to access the defintion in Arduino Sketch,
    // Then store the defintiions are regular variables.
    ExampleClass()
    {
      #ifdef DEF_ECHO
        isDefinedEcho=true;
        echoValue = DEF_ECHO;
      #endif

      #ifdef DEF_CHARLIE
        isDefinedCharlie=true;
        charlieValue = DEF_CHARLIE;
      #endif    
    }
    void printDefintions();
  
  private:
    bool isDefinedEcho=false, isDefinedCharlie=false;
    unsigned long echoValue, charlieValue;
};


#endif