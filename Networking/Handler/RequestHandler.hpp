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
            float version;
            std::map<std::string, std::string> header;
            std::string body;
            public:
            RequestHandler(std::string request);
            std::map<std::string, std::string> data_extractor(std::string string_data);
            
    };
};

#endif // 