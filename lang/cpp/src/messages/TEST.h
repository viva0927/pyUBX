// File lang/cpp/src/messages/TEST.h
// Auto-generated by pyUBX generateCpp.py v0.1 on 2020-03-01T13:29:34.883614
// See https://github.com/mayeranalytics/pyUBX
// DO NOT MODIFY THIS FILE!

#ifndef __TEST_H__
#define __TEST_H__

#include <stdint.h>
#include "../UBX.h"

/* Message class TEST.
 */
struct TEST
{
    struct TEST_;
};

/* to test
 */
struct TEST::TEST_ : public Message
{
    uint8_t first;
    uint8_t second;

    struct Repeated {
        uint16_t ext;
    };
    typedef _iterator<TEST::TEST_::Repeated> iterator;
    static _iterator<Repeated> iter(char*data, size_t size) {
        return _iterator<Repeated>(data+sizeof(TEST::TEST_), size-sizeof(TEST::TEST_));
    }
    static _iterator<Repeated> iter(TEST::TEST_& msg, size_t size) {
        return iter((char*)(&msg), size);
    }
    static size_t size(size_t n) { return sizeof(TEST::TEST_) + n*sizeof(TEST::TEST_::Repeated); }

    static uint8_t classID;
    static uint8_t messageID;
};

uint8_t TEST::TEST_::classID   = 0xFF;
uint8_t TEST::TEST_::messageID = 0xFF;

#endif // ifndef __TEST_H__
