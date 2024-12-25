//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     RenameFile.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "RenameFileOptions.hpp"

namespace lsps {
namespace models {
    enum class RenameFileKind : int;
}
}

namespace lsps {
namespace models {
    /**
     * Rename file operation
     */

    using nlohmann::json;

    /**
     * Rename file operation
     */
    class RenameFile {
        public:
        RenameFile() = default;
        virtual ~RenameFile() = default;

        private:
        std::optional<std::string> annotation_id;
        RenameFileKind kind;
        std::string new_uri;
        std::string old_uri;
        std::optional<RenameFileOptions> options;

        public:
        /**
         * An optional annotation identifier describing the operation.
         */
        std::optional<std::string> get_annotation_id() const { return annotation_id; }
        void set_annotation_id(std::optional<std::string> value) { this->annotation_id = value; }

        /**
         * A rename
         */
        const RenameFileKind & get_kind() const { return kind; }
        RenameFileKind & get_mutable_kind() { return kind; }
        void set_kind(const RenameFileKind & value) { this->kind = value; }

        /**
         * The new location.
         */
        const std::string & get_new_uri() const { return new_uri; }
        std::string & get_mutable_new_uri() { return new_uri; }
        void set_new_uri(const std::string & value) { this->new_uri = value; }

        /**
         * The old (existing) location.
         */
        const std::string & get_old_uri() const { return old_uri; }
        std::string & get_mutable_old_uri() { return old_uri; }
        void set_old_uri(const std::string & value) { this->old_uri = value; }

        /**
         * Rename options.
         */
        std::optional<RenameFileOptions> get_options() const { return options; }
        void set_options(std::optional<RenameFileOptions> value) { this->options = value; }
    };
}
}
