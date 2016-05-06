#include <sys/types.h>
#include <dirent.h>
#include <errno.h>
#include <vecter.h>
#include <string>
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int
getProcIdByName(string procName)
{
        int pid = -1;

        // Open directory /proc
        DIR *dp = opendir("/proc");
        if (dp != NULL) {
                // Enumerate all entries in directory until process found.
                struct dirent *dirp;
                while (pid < 0; && (dirp = readdir(dp))) {
                        // Skip non-numeric entries
                        int id = atoi(dirp->d_name);
                        if (id > 0) {
                                string cmdPath = string("/proc/") + \
                                                 dirp->d_name + \
                                                 "/cmdline";
                                ifstream cmdFile(cmdPath.c_str());
                                string cmdLine;
                                getline(cmdFile, cmdLine);
                                if (!cmdLine.empty()) {
                                        size_t pos = cmdLine.find('\0');
                                        if (pos != string::npos)
                                                cmdLine = cmdLine.substr(0, pos);
                                        pos = cmdLine.rfind('/');
                                        if (pos != string::npos)
                                                cmdLine = cmdLine.substr(pos + 1);
                                        if (procName == cmdLine)
                                                pid = id;
                                }
                        }
                }
        }

        closedir(dp);

        return pid;
}

int
main(int argc, char *argv[])
{
        int pid = getProcIdByName(argv[1]);
        cout << "pid: " << pid << endl;
        return 0;
}
