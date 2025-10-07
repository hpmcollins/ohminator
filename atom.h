#ifndef ATOM_H
#define ATOM_H

#include <memory>
#include <string>
#include <vector>

class Atom {
public:
    std::vector<std::shared_ptr<Atom>> children;
    std::string name = "Atom";

    void addChild(std::shared_ptr<Atom> child);
};

#endif