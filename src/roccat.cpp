#include <iostream>
#include <string>

int main() {
    std::string cmd = "roccat-vulcan";
    std::string newln = ""; // " \\";

    // Colors
    std::string red = "32,0,0";
    std::string purple = "16,0,32";
    std::string blue = "0,0,32";


    // Key sections
    std::string top_keys[13];
    std::string number_line[14];
    std::string qwerty[35];
    std::string arrows[4];
    std::string qwerty_actions[13];
    std::string actions[9];
    std::string keypad[9];
    std::string keypad_frame[8];

    // Top line of keys
    for(int i = 0; i < 12; i++) {
        top_keys[i] = "F" + std::to_string(i + 1);
    }
    top_keys[12] = "ESC";

    // Number line
    for(int i = 0; i < 10; i++) {
        number_line[i] = std::to_string(i);
    }
    number_line[10] = "MINUS";
    number_line[11] = "EQUAL";
    number_line[12] = "BACKSPACE";
    number_line[13] = "GRAVE";


    // Text Character Section
    int counter = 0;
    for(int i = 65; i < 91; i++) {
        qwerty[counter] = i;
        counter++;
    }
    qwerty[26] = "BACKSLASH";
    qwerty[27] = "LEFTBRACE";
    qwerty[28] = "RIGHTBRACE";
    qwerty[29] = "SEMICOLON";
    qwerty[30] = "APOSTROPHE";
    qwerty[31] = "COMMA";
    qwerty[32] = "DOT";
    qwerty[33] = "SLASH";
    qwerty[34] = "102ND";

    // Arrows
    arrows[0] = "LEFT";
    arrows[1] = "RIGHT";
    arrows[2] = "UP";
    arrows[3] = "DOWN";

    // Qwerty actions
    qwerty_actions[0] = "TAB";
    qwerty_actions[1] = "CAPSLOCK";
    qwerty_actions[2] = "LEFTSHIFT";
    qwerty_actions[3] = "LEFTCTRL";
    qwerty_actions[4] = "LEFTMETA";
    qwerty_actions[5] = "LEFTALT";
    qwerty_actions[6] = "SPACE";
    qwerty_actions[7] = "RIGHTALT";
    qwerty_actions[8] = "COMPOSE"; // Missing Fn key
    qwerty_actions[9] = "COMPOSE";
    qwerty_actions[10] = "RIGHTCONTROL";
    qwerty_actions[11] = "RIGHTSHIFT";
    qwerty_actions[12] = "ENTER";


    // Actions 
    actions[0] = "SYSRQ";
    actions[1] = "SCROLLLOCK";
    actions[2] = "PAUSE";
    actions[3] = "INSERT";
    actions[4] = "HOME";
    actions[5] = "PAGEUP";
    actions[6] = "DELETE";
    actions[7] = "END";
    actions[8] = "PAGEDOWN";
    

    // Keypad
    for(int i = 1; i <= 9; i++) {
        keypad[i - 1] = "KP" + std::to_string(i);
    }

    // Keypad frame
    keypad_frame[0] = "KP0";
    keypad_frame[1] = "KPDOT";
    keypad_frame[2] = "KPENTER";
    keypad_frame[3] = "KPPLUS";
    keypad_frame[4] = "KPMINUS";
    keypad_frame[5] = "KPASTERISK";
    keypad_frame[6] = "KPSLASH";
    keypad_frame[7] = "NUMLOCK";




    // Print command
    std::cout << cmd; // << newln;

    std::cout << " -c 0:" << purple << newln;
    std::cout << " -c 1:0,0,0" << newln;
    std::cout << " -c 2:0,0,0" << newln;
    std::cout << " -c 3:0,0,0" << newln;
    std::cout << " -c 4:0,0,0" << newln;
    std::cout << " -c 5:0,0,0" << newln;
    std::cout << " -c 6:0,0,0" << newln;


    for(int i = 0; i < 13; i++) {
        std::cout << " -k KEY_" << top_keys[i] << ":" << red << newln;
    }
    
    for(int i = 0; i < 14; i++) {
        std::cout << " -k KEY_" << number_line[i] << ":" << purple  << newln;
    }

    for(int i = 0; i < 4; i++) {
        std::cout << " -k KEY_" << arrows[i] << ":" << red << newln;
    }

    for(int i = 0; i < 35; i++) {
        std::cout << " -k KEY_" << qwerty[i] << ":" << blue << newln;
    }

    for(int i = 0; i < 9; i++) {
        std::cout << " -k KEY_" << actions[i] << ":" << purple << newln;
    }

    for(int i = 0; i < 9; i++) {
        std::cout << " -k KEY_" << keypad[i] << ":" << blue << newln;
    }

    return 0;
}