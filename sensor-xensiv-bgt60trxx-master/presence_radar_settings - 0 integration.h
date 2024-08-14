/* XENSIV BGT60TRXX register configurator, SDK versionv3.2.1+255.d520082d9 */

#define XENSIV_BGT60TRXX_CONF_START_FREQ_HZ (60000004000)
#define XENSIV_BGT60TRXX_CONF_END_FREQ_HZ (61000000000)
#define XENSIV_BGT60TRXX_CONF_NUM_SAMPLES_PER_CHIRP (128)
#define XENSIV_BGT60TRXX_CONF_NUM_CHIRPS_PER_FRAME (1)
#define XENSIV_BGT60TRXX_CONF_NUM_RX_ANTENNAS (1)
#define XENSIV_BGT60TRXX_CONF_NUM_TX_ANTENNAS (1)
#define XENSIV_BGT60TRXX_CONF_SAMPLE_RATE (1000000)
#define XENSIV_BGT60TRXX_CONF_CHIRP_REPETION_TIME_S (0.000299787)
#define XENSIV_BGT60TRXX_CONF_FRAME_REPETION_TIME_S (0.0499288)
#define XENSIV_BGT60TRXX_CONF_FRAME_XFER_SIZE_WORDS (64)
#define XENSIV_BGT60TRXX_CONF_BUFFER_SIZE_BYTES ((XENSIV_BGT60TRXX_CONF_FRAME_XFER_SIZE_WORDS * XENSIV_BGT60TRXX_FIFO_WORD_SIZE_BYTES) + XENSIV_BGT60TRXX_SPI_BURST_HEADER_SIZE_BYTES)
#define XENSIV_BGT60TRXX_CONF_NUM_REGS (39)

#if defined(XENSIV_BGT60TRXX_CONF_IMPL)
const uint32_t register_list[] = {
    0x11e8270UL,
    0x3140210UL,
    0x9e967fdUL,
    0xb0805b4UL,
    0xdf0203fUL,
    0xf010f00UL,
    0x11000000UL,
    0x13000000UL,
    0x15000000UL,
    0x17000be0UL,
    0x19000000UL,
    0x1b000000UL,
    0x1d000000UL,
    0x1f000b60UL,
    0x21103c51UL,
    0x231ff41fUL,
    0x25706f7bUL,
    0x2d000490UL,
    0x3b000480UL,
    0x49000480UL,
    0x57000480UL,
    0x5911be0eUL,
    0x5b63bc0aUL,
    0x5d000000UL,
    0x5f787e1eUL,
    0x61dba49fUL,
    0x6300009cUL,
    0x65000532UL,
    0x67000080UL,
    0x69000000UL,
    0x6b000000UL,
    0x6d000000UL,
    0x6f291b10UL,
    0x7f000100UL,
    0x8f000100UL,
    0x9f000100UL,
    0xab000000UL,
    0xad000000UL,
    0xb7000000UL
};
#endif
