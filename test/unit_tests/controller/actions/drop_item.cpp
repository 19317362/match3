// Copyright (c) 2016 Krzysztof Jusiak (krzysztof at jusiak dot net)
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)
//
#include "controller/actions/drop_item.hpp"

int main() {
  using namespace match3;
  "drop item"_test = [] {
    selected s = {1};
    drop_item(s);
    expect(s.empty());
  };
}
