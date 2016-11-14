//
// Copyright (c) 2016 Krzysztof Jusiak (krzysztof at jusiak dot net)
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)
//
#pragma once

#include "view/view.hpp"
#include "view/animations.hpp"
#include "controller/data/moves.hpp"

namespace match3 {

const auto show_moves = [](view& v, const moves& m, animations& a) {
  using namespace std::chrono_literals;
  a.queue_animation(
      [m, &v] { v.set_text("moves: " + std::to_string(m), 240, 10); });
};

} // match3
