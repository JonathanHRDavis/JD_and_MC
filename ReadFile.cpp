#include "ReadFile.h"
#include <iostream>
#include <string>
//constructor
ReadFile::ReadFile(const char* file_name)
{
   input_file.open(file_name);
   closed = false;
   _eof = false;
}
//destructor
//rf deals with the struct i deleted but im not sure what i am suppose to delete no that it is a class
ReadFile::~ReadFile()
{
   close(rf);
   delete rf;
}

bool ReadFile::eof()
{
   return _eof;
}

void ReadFile::close()
{
   if (!closed)
   {
      input_file.close();
      closed = true;
   }
}

String* ReadFile::readLine()
{
   if (closed) return NULL;
   if (_eof) return NULL;

   string text;
   _eof = !(getline(input_file, text));

   String* str = new String((const char*) text.c_str());
   return str;
}
