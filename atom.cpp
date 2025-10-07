#include "Atom.h"

void Atom::addChild(std::shared_ptr<Atom> child) {
    children.push_back(child);
}
