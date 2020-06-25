
/************************************************
#
#      Filename: main.cpp
#
#        Author: Sh1Yu6
#   Description: ---
#        Create: 2020-06-25 19:57:06
# Last Modified: 2020-06-25 22:06:24
#***********************************************/
#include <iostream>
#include "speechManager.h"
using namespace std;
int main(int argc, char *argv[])
{
    SpeechManager sm;
    int choice = 0;
    
    while(true)
    {
        sm.showMenu();

        cout << "请输入你的选择:";
        cin >> choice;

        switch(choice)
        {
            case 1:
                sm.startSpeech();
                break;
            case 2:
                break;
            case 3:
                break;
            case 0:
                sm.exitSystem();
                break;
            default:
                break;
        }
        cout << endl;

    }
    return 0;
}
