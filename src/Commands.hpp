#pragma once

#include <Geode/Geode.hpp>
#include <functional>
#include <string>
#include <vector>

namespace hc {

// Shared hack state, read by the hooks in Hooks.cpp
struct State {
    bool noclip = false;
    bool safemode = true;
    bool unlockAll = false;
    bool cheated = false;    // set when a cheat touched the current run
    bool forceKill = false;  // lets /kill bypass noclip
    float speed = 1.f;
    int blocked = 0;         // deaths prevented by noclip
};

inline State& state() {
    static State s;
    return s;
}

using Args = std::vector<std::string>;

struct Command {
    std::string name;
    std::string usage;
    std::string desc;
    std::string category;
    std::function<std::string(Args const&)> run;
};

std::vector<Command> const& commands();

// Runs one console line such as "/speed 0.5". Returns text to show (may contain '\n').
std::string execute(std::string const& line);

}
