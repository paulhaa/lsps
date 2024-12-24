#pragma once

#include <nlohmann/json.hpp>

namespace lsps::models {
using json = nlohmann::json;

class EmptyResult {};

void from_json(const json& j, EmptyResult& x);
void to_json(json& j, const EmptyResult& x);

inline void from_json(const json& j, EmptyResult& x) {}

inline void to_json(json& j, const EmptyResult& x) { j = nullptr; }
}  // namespace lsps::models