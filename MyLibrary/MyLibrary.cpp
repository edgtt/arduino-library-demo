/*
  MyLibrary.cpp - Arduino Library Demo.
  Created by Wing S, July 22, 2024
  Released with License GPLv3
*/

#include "Arduino.h"
#include "MyLibrary.h"

MyLibrary::MyLibrary(int id)
{
    _id = id;
}

void MyLibrary::begin()
{
    // hardware configuration to be called in setup()
}

void MyLibrary::end()
{
    // cleanup before exiting sketch
}

void MyLibrary::doWork()
{
}

