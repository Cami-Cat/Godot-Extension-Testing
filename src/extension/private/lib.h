#pragma once

#ifndef N_NODE
#define N_NODE

#include <godot_cpp/classes/node.hpp>

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
