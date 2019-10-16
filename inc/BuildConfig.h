#define BUILD_I2C
//#define BUILD_SPI
//#define BUILD_IOEXT

#define BUILD_PSG
#define BUILD_SCC

//#define BUILD_MIDI

// Constant variables to improve readability.
enum {
  PSG_ADDRESS = 0x50,
  SCC_ADDRESS = 0x51,

  PSG_ADDRESS_PORT = 0xa0,
  PSG_DATA_PORT = 0xa1,
  SCC_ADDRESS_PORT = 0xa2,
  SCC_DATA_PORT = 0xa3,
};

