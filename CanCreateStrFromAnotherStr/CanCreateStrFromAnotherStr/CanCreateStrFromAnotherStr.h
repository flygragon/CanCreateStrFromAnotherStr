#pragma once
#include<string>

class CanCreateStrFromAnotherStr {
public:
	bool canConstruct(std::string& ransomNote, std::string& magazine) {
		int Letters[26]{};
		for (int i = 0; magazine[i]; i++)
			Letters[int(magazine[i] - 'a')] ++;
		for (int i = 0; ransomNote[i]; i++) {
			if (Letters[int(ransomNote[i] - 'a')] <= 0)
				return false;
			Letters[int(ransomNote[i] - 'a')] --;
		}
		return true;
	}
};