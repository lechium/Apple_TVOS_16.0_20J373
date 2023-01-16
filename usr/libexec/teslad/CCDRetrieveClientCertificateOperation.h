//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperation.h>

@class NSTimer;

@interface CCDRetrieveClientCertificateOperation : NSOperation
{
    _Bool _operationExecuting;	// 8 = 0x8
    _Bool _operationFinished;	// 9 = 0x9
    _Bool _operationReady;	// 10 = 0xa
    _Bool _certificateRetrievalFailed;	// 11 = 0xb
    CDUnknownBlockType _certificateRetrievalCompletionBlock;	// 16 = 0x10
    long long _certificateRetrievalRequestCount;	// 24 = 0x18
    NSTimer *_timeoutTimer;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000000a006
@property(retain, nonatomic) NSTimer *timeoutTimer; // @synthesize timeoutTimer=_timeoutTimer;
@property(nonatomic) long long certificateRetrievalRequestCount; // @synthesize certificateRetrievalRequestCount=_certificateRetrievalRequestCount;
@property(nonatomic) _Bool certificateRetrievalFailed; // @synthesize certificateRetrievalFailed=_certificateRetrievalFailed;
@property(nonatomic) _Bool operationReady; // @synthesize operationReady=_operationReady;
@property(nonatomic) _Bool operationFinished; // @synthesize operationFinished=_operationFinished;
@property(nonatomic) _Bool operationExecuting; // @synthesize operationExecuting=_operationExecuting;
@property(copy, nonatomic) CDUnknownBlockType certificateRetrievalCompletionBlock; // @synthesize certificateRetrievalCompletionBlock=_certificateRetrievalCompletionBlock;
- (void)timeoutTimerDidFire:(id)arg1;	// IMP=0x0010000000009f16
- (void)_startRetryTimerWithInterval:(double)arg1;	// IMP=0x0010000000009e06
- (void)_retryCertificateRetrievalIfAllowedAfterDelayOrFailWithError:(id)arg1;	// IMP=0x0010000000009d89
- (void)_retryCertificateRetrievalIfAllowed:(_Bool)arg1 afterDelay:(double)arg2 orFailWithError:(id)arg3;	// IMP=0x0010000000009cc7
- (void)_endOperation;	// IMP=0x0010000000009c92
- (void)_completeOperationWithReferenceKey:(id)arg1 certificates:(id)arg2 error:(id)arg3;	// IMP=0x0010000000009aa7
- (void)retrieveClientCertificate;	// IMP=0x0010000000009914
- (void)start;	// IMP=0x00100000000098d2
- (_Bool)isAsynchronous;	// IMP=0x00100000000098ca
- (_Bool)isFinished;	// IMP=0x001000000000984b
- (_Bool)isExecuting;	// IMP=0x00100000000097cc
- (_Bool)isReady;	// IMP=0x001000000000974d
- (id)init;	// IMP=0x001000000000970e

@end

