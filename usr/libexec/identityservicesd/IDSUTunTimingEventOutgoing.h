//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface IDSUTunTimingEventOutgoing : NSObject
{
    double _timestamp;	// 8 = 0x8
    double _duration;	// 16 = 0x10
    double _processTime;	// 24 = 0x18
    double _compressionTime;	// 32 = 0x20
    double _sendTime;	// 40 = 0x28
    long long _bytes;	// 48 = 0x30
}

@property(readonly, nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
- (void)appendToString:(id)arg1;	// IMP=0x00100000005cb9f0
- (id)initWithTimestamp:(double)arg1 duration:(double)arg2 processTime:(double)arg3 compressionTime:(double)arg4 sendTime:(double)arg5 bytes:(long long)arg6;	// IMP=0x00100000005cb8f0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

