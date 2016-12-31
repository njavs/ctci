# Write a method to decide if two strings are anagrams or not.

def anagram(string1, string2):
	if sorted(string1) == sorted(string2):
		anagramBool = 1
	else:
		anagramBool = 0
	return anagramBool
		
string1 = "cat"
string2 = "act"

print(anagram(string1, string2))