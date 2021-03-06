// clang-format off
// DO NOT EDIT: this file is auto-generated by caf-generate-enum-strings.
// Run the target update-enum-strings if this file is out of sync.
#include "caf/stream_priority.hpp"

#include <string>

namespace caf {

std::string to_string(stream_priority x) {
  switch(x) {
    default:
      return "???";
    case stream_priority::very_high:
      return "very_high";
    case stream_priority::high:
      return "high";
    case stream_priority::normal:
      return "normal";
    case stream_priority::low:
      return "low";
    case stream_priority::very_low:
      return "very_low";
  };
}

} // namespace caf
