#ifndef __LBUF_H__
#define __LBUF_H__

typedef struct
{
    uint32_t    size;
    uint32_t    write_ndx;
    uint8_t *   buffer;
}
lbuf_t;

void lbuf_write_byte( lbuf_t * p_lbuf, uint8_t byte );
void lbuf_init( lbuf_t * p_lbuf, void *pv_buffer, uint32_t size );

#define lbuf_reset( p_lbuf ) (p_lbuf)->write_ndx = 0

#endif
