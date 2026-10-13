#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

int main(void)
{
    printf("INT8: size=%zu, min=%" PRId8 ", max=%" PRId8 ", values=%lld\\n",
           sizeof(int8_t), INT8_MIN, INT8_MAX,
           (long long)INT8_MAX - (long long)INT8_MIN + 1LL);

    printf("UINT8: size=%zu, min=0, max=%u, values=%llu\\n",
           sizeof(uint8_t), (unsigned int)UINT8_MAX,
           (unsigned long long)UINT8_MAX + 1ULL);

    printf("INT16: size=%zu, min=%" PRId16 ", max=%" PRId16 ", values=%lld\\n",
           sizeof(int16_t), INT16_MIN, INT16_MAX,
           (long long)INT16_MAX - (long long)INT16_MIN + 1LL);

    printf("UINT16: size=%zu, min=0, max=%u, values=%llu\\n",
           sizeof(uint16_t), (unsigned int)UINT16_MAX,
           (unsigned long long)UINT16_MAX + 1ULL);

    printf("INT32: size=%zu, min=%" PRId32 ", max=%" PRId32 ", values=%lld\\n",
           sizeof(int32_t), INT32_MIN, INT32_MAX,
           (long long)INT32_MAX - (long long)INT32_MIN + 1LL);

    printf("UINT32: size=%zu, min=0, max=%" PRIu32 ", values=%llu\\n",
           sizeof(uint32_t), UINT32_MAX,
           (unsigned long long)UINT32_MAX + 1ULL);

    return 0;
}
