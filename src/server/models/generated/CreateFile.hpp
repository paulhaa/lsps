//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     CreateFile.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "CreateFileOptions.hpp"

namespace lsps {
    enum class CreateFileKind : int;
}

namespace lsps {
    /**
     * Create file operation
     */

    using nlohmann::json;

    /**
     * Create file operation
     */
    class CreateFile {
        public:
        CreateFile() = default;
        virtual ~CreateFile() = default;

        private:
        std::optional<std::string> annotation_id;
        CreateFileKind kind;
        std::optional<CreateFileOptions> options;
        std::string uri;

        public:
        /**
         * An optional annotation identifier describing the operation.
         */
        std::optional<std::string> get_annotation_id() const { return annotation_id; }
        void set_annotation_id(std::optional<std::string> value) { this->annotation_id = value; }

        /**
         * A create
         */
        const CreateFileKind & get_kind() const { return kind; }
        CreateFileKind & get_mutable_kind() { return kind; }
        void set_kind(const CreateFileKind & value) { this->kind = value; }

        /**
         * Additional options
         */
        std::optional<CreateFileOptions> get_options() const { return options; }
        void set_options(std::optional<CreateFileOptions> value) { this->options = value; }

        /**
         * The resource to create.
         */
        const std::string & get_uri() const { return uri; }
        std::string & get_mutable_uri() { return uri; }
        void set_uri(const std::string & value) { this->uri = value; }
    };
}
