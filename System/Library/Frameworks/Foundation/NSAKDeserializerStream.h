//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface NSAKDeserializerStream : NSObject
{
    const void *memory;	// 8 = 0x8
    const char *current;	// 16 = 0x10
    unsigned long long left;	// 24 = 0x18
    unsigned long long max;	// 32 = 0x20
    _Bool freeWhenDone;	// 40 = 0x28
}

- (void)readData:(void *)arg1 length:(unsigned long long)arg2;	// IMP=0x00000000005eb85b
- (unsigned long long)readAlignedDataSize;	// IMP=0x00000000005eb7c0
- (int)readInt;	// IMP=0x00000000005eb76d
- (id)initFromPath:(id)arg1;	// IMP=0x00000000005eb57b
- (void)dealloc;	// IMP=0x00000000005eb514
- (id)initFromMemoryNoCopy:(const void *)arg1 length:(unsigned long long)arg2 freeWhenDone:(_Bool)arg3;	// IMP=0x00000000005eb4f7

@end
