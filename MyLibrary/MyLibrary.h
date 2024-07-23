/*
  MyLibrary.h - Arduino Library Demo.
  Created by Wing S, July 22, 2024
  Released with License GPLv3
*/
#ifndef MY_LIBRARY_H
#define MY_LIBRARY_H

#include "Arduino.h"

class MyLibrary
{
    public:
        MyLibrary(int id);
        void begin();       // called in setup()
        void doWork();      // camel cases operations
        void end();         // (optional) to clean up
    private:
        int _id;
};

#endif
