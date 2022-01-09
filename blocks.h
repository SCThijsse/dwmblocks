//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
  /*Icon*/ /*Command*/         /*Update Interval*/ /*Update Signal*/
  {"",      "dwb updates",     3600,               0},
  {"",      "dwb volume",      1,                  0},
  {"",      "dwb memory",      1,                  0},
  {"",      "dwb disk",        1,                  0},
  {"",      "dwb cpu",         1,                  0},
  {"",      "dwb wifi",        1,                  0},
  {"",      "dwb battery",     5,                  0},
  {"",      "dwb datee",       5,                  0},
  {"",      "dwb timee",       1,                  0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " |";
static unsigned int delimLen = 5;
