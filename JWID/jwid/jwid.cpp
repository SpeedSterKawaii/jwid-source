// hwid checker made by speedsterkawaii
// can be used for verification, ur gay if no credits.
#include <iostream>
#include <Windows.h>
#include <string>
using std::cout;
DWORD SerialToVerify = (55555555); // this is your Serial number change it.

void pause()
{
	getchar();
}

int main()
{
	SetConsoleTitleA("JWID A Serial Number Checker by SpeedSterKawaii"); // title.
	DWORD SerialNumberInString;
	GetVolumeInformationW(NULL, NULL, NULL, &SerialNumberInString, NULL, NULL, NULL, NULL);
	std::string SerialNumber = std::to_string(SerialNumberInString);
    std::cout << "Here is your Serial Number -> " << SerialNumber << std::endl;
	if (SerialNumberInString == SerialToVerify) // check if hwid matches.
	{
	std::cout << "You are currently verified, nice."; // yes good news.
	}
	else
	{
	std::cout << "Not verified, get the hell outta here."; // lawl.
	}
	pause(); // make sure console doesnt go away.
}