//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSData, NSDate, NSString, SDAppleIDServerTask;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SDAppleIDIdentityRequest : NSObject
{
    _Bool _activated;	// 8 = 0x8
    NSString *_altDSID;	// 16 = 0x10
    SDAppleIDServerTask *_certificateCreateTask;	// 24 = 0x18
    NSDate *_certificateExpirationDate;	// 32 = 0x20
    SDAppleIDServerTask *_certificateFetchTask;	// 40 = 0x28
    NSString *_certificatePEM;	// 48 = 0x30
    NSString *_certificateSerialNumber;	// 56 = 0x38
    long long _certificateStatus;	// 64 = 0x40
    NSString *_certificateToken;	// 72 = 0x48
    unsigned long long _createRetryCount;	// 80 = 0x50
    NSObject<OS_dispatch_source> *_createDelayTimer;	// 88 = 0x58
    NSString *_csrPEM;	// 96 = 0x60
    NSObject<OS_dispatch_source> *_fetchDelayTimer;	// 104 = 0x68
    unsigned long long _fetchRetryCount;	// 112 = 0x70
    NSString *_intermediateCertificatePEM;	// 120 = 0x78
    _Bool _invalidated;	// 128 = 0x80
    struct __SecKey *_privateKey;	// 136 = 0x88
    NSData *_privateKeyPersistentReference;	// 144 = 0x90
    struct __SecKey *_publicKey;	// 152 = 0x98
    NSString *_appleID;	// 160 = 0xa0
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 168 = 0xa8
    CDUnknownBlockType _responseHandler;	// 176 = 0xb0
    MISSING_TYPE *_certificateTokenHandler;	// 184 = 0xb8
}

- (void).cxx_destruct;	// IMP=0x00200000000d7272
@property(copy, nonatomic) CDUnknownBlockType certificateTokenHandler; // @synthesize certificateTokenHandler=_certificateTokenHandler;
@property(copy, nonatomic) CDUnknownBlockType responseHandler; // @synthesize responseHandler=_responseHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(readonly, nonatomic) NSString *appleID; // @synthesize appleID=_appleID;
- (void)invalidate;	// IMP=0x00100000000d71a8
- (id)initWithAppleID:(id)arg1 certificateToken:(id)arg2 privateKeyPersistentReference:(id)arg3;	// IMP=0x00100000000d70c7
- (id)initWithAppleID:(id)arg1;	// IMP=0x00100000000d7038
- (void)activate;	// IMP=0x00100000000d6fd4
- (void)_sendFetchCertificateRequest;	// IMP=0x00100000000d6dfb
- (void)_sendCreateCertificateRequest;	// IMP=0x00100000000d69ac
- (void)_scheduleFetchRetryWithDelay:(unsigned long long)arg1;	// IMP=0x00100000000d6920
- (void)_scheduleCreateRetryWithDelay:(unsigned long long)arg1;	// IMP=0x00100000000d6894
- (void)_scheduleFetchCertificateTaskWithDelay:(unsigned long long)arg1;	// IMP=0x00100000000d671e
- (void)_scheduleCreateCertificateTaskWithDelay:(unsigned long long)arg1;	// IMP=0x00100000000d65a8
- (void)_responseHandlerWithIdentity:(id)arg1 error:(id)arg2;	// IMP=0x00100000000d64e0
- (void)_handleKeyPairAvailable;	// IMP=0x00100000000d62aa
- (void)_handleReceivedCertificate;	// IMP=0x00100000000d5fd0
- (void)_handleFetchTimerFired;	// IMP=0x00100000000d5f1f
- (void)_handleCreateTimerFired;	// IMP=0x00100000000d5e6e
- (void)_handleCertificate:(struct __SecCertificate *)arg1 intermediateCertificate:(struct __SecCertificate *)arg2 withTrustResult:(_Bool)arg3 error:(int)arg4;	// IMP=0x00100000000d5620
- (void)_handleCertificateFetchResponseWithInfo:(id)arg1 error:(id)arg2;	// IMP=0x00100000000d4a1b
- (void)_handleCertificateFetchResponseError:(id)arg1;	// IMP=0x00100000000d48ff
- (void)_handleCertificateCreateResponseWithInfo:(id)arg1 error:(id)arg2;	// IMP=0x00100000000d46ae
- (void)_handleCertificateCreateResponseError:(id)arg1;	// IMP=0x00100000000d45f2
- (void)dealloc;	// IMP=0x00100000000d459f
- (void)_invalidate;	// IMP=0x00100000000d42d5
- (void)_activate;	// IMP=0x00100000000d415c

@end

