#ifndef RequestHandler_hpp
#define RequestHandler_hpp
#include<string>
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
            std::string uri;
            float version;
            std::string headers;
            std::string body;
            public:
            RequestHandler(std::string request);
    };
}

#endif // !RequestHandler_hpp