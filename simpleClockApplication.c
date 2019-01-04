#include <windows.h> //for message box

//we don't need stdio.h header file in this program

#include <time.h>

int WINAPI WinMain(HINSTANCE hInstance,HINSTANCE hPrevInstance,LPSTR lpCmdLine,int nCmdShow) //API - application program interface, winmain is similar to main
{
	time_t rawtime; //declared in time.h
	//time_t is suitable for storing calender time
	
	struct tm * timeinfo;
	
	time( &rawtime );
	// returns the time since january 1, 1970 in seconds
	
	timeinfo = localtime( &rawtime );
	//localtime converts time_t into calender time
	
	MessageBox(NULL, asctime(timeinfo),"Time Now",MB_OK);//defined in windows.h
	//asctime returns a pointer to string which represents the day and time
	//MB_OK will create OK button
	
	return 0;
	
}
