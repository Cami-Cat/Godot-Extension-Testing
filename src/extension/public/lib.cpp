#include "../private/lib.h"
#include <godot_cpp/variant/utility_functions.hpp>

// You can and should define a namespace in order to correctly define functions.
// You can do so in a few ways, one of those is by including this line at the top of your .cpp file.
// using namespace [NamespaceName]
// As you can see demonstrated below.

using namespace camilib;

// You can also declare a function simply like so:

void camilib::NNode::_bind_methods() {
    // using namespace godot;
}

// This skips adding a using namespace line. But you can see in the two functions this comment is surrounded by
// that there is an included "using namespace godot;" within this scope. Why?

void NNode::_bind_methods() {
    // using namespace godot;

}

// Well, you can actually add "using namespace" within a specific scope. In these cases, this scope is the function. And it allows you to use all of those functions without the
// specific godot:: precursor.

NNode::NNode() {}
NNode::~NNode() {}

void NNode::_ready() {
    using namespace godot;
    Node::_ready();
    UtilityFunctions::print("NNode is ready!");
}
