#include "../common.hpp"

int main(int argc, char *argv[])
{
    auto console = new hofnas::common::Console();

    console->info("Starting Hofnas editor...");

    delete console;
}
