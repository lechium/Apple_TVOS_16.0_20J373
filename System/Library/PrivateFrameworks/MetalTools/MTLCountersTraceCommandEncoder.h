//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface MTLCountersTraceCommandEncoder : NSObject
{
    unsigned long long _timer;	// 8 = 0x8
    struct BinaryBuffer *_stream;	// 16 = 0x10
    unsigned long long _flags;	// 24 = 0x18
    struct _NSRange _segment;	// 32 = 0x20
}

@property(readonly, nonatomic) struct _NSRange segment; // @synthesize segment=_segment;
@property(readonly, nonatomic) unsigned long long flags; // @synthesize flags=_flags;
- (void)endEncoding;	// IMP=0x000000000002a620
- (void)setLabel:(id)arg1;	// IMP=0x000000000002a5fa
- (void)popDebugGroup;	// IMP=0x000000000002a58b
- (void)pushDebugGroup:(id)arg1;	// IMP=0x000000000002a565
- (void)insertDebugSignpost:(id)arg1;	// IMP=0x000000000002a36a
- (id)init:(struct BinaryBuffer *)arg1 flags:(unsigned long long)arg2;	// IMP=0x000000000002a30c

@end

