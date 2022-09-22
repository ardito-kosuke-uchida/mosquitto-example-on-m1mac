#include <stdio.h>
#include <mosquitto.h>

int main(int argc, char **argv) {
    struct mosquitto *mosq = NULL;
    mosquitto_destroy(mosq);
    return 0;
}
