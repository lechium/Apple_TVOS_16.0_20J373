//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface StreamingOperation : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000001a5e4
- (union)getStreamerOptions;	// IMP=0x000000000001a5db
- (void)setNotificationHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000001a5c9
- (_Bool)isStreamerRunning;	// IMP=0x000000000001a5c0
- (id)cancelEventStream;	// IMP=0x000000000001a5b7
- (id)streamEventWithBlock:(CDUnknownBlockType)arg1 options:(union)arg2;	// IMP=0x000000000001a5a5
- (id)initForUnitTest:(_Bool)arg1 withQueue:(id)arg2;	// IMP=0x000000000001a53a

@end

