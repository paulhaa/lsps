#pragma once

#include <nlohmann/json.hpp>

namespace lsps::models {
using json = nlohmann::json;

class EmptyParams {};

void from_json(const json& j, EmptyParams& x);
void to_json(json& j, const EmptyParams& x);

inline void from_json(const json& j, EmptyParams& x) {}

inline void to_json(json& j, const EmptyParams& x) { j = json::object(); }
}  // namespace lsps::models