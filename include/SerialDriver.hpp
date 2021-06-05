#ifndef _SERIAL_DRIVER_H_
#define _SERIAL_DRIVER_H_

#define SD_ERROR            (-1)
#define SD_SUCCESS            0

typedef unsigned char  SdByte;
typedef int            SdResult;
typedef int            SdState;
typedef int            SdHandle;

class SerialDriver
{
private:
    SdHandle handle;
public:
    SerialDriver();

    ~SerialDriver();
     
    SdResult open_port( char *port_name );
     
    void close_port();
    
    SdResult write_to_port( SdByte *data, int length );
    
    SdResult read_from_port( SdByte *data, int max_length, SdState *state );
};

SerialDriver::SerialDriver()
{
}

SerialDriver::~SerialDriver()
{
}

#endif // _SERIAL_DRIVER_H_