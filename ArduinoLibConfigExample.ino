#define DEF_BRAVO 200 // Bravo will not be defined because it is being accessed in ExampleClass.cpp
#define DEF_ECHO 500  // Echo will be defined because it is being accessed in the constructor implemented in ExampleClass.h 

#include "ExampleClass_DefineDelta.h" // Delta will not be defined because ExampleClass is not aware of the existence of this file
#include "ExampleClass.h"
// #include "ExampleClass.cpp" // You cannot do this to define Bravo, Charlie and Alpha

#define DEF_CHARLIE 300 // Charlie will not be defined, even if accessed in constructor, because it is defined after including ExampleClass.h 
#define DEF_ALPHA 999 // Alpha will NOT be redefined to 999, stays at 100 and you will get a compiler warning

// Additionally, Foxtrot and Golf will be defined as ExampleClass_Confg.h is included in ExampleClass.h

ExampleClass ec;

void setup()
{
  
  Serial.begin(9600);

  while (Serial.available()==0){}
  ec.printDefintions();
  /*
    DEF_ALPHA is 100
    DEF_BRAVO is not defined.
    DEF_CHARLIE is not defined.
    DEF_DELTA is not defined.
    DEF_ECHO is defined as 500
    DEF_FOXTROT is defined as 600
    DEF_GOLF is defined as 700
  */
}

void loop()
{

}