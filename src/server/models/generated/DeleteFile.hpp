//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     DeleteFile.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "DeleteFileOptions.hpp"

namespace lsps {
    enum class DeleteFileKind : int;
}

namespace lsps {
    /**
     * Delete file operation
     */

    using nlohmann::json;

    /**
     * Delete file operation
     */
    class DeleteFile {
        public:
        DeleteFile() = default;
        virtual ~DeleteFile() = default;

        private:
        std::optional<std::string> annotation_id;
        DeleteFileKind kind;
        std::optional<DeleteFileOptions> options;
        std::string uri;

        public:
        /**
         * An optional annotation identifier describing the operation.
         */
        std::optional<std::string> get_annotation_id() const { return annotation_id; }
        void set_annotation_id(std::optional<std::string> value) { this->annotation_id = value; }

        /**
         * A delete
         */
        const DeleteFileKind & get_kind() const { return kind; }
        DeleteFileKind & get_mutable_kind() { return kind; }
        void set_kind(const DeleteFileKind & value) { this->kind = value; }

        /**
         * Delete options.
         */
        std::optional<DeleteFileOptions> get_options() const { return options; }
        void set_options(std::optional<DeleteFileOptions> value) { this->options = value; }

        /**
         * The file to delete.
         */
        const std::string & get_uri() const { return uri; }
        std::string & get_mutable_uri() { return uri; }
        void set_uri(const std::string & value) { this->uri = value; }
    };
}
