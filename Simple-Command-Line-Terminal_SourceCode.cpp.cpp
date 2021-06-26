#include <iostream>
main()
{
    std::cout << "\t\t\t\t---------------------------------------------------\n"
                 "\t\t\t\t|                 [by Vishal Ahirwar]              |\n"
                 "\t\t\t\t|         [ Developed in C++ Date : 20.06.21]      |\n"
                 "\t\t\t\t|                       [MENU]                     |\n"
                 "\t\t\t\t| (01) Use 'esc' for quiting S-O shell.            |\n"
                 "\t\t\t\t| (02)if Your command is single word then you heve |\n"
                 "\t\t\t\t|        to type it two times.                     |\n"
                 "\t\t\t\t| Currently Shell is in Development it's just my---|\n"
                 "\t\t\t\t|side hobby project for fun.                       |\n"
                 "\t\t\t\t----------------------------------------------------\n"
                 "\t\t\t\tEnjoy...\n";

    do
    {

        std::string cmd, l, cstr;
        std::cout << "Enter Command To Execute Shortly...\n>>";
        std::cin >> cmd >> l;
        cstr = cmd + " " + l;

        std::cout << cstr;

        system(cstr.c_str());
        
    } while (true);
};
