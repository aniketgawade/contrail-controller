/*
 * Copyright (c) 2013 Juniper Networks, Inc. All rights reserved.
 */
#define __SERVICE_CHAIN_STATIC_ROUTE_INTEGRATION_TEST_WRAPPER_TEST_SUITE__
#include "svc_static_route_intergration_test4.cc"

int main(int argc, char **argv) {
    const char *largv[] = {
        __FILE__,
        "--enable-mx-push-connected",
    };
    return service_chain_test_main(sizeof(largv)/sizeof(largv[0]), largv);
}
