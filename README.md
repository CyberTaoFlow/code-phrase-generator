# Code Phrase Generator

There's plenty of times you need code phrase... aren't there? Well I've had that problem, so I wrote this script to help out. 

# Usage

Just running the script from the commandline will randomly generate 5 code phrases::

	Gamma:Code-Phrase-Generator sroberts$ python code_phrase_generator.py 
	- evolve roman
	- limit endeavor
	- askari cobras
	- hellspawn mystic
	- manpower anvil

Using the help option displays other possibilities:

	Gamma:Code-Phrase-Generator sroberts$ python code_phrase_generator.py --help
	code_phrase_generator.py: 
	Code Phrase Generator
	-n <x> or --number <x>: Number of sample code phrases given. (Default is 5)
	-p <prefix> or --prefix <prefix>: Uses a prefix word along with a random codeword instead of two codewords.
	-w <file> or --wordlist <file>: Uses another wordlist to generate code phrases from.

	 	for help use --help
	Gamma:Code-Phrase-Generator sroberts$ 

## Operators
* -n <x> or --number <x>

	* Generates <x> code phrases. Without selecting this option the default is 5.

* -p <prefix> or --prefix <prefix>

	* Generates phrases using <prefix> as the first word. Useful for related groups of code phrases.

* -w <file> or --wordlist <file>

	* Imports file to use for generating random phrases instead of the default wordlist.txt. 

Multiple operators can be used together. 

# License

	Ehhh... feel free to do whatever with this. The wordlist was the toughest part to put together. Just don't be a jerk. 