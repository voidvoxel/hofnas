#include "../common.cpp"

int main(int argc, char *argv[])
{
    auto console = new hofnas::common::Console();

    console->info("Starting Hofnas engine...");

    delete console;
}
