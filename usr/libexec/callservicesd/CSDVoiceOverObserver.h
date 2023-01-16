//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable, NSString;
@protocol OS_dispatch_queue;

@interface CSDVoiceOverObserver : NSObject
{
    _Bool _enabled;	// 8 = 0x8
    NSMapTable *_delegateToQueue;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000196763
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) NSMapTable *delegateToQueue; // @synthesize delegateToQueue=_delegateToQueue;
- (void)updateEnabled;	// IMP=0x001000000019671a
- (void)handleAXSVoiceOverTouchEnabledNotification:(id)arg1;	// IMP=0x001000000019660c
- (void)removeDelegate:(id)arg1;	// IMP=0x0010000000196529
- (void)addDelegate:(id)arg1 queue:(id)arg2;	// IMP=0x0010000000196416
- (void)performAsynchronousBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000196393
- (void)performSynchronousBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000196310
@property(readonly, nonatomic) _Bool shouldRouteToSpeakerWithProximity;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
- (void)dealloc;	// IMP=0x0010000000195f59
- (id)initWithQueue:(id)arg1;	// IMP=0x0010000000195edd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

