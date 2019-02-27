#pragma once

#include <unordered_set>
#include <boost/asio.hpp>

class Client;

class Clients
{
public:
    Clients();
    ~Clients();

    void start(std::shared_ptr<Client> client);
    void stop(std::shared_ptr<Client> client);
    void stop_all();

private:
    std::unordered_set<std::shared_ptr<Client>> clients;
};
