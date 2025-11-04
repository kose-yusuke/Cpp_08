#include "pra_mini_db.hpp"
#include <iostream>
#include <fstream>
#include <signal.h>

std::string path;
std::map<std::string, std::string> db;

void handler(int signalNum) {
    std::ofstream file(path);
    if (!file.is_open())
    {
        std::cout << "Invalid file path" << std::endl;
        exit(signalNum);
    }
    for (std::map<std::string, std::string>::const_iterator it = db.begin(); it != db.end(); ++it)
    {
        file << it->first << " " << it->second << std::endl;
    }
    file.close();
    exit(signalNum);
}

void readDb() {
    std::ifstream file(path);
    if (!file.is_open())
        return ;
    std::string key, value;
    while (file >> key >> value){
        db[key] = value;
    }
}

int main(int argc, char **argv)
{
    if (argc != 3) {
        std::cout << "Wrong number of arguments" << std::endl;
        return 1;
    }
    signal(SIGINT, handler);
    path = argv[2];
    readDb();
    Server server(atoi(argv[1]), db);
    server.run();
    return 0;
}