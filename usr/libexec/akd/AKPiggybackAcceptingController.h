//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AKCAPiggybackReporter, AKCircleRequestPayload, AKConfiguration, AKFuture, AKProximityController, KCJoiningAcceptAccountCircleDelegate, KCJoiningAcceptSession, NSString;

@interface AKPiggybackAcceptingController : NSObject
{
    AKCircleRequestPayload *_lastPayload;	// 8 = 0x8
    AKCircleRequestPayload *_initiatingPayload;	// 16 = 0x10
    long long _verificationAttempts;	// 24 = 0x18
    KCJoiningAcceptAccountCircleDelegate *_circleDelegate;	// 32 = 0x20
    _Bool _verificationFailed;	// 40 = 0x28
    _Bool _proximityFailed;	// 41 = 0x29
    AKCAPiggybackReporter *_piggybackReporter;	// 48 = 0x30
    AKProximityController *_proximityController;	// 56 = 0x38
    AKFuture *_proximityDetected;	// 64 = 0x40
    KCJoiningAcceptSession *_acceptSession;	// 72 = 0x48
    AKConfiguration *_configuration;	// 80 = 0x50
}

+ (_Bool)isInCircle;	// IMP=0x0020000000011065
- (void).cxx_destruct;	// IMP=0x00200000000122d1
@property(retain, nonatomic) AKConfiguration *configuration; // @synthesize configuration=_configuration;
@property(retain, nonatomic) KCJoiningAcceptSession *acceptSession; // @synthesize acceptSession=_acceptSession;
- (void)_checkForProximityWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000011e9f
- (void)_checkForProximityIfNeededWithCircleStep:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000011cf2
- (void)_stopProximityController;	// IMP=0x0010000000011cdc
- (void)_startProximityControllerWithPresenceSID:(id)arg1;	// IMP=0x001000000001152b
- (void)_startProximityControllerIfNeededWithPushPayload:(id)arg1;	// IMP=0x001000000001134c
- (void)_releaseAssertion;	// IMP=0x0010000000011346
- (void)_grabLockAssertion;	// IMP=0x0010000000011340
- (id)_generateSecret;	// IMP=0x0010000000011312
- (id)accountCode;	// IMP=0x0010000000011287
- (int)verificationFailed:(id *)arg1;	// IMP=0x00100000000111a6
- (id)secret;	// IMP=0x00100000000110c6
- (_Bool)isDone;	// IMP=0x00100000000110b0
- (id)_authKitAccountForPayload:(id)arg1;	// IMP=0x0010000000010fbf
- (id)replyContextWithPayload:(id)arg1;	// IMP=0x0010000000010e4d
- (id)_acceptSessionForPayload:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000010cd4
- (void)_finishProcessingPushPayload:(id)arg1 withReplyContext:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000103a7
- (void)_processProximityDetection:(_Bool)arg1 withReplyContext:(id)arg2 forPushPayload:(id)arg3;	// IMP=0x001000000000fb11
- (void)processPushPayload:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000000f484
- (id)initWithPiggybackReporter:(id)arg1;	// IMP=0x001000000000f3ef

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
