#include"arrays_strings.h"

string CompressString(string str)
{
	if(str.empty()) return str;
	int count = 0;
	string count_string;
	char first_char = str.at(0);
	string *compressed_str = new string();
	stringstream ss;
	for(size_t i=0; i<str.size();i++)
	{
		if(first_char == str.at(i)){
			count++;
		}else{
			compressed_str->append(string(&first_char,1));				
			ss << count;
			ss >> count_string;
			ss.clear();
			compressed_str->append(count_string);
			first_char = str.at(i);
			count=1;
		}
	}
	compressed_str->append(string(&first_char,1));
	ss << count;
	ss >> count_string;
	compressed_str->append(count_string);

	if(compressed_str->size() > str.size())
		return str;
	return *compressed_str;
}