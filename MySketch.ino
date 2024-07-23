/*
   using my library
*/

#include <MyLibrary.h>

MyLibrary mylib(1);

void setup()
{
    mylib.begin();
}

void loop()
{
    mylib.doWork();
    delay(3000);
}
