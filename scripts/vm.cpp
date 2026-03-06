/*

--COMMAND TABLE--

x-- : System Commands
x++ : Inc Commands

0-- : Exit
1-- : Display system info
2-- : Display C++ version

0++ : Increment the pile by 1
1++ : Decrement the pile by 1
2++ : Divide the pile by 2
3++ : Print the pile
4++ : Convert pile to ASCII
5++ : Multiply pile by 2

*/
#include <iostream>
#include <string>
#include <list>
#include <cstdlib>

void successful() {
	std::cout << "[SYSTEM] Process was successful.";
}

void unsuccessful() {
	std::cout << "[SYSTEM] Process was unsuccessful.";
}

int inc;
void exec(std::string opcode) {
	if(opcode == "0--") {
	       std::cout << "[SYSTEM] Exiting...\n";
	       successful();
	       std::exit(0);
    } else if(opcode == "1--") {
        #ifdef _WIN32
        	system("echo '[SYSTEM]'");
            system("systeminfo");
        #elif defined(__linux__)
            system("echo '[SYSTEM]'");
            system("uname -a");
        #elif defined(__APPLE__)
            system("echo '[SYSTEM]'");
        	system("system_profiler");
        #else
        	std::cout << "[SYSTEM] Your operating system is not supported.";
        #endif
    } else if(opcode == "2--") {
    	std::cout << __cplusplus;
    } else if(opcode == "0++") {
    	inc++;
    } else if(opcode == "1++") {
    	inc--;
    } else if(opcode == "2++") {
    	inc = inc / 2;
    } else if(opcode == "3++") {
    	std::cout << inc;
    } else if (opcode == "4++") {
    	char ascii = inc;
    	std::cout << ascii;
    } else if(opcode == "5++") {
    	inc = inc * 2;
    } else if(opcode == "\n") {
    	unsuccessful();
    	std::exit(0);
    }
}

void loop() {
	while(1) {
		std::cout << "\n[SYSTEM] Enter a command: ";
		std::string command;
		std::getline(std::cin, command);
		if(command.empty()) {
			unsuccessful();
			std::exit(0);
		} else {
			exec(command);
		}
	}
}

int main() {
    loop();
    return 0;
}
