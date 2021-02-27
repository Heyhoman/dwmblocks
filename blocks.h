//Modify this file to change what commands output to your statusbar, and recompile using the make command.
#define PATH(name) "/home/tom/.local/bin/blocks/"name
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"Mem: ",	PATH("memory.sh"),	30,			0},
	{"",		PATH("date.sh"),	5,			0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
