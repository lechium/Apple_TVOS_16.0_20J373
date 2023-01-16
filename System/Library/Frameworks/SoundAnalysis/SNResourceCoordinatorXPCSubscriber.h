//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol SNResourceCoordinatorProtocol;

__attribute__((visibility("hidden")))
@interface SNResourceCoordinatorXPCSubscriber : NSObject
{
    id <SNResourceCoordinatorProtocol> _receiver;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000021914
- (void)xpcCreateSystemAudioAnalyzerWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000002187e
- (id)createSystemAudioAnalyzer;	// IMP=0x0000000000021868
- (id)init;	// IMP=0x000000000002179d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
