//
// Created by dewitt on 22/02/19.
//

#include "../include/appli.h"

int appli()
{
    clear();
    int module;

    bool quit = false;

    while (!quit)
    {
        cout << "Choose a module :" << endl;
        display_modules();

        cin>>module;
        switch(module)
        {
            case 0:
                quit = true;
                break;
            case 1:
                module_1();
                break;
            case 2:
                module_2();
                break;
            case 3:
                module_3();
                break;
            case 4:
                module_4();
                break;
            case 5:
                module_5();
                break;
            case 6:
                module_6();
                break;
            case 7:
                module_7();
                break;
            case 8:
                module_8();
                break;
            case 9:
                module_9();
                break;
            case 10:
                module_10();
                break;
            case 11:
                module_11();
                break;
            case 12:
                needy_3();
                break;
            default:
                cout << "Module not found." << endl;
                break;
        }
    }
    return 0;
}

void clear()
{
    std::cout << "\033[02J\033[1;1H";
}

void menu()
{
    std::cout << "Press any key to continue." << std::endl;
    std::cin.ignore();
    std::cin.get();
}