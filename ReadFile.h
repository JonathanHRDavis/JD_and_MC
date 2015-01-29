#if !defined READ_H
#define READ_H

#include "Text.h"

#include <fstream>
using namespace std;
//switched it to a class
class ReadFile
{
	private:
		ifstream input_file;
		bool _eof;
		bool closed;
	public:
		ReadFile(const char* file_name);
		~ReadFile();
		
		String* readLine();
		bool eof();
		void close();
};

#endif
