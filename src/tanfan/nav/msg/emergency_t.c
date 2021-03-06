// THIS IS AN AUTOMATICALLY GENERATED FILE.  DO NOT MODIFY
// BY HAND!!
//
// Generated by lcm-gen

#include "tanfan/nav/msg/emergency_t.h"
#include <string.h>

static int __emergency_t_hash_computed;
static int64_t __emergency_t_hash;

int64_t __emergency_t_hash_recursive(const __lcm_hash_ptr *p)
{
    const __lcm_hash_ptr *fp;
    for (fp = p; fp != NULL; fp = fp->parent)
        if (fp->v == __emergency_t_get_hash) return 0;

    __lcm_hash_ptr cp;
    cp.parent = p;
    cp.v = (void *)__emergency_t_get_hash;
    (void)cp;

    int64_t hash = (int64_t)0xf676555cfb6f48c0LL + __int8_t_hash_recursive(&cp);

    return (hash << 1) + ((hash >> 63) & 1);
}

int64_t __emergency_t_get_hash(void)
{
    if (!__emergency_t_hash_computed)
    {
        __emergency_t_hash = __emergency_t_hash_recursive(NULL);
        __emergency_t_hash_computed = 1;
    }

    return __emergency_t_hash;
}

int __emergency_t_encode_array(
    void *buf, int offset, int maxlen, const emergency_t *p, int elements)
{
    int pos = 0, thislen, element;

    for (element = 0; element < elements; element++)
    {
        thislen = __int8_t_encode_array(buf, offset + pos, maxlen - pos, &(p[element].status), 1);
        if (thislen < 0)
            return thislen;
        else
            pos += thislen;
    }
    return pos;
}

int emergency_t_encode(void *buf, int offset, int maxlen, const emergency_t *p)
{
    int pos = 0, thislen;
    int64_t hash = __emergency_t_get_hash();

    thislen = __int64_t_encode_array(buf, offset + pos, maxlen - pos, &hash, 1);
    if (thislen < 0)
        return thislen;
    else
        pos += thislen;

    thislen = __emergency_t_encode_array(buf, offset + pos, maxlen - pos, p, 1);
    if (thislen < 0)
        return thislen;
    else
        pos += thislen;

    return pos;
}

int __emergency_t_encoded_array_size(const emergency_t *p, int elements)
{
    int size = 0, element;
    for (element = 0; element < elements; element++)
    {
        size += __int8_t_encoded_array_size(&(p[element].status), 1);
    }
    return size;
}

int emergency_t_encoded_size(const emergency_t *p)
{
    return 8 + __emergency_t_encoded_array_size(p, 1);
}

int __emergency_t_decode_array(
    const void *buf, int offset, int maxlen, emergency_t *p, int elements)
{
    int pos = 0, thislen, element;

    for (element = 0; element < elements; element++)
    {
        thislen = __int8_t_decode_array(buf, offset + pos, maxlen - pos, &(p[element].status), 1);
        if (thislen < 0)
            return thislen;
        else
            pos += thislen;
    }
    return pos;
}

int __emergency_t_decode_array_cleanup(emergency_t *p, int elements)
{
    int element;
    for (element = 0; element < elements; element++)
    {
        __int8_t_decode_array_cleanup(&(p[element].status), 1);
    }
    return 0;
}

int emergency_t_decode(const void *buf, int offset, int maxlen, emergency_t *p)
{
    int pos = 0, thislen;
    int64_t hash = __emergency_t_get_hash();

    int64_t this_hash;
    thislen = __int64_t_decode_array(buf, offset + pos, maxlen - pos, &this_hash, 1);
    if (thislen < 0)
        return thislen;
    else
        pos += thislen;
    if (this_hash != hash) return -1;

    thislen = __emergency_t_decode_array(buf, offset + pos, maxlen - pos, p, 1);
    if (thislen < 0)
        return thislen;
    else
        pos += thislen;

    return pos;
}

int emergency_t_decode_cleanup(emergency_t *p) { return __emergency_t_decode_array_cleanup(p, 1); }
int __emergency_t_clone_array(const emergency_t *p, emergency_t *q, int elements)
{
    int element;
    for (element = 0; element < elements; element++)
    {
        __int8_t_clone_array(&(p[element].status), &(q[element].status), 1);
    }
    return 0;
}

emergency_t *emergency_t_copy(const emergency_t *p)
{
    emergency_t *q = (emergency_t *)malloc(sizeof(emergency_t));
    __emergency_t_clone_array(p, q, 1);
    return q;
}

void emergency_t_destroy(emergency_t *p)
{
    __emergency_t_decode_array_cleanup(p, 1);
    free(p);
}
