#pragma once

#ifndef N_NODE
#define N_NODE

#include <godot_cpp/classes/node.hpp>

// You can do nested namespace like so:
// namespace godot {
// namespace camilib {
//
//  }
// }

// Or you can just prefix the class with the namespace that it is within. Like below:
// godot::Node

// NEVER use using namespace [NamespaceName] inside a header file!

namespace camilib {

class NNode : public godot::Node {
    GDCLASS(NNode, godot::Node)

    protected:
        static void _bind_methods();

    public:
        NNode();
        ~NNode();

        void _ready() override;
    };
}

#endif
