#include <stdio.h>
#include <stdint.h>

int main(void)
{
    unsigned int packet_input;
    unsigned int status_input;
    int packet_id;
    uint8_t status_code;
    float voltage;
    uint16_t checksum;

    scanf("%x %o %f", &packet_input, &status_input, &voltage);

    packet_id = (int)packet_input;
    status_code = (uint8_t)status_input;
    checksum = (uint16_t)(packet_id + status_code);

    printf("PACKET_ID: %d\\n", packet_id);
    printf("STATUS_CODE: %u\\n", (unsigned int)status_code);
    printf("STATUS_CHAR: %c\\n", (char)status_code);
    printf("VOLTAGE: %.2f\\n", voltage);
    printf("CHECKSUM: %u\\n", (unsigned int)checksum);

    return 0;
}
