#ifndef RequestHandler_hpp
#define RequestHandler_hpp
#include<string>
#include<iostream>
#include <map>
#include "../PathHandler/router.hpp"

#include "HeaderParsor.hpp"
namespace HDE{
        enum  HttpMethod {
            GET,
            POST,
            PUT,
            DELETE_,
            PATCH,
            HEAD,
            OPTIONS,
            CONNECT,
            TRACE,
            UNKNOWN
        };
        class RequestHandler{
            std::string method;
            std::map<std::string, std::string> data;
            std::string uri;
            bool is_favicon_request;
            float version;
            std::map<std::string, std::string> header;
            std::string body;
            public:
            RequestHandler(std::string request);
            std::map<std::string, std::string> data_extractor(std::string string_data);
            std::string get_uri() const;
            std::string get_method() const;
            std::map<std::string, std::string> get_data() const;
            bool favicon_request() const;
            float get_version() const;
            std::map<std::string, std::string> get_header() const;
            std::string get_body() const;
            
    };
};

#endif // 