// THIS IS AN AUTOMATICALLY GENERATED FILE.  DO NOT MODIFY
// BY HAND!!
//
// Generated by lcm-gen

#include <stdint.h>
#include <stdlib.h>
#include "lcm_coretypes.h"

#ifndef _gains_t_h
#define _gains_t_h

#ifdef __cplusplus
extern "C" {
#endif

#define GAINS_T_VAL_KP 0
#define GAINS_T_VAL_KI 1
#define GAINS_T_VAL_KD 2
#define GAINS_T_RATE_KP 3
#define GAINS_T_RATE_KI 4
#define GAINS_T_RATE_KD 5

typedef struct _gains_t gains_t;
struct _gains_t
{
    float      xGains[6];
    float      yGains[6];
    float      zGains[6];
    float      yawGains[3];
    int64_t    utime;
};

/**
 * Create a deep copy of a gains_t.
 * When no longer needed, destroy it with gains_t_destroy()
 */
gains_t* gains_t_copy(const gains_t* to_copy);

/**
 * Destroy an instance of gains_t created by gains_t_copy()
 */
void gains_t_destroy(gains_t* to_destroy);

/**
 * Encode a message of type gains_t into binary form.
 *
 * @param buf The output buffer.
 * @param offset Encoding starts at this byte offset into @p buf.
 * @param maxlen Maximum number of bytes to write.  This should generally
 *               be equal to gains_t_encoded_size().
 * @param msg The message to encode.
 * @return The number of bytes encoded, or <0 if an error occured.
 */
int gains_t_encode(void *buf, int offset, int maxlen, const gains_t *p);

/**
 * Decode a message of type gains_t from binary form.
 * When decoding messages containing strings or variable-length arrays, this
 * function may allocate memory.  When finished with the decoded message,
 * release allocated resources with gains_t_decode_cleanup().
 *
 * @param buf The buffer containing the encoded message
 * @param offset The byte offset into @p buf where the encoded message starts.
 * @param maxlen The maximum number of bytes to read while decoding.
 * @param msg Output parameter where the decoded message is stored
 * @return The number of bytes decoded, or <0 if an error occured.
 */
int gains_t_decode(const void *buf, int offset, int maxlen, gains_t *msg);

/**
 * Release resources allocated by gains_t_decode()
 * @return 0
 */
int gains_t_decode_cleanup(gains_t *p);

/**
 * Check how many bytes are required to encode a message of type gains_t
 */
int gains_t_encoded_size(const gains_t *p);

// LCM support functions. Users should not call these
int64_t __gains_t_get_hash(void);
int64_t __gains_t_hash_recursive(const __lcm_hash_ptr *p);
int     __gains_t_encode_array(void *buf, int offset, int maxlen, const gains_t *p, int elements);
int     __gains_t_decode_array(const void *buf, int offset, int maxlen, gains_t *p, int elements);
int     __gains_t_decode_array_cleanup(gains_t *p, int elements);
int     __gains_t_encoded_array_size(const gains_t *p, int elements);
int     __gains_t_clone_array(const gains_t *p, gains_t *q, int elements);

#ifdef __cplusplus
}
#endif

#endif