#ifndef CONFIG_H
#define CONFIG_H

#include "util.h"

#define OUTPUT_MODE OUTPUT_MODE_MOCK
#define STRIP_LENGTH 16
#define DATA_SOURCE DATA_SOURCE_ARNET
#define FIXTURE_COUNT 1

// Fixture Output Configuration
#define ENABLE_FIXTURE true
#define DMX_UNIVERSE 1 //DMX Universe to listen in
#define DMX_OFFSET 0   //DMX Start Channel
#define CONFIG_SERVER "http://jsonplaceholder.typicode.com/users/1"

//Must define:
/*
#define WIFI_SSID "hfsjdkf"
#define PASSWORD "sdjfhdskjfn"
*/
#include "secret.h"

#endif
