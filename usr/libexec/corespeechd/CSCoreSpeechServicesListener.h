//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSGibraltarVoiceTriggerHandler, NSString, NSXPCListener;
@protocol OS_dispatch_queue;

@interface CSCoreSpeechServicesListener : NSObject
{
    CSGibraltarVoiceTriggerHandler *_gibraltarVoiceTriggerHandler;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSXPCListener *_servicesListener;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000038700
@property(retain, nonatomic) NSXPCListener *servicesListener; // @synthesize servicesListener=_servicesListener;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) CSGibraltarVoiceTriggerHandler *gibraltarVoiceTriggerHandler; // @synthesize gibraltarVoiceTriggerHandler=_gibraltarVoiceTriggerHandler;
- (oneway void)getFirstPassRunningMode:(CDUnknownBlockType)arg1;	// IMP=0x00100000000385e2
- (oneway void)requestUpdatedSATAudio:(CDUnknownBlockType)arg1;	// IMP=0x00100000000385cc
- (oneway void)clearTriggerCount:(CDUnknownBlockType)arg1;	// IMP=0x0010000000038506
- (oneway void)getTriggerCount:(CDUnknownBlockType)arg1;	// IMP=0x001000000003843e
- (oneway void)setDelayInterstitialSounds:(id)arg1 level:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000038311
- (oneway void)getCurrentVoiceTriggerLocaleWithEndpointId:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000038203
- (oneway void)getTestResponse:(CDUnknownBlockType)arg1;	// IMP=0x001000000003815e
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x001000000003805a
- (_Bool)_servicesListenerShouldAcceptNewConnection:(id)arg1;	// IMP=0x0010000000037ec8
- (void)listen;	// IMP=0x0010000000037dee
- (id)init;	// IMP=0x0010000000037d96

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

