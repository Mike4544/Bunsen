#include "periodic.h"

// @Path src\cli.h
// Contains the CLI function(s)

// Contains the commands
char commands[16][MAX_STRING];

void credits();
void repo();
void help();
void version();
void command(char command[MAX_STRING]);

void cli();