// spoofer base Made By Seized (clqh).
#include <iostream>

using namespace std;

void helpsection();
void spoofsection();
void cleanersection();
void toolsection();

void spoofhwid();
void spoofguid();
void spoofmacaddress();
void spoofdiskid();
void spoofvolumeid();
void spoofpcname();

void cleanvalorant();
void cleanfortnite();
void cleanrust();
void cleanr6s();

void activatewindows();
void checkserials();

int main() {
    while (true) {

        cout << "Welcome to spoofer base" << endl
             << "" << endl
             << "Type help to see the available spoofing options." << endl
             << "" << endl;

        string input;
        getline(cin, input);

        if (input == "help") {
            helpsection();
        } else if (input == "spoofsection") {
            spoofsection();
        } else if (input == "cleanersection") {
            cleanersection();
        } else {
            cout << "Invalid input. Please try again." << endl;
        }
    }
}


void helpsection() {
    while (true) {

    cout << "1. Spoofing Section" << endl
         << "2. Trace Cleaner Section" << endl
         << "3. Tool Section" << endl
         << "3. Go Back" << endl
         << "" << endl;

        string input;
        getline(cin, input);

    if (input == "1") {
        spoofsection();
    } else if (input == "2") {
        cleanersection();
    } else if (input == "3") {
        toolsection();
    } else if (input == "4") {
        main();
    } else {
        cout << "Invalid input. Please try again." << endl;
       }
    }
}


void spoofsection() {
    while (true) {

    cout << "1. HWID" << endl
         << "2. GUID" << endl
         << "3. MAC Address" << endl
         << "4. Disk ID" << endl
         << "5. Volume ID" << endl
         << "6. PC Name" << endl
         << "7. Go Back" << endl
         << "" << endl;

        string input;
        getline(cin, input);

    if (input == "1") {
        spoofhwid();
    } else if (input == "2") {
        spoofguid();
    } else if (input == "3") {
        spoofmacaddress();
    } else if (input == "4") {
        spoofdiskid();
    } else if (input == "5") {
        spoofvolumeid();
    } else if (input == "6") {
        spoofpcname();
    } else if (input == "7") {
        main();
    } else {
        cout << "Invalid input. Please try again." << endl;
       }
    }
}


void cleanersection() {
    while (true) {

    cout << "1. Valorant" << endl
         << "2. Fortnite" << endl
         << "3. Rust" << endl
         << "4. Rainbow Six Siege" << endl
         << "5. Go Back" << endl
         << "" << endl;

    string input;
    getline(cin, input);

        if (input == "1") {
            cleanvalorant();
        } else if (input == "2") {
            cleanfortnite();
        } else if (input == "3") {
            cleanrust();
        } else if (input == "4") {
            cleanr6s();
        } else if (input == "5") {
            main();
        } else {
            cout << "Invalid input. Please try again." << endl;
        }
    }
}


void toolsection() {
    while (true) {

        cout << "1. Check your serials" << endl
             << "2. Activate Windows" << endl
             << "3. Go Back" << endl
             << "" << endl;

        string input;
        getline(cin, input);

        if (input == "1") {
            checkserials();
        } else if (input == "2") {
            activatewindows();
        } else if (input == "3") {
            main();
        } else {
            cout << "Invalid input. Please try again." << endl;
        }
    }
}


void spoofhwid() {
    cout << "sexy hwid spoofed" << endl;
}

void spoofguid() {
    cout << "sexy guid spoofed" << endl;
}

void spoofmacaddress() {
    cout << "sexy mac address spoofed" << endl;
}

void spoofdiskid() {
    cout << "sexy disk id spoofed" << endl;
}

void spoofvolumeid() {
    cout << "sexy volume id spoofed" << endl;
}

void spoofpcname() {
    cout << "sexy pc name spoofed" << endl;
}



void cleanvalorant() {
    cout << "valorant traces cleared" << endl;
}

void cleanfortnite() {
    cout << "fortnite traces cleared" << endl;
}

void cleanrust() {
    cout << "rust traces cleared" << endl;
}

void cleanr6s() {
    cout << "rainbow six siege traces cleared" << endl;
}

void checkserials() {
    cout << "checking serials" << endl;
}

void activatewindows() {
    cout << "windows activated" << endl;
}
//pal i hope you know that you would need to use your own drivers to spoof
