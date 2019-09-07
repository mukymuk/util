#include "global.h"
#include "lbuf.h"

void lbuf_init( lbuf_t * p_lbuf, void *pv_buffer, uint32_t size )
{
    p_lbuf->size = size;
    p_lbuf->write_ndx = 0;
    p_lbuf->buffer = (uint8_t*)pv_buffer;
}

void lbuf_write_byte( lbuf_t * p_lbuf, uint8_t byte )
{
    if( p_lbuf->write_ndx >= p_lbuf->size )
        p_lbuf->write_ndx = 0;
    p_lbuf->buffer[ p_lbuf->write_ndx ] = byte;
    p_lbuf->write_ndx++;
}


