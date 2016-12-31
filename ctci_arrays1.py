# Cracking the Coding Interview, 4th ed.
# Arrays: Implement an algorithm to determine if a string has all unique characters. What if you
# can not use additional data structures?

def unique(string):
	return len(set(string)) == len(string)

string = "hello"

print(unique(string)) # should print False. WORKS.