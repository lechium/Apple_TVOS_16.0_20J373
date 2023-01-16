//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SpeexEndpointer : NSObject
{
    double mStartWaitTime;	// 8 = 0x8
    double mInterspeechWaitTime;	// 16 = 0x10
    double mEndWaitTime;	// 24 = 0x18
    int mEndpointMode;	// 32 = 0x20
    unsigned int mFrameRate;	// 36 = 0x24
    int mLastStatus;	// 40 = 0x28
    struct Impl *_impl;	// 48 = 0x30
}

@property double endWaitTime;
@property double interspeechWaitTime;
@property double startWaitTime;
@property int endpointMode;
- (void)reset;	// IMP=0x000000000002e5ff
- (int)getStatus:(struct AudioQueueBuffer *)arg1;	// IMP=0x000000000002e5f6
- (_Bool)configureWithASBD:(struct AudioStreamBasicDescription *)arg1 andFrameRate:(unsigned int)arg2;	// IMP=0x000000000002e41b
- (_Bool)configureWithSampleRate:(double)arg1 andFrameRate:(unsigned int)arg2;	// IMP=0x000000000002e240
- (void)dealloc;	// IMP=0x000000000002e125
- (id)init;	// IMP=0x000000000002dfb0
- (int)getStatus:(float *)arg1 count:(unsigned int)arg2;	// IMP=0x000000000002ec55

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
