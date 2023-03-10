//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;
@protocol SNSystemAudioAnalyzerProtocol;

__attribute__((visibility("hidden")))
@interface SNSystemAudioAnalyzerXPCSubscriber : NSObject
{
    NSMutableDictionary *_remoteObservers;	// 8 = 0x8
    id <SNSystemAudioAnalyzerProtocol> _receiver;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000007521a
- (void)xpcSetAudioConfiguration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000751aa
- (void)xpcRemoveAllRequestsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000075147
- (void)xpcRemoveRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000075060
- (void)xpcAddRequest:(id)arg1 withObserver:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000074ea9
- (void)setAudioConfiguration:(id)arg1;	// IMP=0x0000000000074de9
- (void)removeAllRequests;	// IMP=0x0000000000074d4a
- (void)removeRequest:(id)arg1;	// IMP=0x0000000000074c7f
- (_Bool)addRequest:(id)arg1 withObserver:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000074b80
- (id)init;	// IMP=0x0000000000074a94

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

