//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _NSKeyedCoderOldStyleArray : NSObject
{
    void *_addr;	// 8 = 0x8
    unsigned long long _count;	// 16 = 0x10
    unsigned long long _size;	// 24 = 0x18
    BOOL _type;	// 32 = 0x20
    _Bool _decoded;	// 33 = 0x21
    char _padding[2];	// 34 = 0x22
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000004f659e
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000004f68f6
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000004f6859
- (void)fillObjCType:(BOOL)arg1 count:(unsigned long long)arg2 at:(void *)arg3;	// IMP=0x00000000004f6721
- (void)dealloc;	// IMP=0x00000000004f66b9
- (id)initWithObjCType:(BOOL)arg1 count:(unsigned long long)arg2 at:(const void *)arg3;	// IMP=0x00000000004f65a6

@end
