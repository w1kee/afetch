#define LOWERCASE 1
//---------------------------------------------------------------------------------------------
#define SHELLPATH 1
//---------------------------------------------------------------------------------------------
#define BLOCKS 0
//---------------------------------------------------------------------------------------------
#define USERTEXT    ""
#define DISROTEXT   ""
#define KERNELTEXT  ""
#define UPTIMETEXT  ""
#define SHELLTEXT   ""
#define PACKAGETEXT ""
//---------------------------------------------------------------------------------------------
#define TEXTCOLOUR WHITE
//---------------------------------------------------------------------------------------------

//#define OVERRIDECOLOUR
#define CUSTOMCOLOUR "\033[1;36m"

//---------------------------------------------------------------------------------------------

#define CUSTOMART 0

#define COL1 BRED     "\033[1;37m       \n\033[1;36m" //info ends on column 7
#define COL2 BRED     "\033[1;37m ___     \033[1;36m"
#define COL3 BRED     "\033[1;37m/   \\    \033[1;36m" //info starts on column 2
#define COL4 BRED     "\033[1;37m|   |__  \033[1;36m"
#define COL5 BRED     "\033[1;37m\\___/  \\ \033[1;36m"
#define COL6 BRED     "\033[1;37m    \\__/ \033[1;36m"
#define COL7 BRED     "\033[1;37m         \033[1;36m"
#define COL8 BRED     ""


//---------------------------------------------------------------------------------------------
//---------------------------------------------------------------------------------------------
// Probably don't change stuff below here


#define RESET "\e[0m"


#ifdef OVERRIDECOLOUR


		/* BOLD */
	#define BBLACK CUSTOMCOLOUR
	#define BRED CUSTOMCOLOUR
	#define BGREEN CUSTOMCOLOUR
	#define BYELLOW CUSTOMCOLOUR
	#define BBLUE CUSTOMCOLOUR
	#define BMAGENTA CUSTOMCOLOUR
	#define BCYAN CUSTOMCOLOUR
	#define BWHITE CUSTOMCOLOUR
		/* NORMAL */
	#define BLACK "\033[0;30m"
	#define RED "\033[0;31m"
	#define GREEN "\033[0;32m"
	#define YELLOW "\033[0;33m"
	#define BLUE "\033[0;34m"
	#define MAGENTA "\033[0;35m"
	#define CYAN "\033[0;36m"
	#define WHITE "\033[0;37m"

#else

		/* BOLD */
	#define BBLACK "\033[1;30m"
	#define BRED "\033[1;31m"
	#define BGREEN "\033[1;32m"
	#define BYELLOW "\033[1;33m"
	#define BBLUE "\033[1;34m"
	#define BMAGENTA "\033[1;35m"
	#define BCYAN "\033[1;36m"
	#define BWHITE "\033[1;37m"
		/* NORMAL */
	#define BLACK "\033[0;30m"
	#define RED "\033[0;31m"
	#define GREEN "\033[0;32m"
	#define YELLOW "\033[0;33m"
	#define BLUE "\033[0;34m"
	#define MAGENTA "\033[0;35m"
	#define CYAN "\033[0;36m"
	#define WHITE "\033[0;37m"
#endif
//
//I wouldn't suggest trying to change this, theres no need to and it'll break things
typedef struct distinfo {
	char * dcol1;
	char * dcol2;
	char * dcol3;
	char * dcol4;
	char * dcol5;
	char * dcol6;
	char * dcol7;
	char * dcol8;
	char * getpkg;
} Dist;
