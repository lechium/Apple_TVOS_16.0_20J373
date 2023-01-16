//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CFNetwork/NSURLAuthenticationChallenge.h>

@class AVWeakReference, NSString;

__attribute__((visibility("hidden")))
@interface AVURLAuthenticationChallenge : NSURLAuthenticationChallenge
{
    AVWeakReference *_weakReference;	// 16 = 0x10
    unsigned long long _requestID;	// 24 = 0x18
    struct __CFDictionary *_requestInfo;	// 32 = 0x20
}

+ (SEL)_selectorForInformingDelegateOfCancellationByFig;	// IMP=0x001000000012107f
@property(readonly, nonatomic) struct __CFDictionary *_requestInfo; // @synthesize _requestInfo;
- (void)_performCancellationByClient;	// IMP=0x000000000012108c
- (_Bool)_shouldInformDelegateOfFigCancellation;	// IMP=0x0000000000121077
@property(readonly, nonatomic) unsigned long long _requestID;
- (id)_weakReference;	// IMP=0x0000000000121055
- (void)dealloc;	// IMP=0x0000000000120ffe
- (id)initWithProtectionSpace:(id)arg1 proposedCredential:(id)arg2 previousFailureCount:(long long)arg3 failureResponse:(id)arg4 error:(id)arg5 sender:(id)arg6;	// IMP=0x0000000000120fe0
- (id)initWithAuthenticationChallenge:(id)arg1 sender:(id)arg2;	// IMP=0x0000000000120fc8
- (id)initWithAuthenticationChallenge:(id)arg1 sender:(id)arg2 requestInfo:(struct __CFDictionary *)arg3 requestID:(unsigned long long)arg4;	// IMP=0x0000000000120ef5
- (id)init;	// IMP=0x0000000000120ed9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

