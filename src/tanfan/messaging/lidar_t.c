// THIS IS AN AUTOMATICALLY GENERATED FILE.  DO NOT MODIFY
// BY HAND!!
//
// Generated by lcm-gen

#include "tanfan/messaging/lidar_t.h"
#include <string.h>

static int __lidar_t_hash_computed;
static uint64_t __lidar_t_hash;

uint64_t __lidar_t_hash_recursive(const __lcm_hash_ptr *p)
{
    const __lcm_hash_ptr *fp;
    for (fp = p; fp != NULL; fp = fp->parent)
        if (fp->v == __lidar_t_get_hash) return 0;

    __lcm_hash_ptr cp;
    cp.parent = p;
    cp.v = (void *)__lidar_t_get_hash;
    (void)cp;

    uint64_t hash = (uint64_t)0xe6c3e7f4e566c72eLL + __float_hash_recursive(&cp) +
                    __float_hash_recursive(&cp) + __int64_t_hash_recursive(&cp);

    return (hash << 1) + ((hash >> 63) & 1);
}

int64_t __lidar_t_get_hash(void)
{
    if (!__lidar_t_hash_computed)
    {
        __lidar_t_hash = (int64_t)__lidar_t_hash_recursive(NULL);
        __lidar_t_hash_computed = 1;
    }

    return __lidar_t_hash;
}

int __lidar_t_encode_array(void *buf, int offset, int maxlen, const lidar_t *p, int elements)
{
    int pos = 0, element;
    int thislen;

    for (element = 0; element < elements; element++)
    {
        thislen = __float_encode_array(buf, offset + pos, maxlen - pos, &(p[element].dist), 1);
        if (thislen < 0)
            return thislen;
        else
            pos += thislen;

        thislen = __float_encode_array(buf, offset + pos, maxlen - pos, &(p[element].vel), 1);
        if (thislen < 0)
            return thislen;
        else
            pos += thislen;

        thislen = __int64_t_encode_array(buf, offset + pos, maxlen - pos, &(p[element].time), 1);
        if (thislen < 0)
            return thislen;
        else
            pos += thislen;
    }
    return pos;
}

int lidar_t_encode(void *buf, int offset, int maxlen, const lidar_t *p)
{
    int pos = 0, thislen;
    int64_t hash = __lidar_t_get_hash();

    thislen = __int64_t_encode_array(buf, offset + pos, maxlen - pos, &hash, 1);
    if (thislen < 0)
        return thislen;
    else
        pos += thislen;

    thislen = __lidar_t_encode_array(buf, offset + pos, maxlen - pos, p, 1);
    if (thislen < 0)
        return thislen;
    else
        pos += thislen;

    return pos;
}

int __lidar_t_encoded_array_size(const lidar_t *p, int elements)
{
    int size = 0, element;
    for (element = 0; element < elements; element++)
    {
        size += __float_encoded_array_size(&(p[element].dist), 1);

        size += __float_encoded_array_size(&(p[element].vel), 1);

        size += __int64_t_encoded_array_size(&(p[element].time), 1);
    }
    return size;
}

int lidar_t_encoded_size(const lidar_t *p) { return 8 + __lidar_t_encoded_array_size(p, 1); }
int __lidar_t_decode_array(const void *buf, int offset, int maxlen, lidar_t *p, int elements)
{
    int pos = 0, thislen, element;

    for (element = 0; element < elements; element++)
    {
        thislen = __float_decode_array(buf, offset + pos, maxlen - pos, &(p[element].dist), 1);
        if (thislen < 0)
            return thislen;
        else
            pos += thislen;

        thislen = __float_decode_array(buf, offset + pos, maxlen - pos, &(p[element].vel), 1);
        if (thislen < 0)
            return thislen;
        else
            pos += thislen;

        thislen = __int64_t_decode_array(buf, offset + pos, maxlen - pos, &(p[element].time), 1);
        if (thislen < 0)
            return thislen;
        else
            pos += thislen;
    }
    return pos;
}

int __lidar_t_decode_array_cleanup(lidar_t *p, int elements)
{
    int element;
    for (element = 0; element < elements; element++)
    {
        __float_decode_array_cleanup(&(p[element].dist), 1);

        __float_decode_array_cleanup(&(p[element].vel), 1);

        __int64_t_decode_array_cleanup(&(p[element].time), 1);
    }
    return 0;
}

int lidar_t_decode(const void *buf, int offset, int maxlen, lidar_t *p)
{
    int pos = 0, thislen;
    int64_t hash = __lidar_t_get_hash();

    int64_t this_hash;
    thislen = __int64_t_decode_array(buf, offset + pos, maxlen - pos, &this_hash, 1);
    if (thislen < 0)
        return thislen;
    else
        pos += thislen;
    if (this_hash != hash) return -1;

    thislen = __lidar_t_decode_array(buf, offset + pos, maxlen - pos, p, 1);
    if (thislen < 0)
        return thislen;
    else
        pos += thislen;

    return pos;
}

int lidar_t_decode_cleanup(lidar_t *p) { return __lidar_t_decode_array_cleanup(p, 1); }
int __lidar_t_clone_array(const lidar_t *p, lidar_t *q, int elements)
{
    int element;
    for (element = 0; element < elements; element++)
    {
        __float_clone_array(&(p[element].dist), &(q[element].dist), 1);

        __float_clone_array(&(p[element].vel), &(q[element].vel), 1);

        __int64_t_clone_array(&(p[element].time), &(q[element].time), 1);
    }
    return 0;
}

lidar_t *lidar_t_copy(const lidar_t *p)
{
    lidar_t *q = (lidar_t *)malloc(sizeof(lidar_t));
    __lidar_t_clone_array(p, q, 1);
    return q;
}

void lidar_t_destroy(lidar_t *p)
{
    __lidar_t_decode_array_cleanup(p, 1);
    free(p);
}
