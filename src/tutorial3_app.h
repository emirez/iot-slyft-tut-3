
// Generated by slyft.io
// This code part has been generated on an "as is" basis, without warranties or conditions of any kind.

// application-part header



    #include "Arduino.h"

#include "microcoap/coap.h"

// include data structure headers
#include "config.h"
#include "state.h"

// struct TUT3__state
#include "state.h"
// struct TUT3__config
#include "config.h"



//
// CoAP Application level handlers
//

// -- GET  /state

struct TUT3__tutorial3__get___state_req {
    struct {

    } data;
};

struct TUT3__tutorial3__get___state_resp {
    coap_responsecode_t  response_code;
    struct {

  
        // data struct for response code 205
        struct TUT3__state  state_205;

    } data;
};

// -- Application level handler for GET to /state
bool TUT3__tutorial3__get___state(
    struct TUT3__tutorial3__get___state_req *req,
    struct TUT3__tutorial3__get___state_resp *resp);


// -- GET  /config

struct TUT3__tutorial3__get___config_req {
    struct {

    } data;
};

struct TUT3__tutorial3__get___config_resp {
    coap_responsecode_t  response_code;
    struct {

  
        // data struct for response code 205
        struct TUT3__config  config_205;

    } data;
};

// -- Application level handler for GET to /config
bool TUT3__tutorial3__get___config(
    struct TUT3__tutorial3__get___config_req *req,
    struct TUT3__tutorial3__get___config_resp *resp);


// -- POST  /config

struct TUT3__tutorial3__post___config_req {
    struct {

        struct TUT3__config  config;

    } data;
};

struct TUT3__tutorial3__post___config_resp {
    coap_responsecode_t  response_code;
    struct {

    } data;
};

// -- Application level handler for POST to /config
bool TUT3__tutorial3__post___config(
    struct TUT3__tutorial3__post___config_req *req,
    struct TUT3__tutorial3__post___config_resp *resp);

