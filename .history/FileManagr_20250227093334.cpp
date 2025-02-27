#include "FileManager.h"
#include "Client.h"

void FileManager::addClient(const Client& client) {
    FilesHelper::saveClient(client, "clients.txt");
}