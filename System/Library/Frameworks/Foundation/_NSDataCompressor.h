//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _NSDataCompressor : NSObject
{
    struct {
        char *dst_ptr;
        unsigned long long dst_size;
        char *src_ptr;
        unsigned long long src_size;
        void *state;
    } _stream;	// 8 = 0x8
    int _operation;	// 48 = 0x30
    int _status;	// 52 = 0x34
    CDUnknownBlockType _dataHandler;	// 56 = 0x38
    unsigned char _buffer[1024];	// 64 = 0x40
}

- (_Bool)processBytes:(char *)arg1 size:(unsigned long long)arg2 flags:(int)arg3;	// IMP=0x00000000004706f7
- (_Bool)finishProcessing;	// IMP=0x00000000004706d6
- (_Bool)processBytes:(char *)arg1 size:(unsigned long long)arg2;	// IMP=0x00000000004706c1
- (void)dealloc;	// IMP=0x000000000047065a
- (id)initWithAlgorithm:(int)arg1 operation:(int)arg2 dataHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000047058b

@end

