//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AKAuthenticationUILiaison, AKClient;
@protocol AKDServerUIDelegate;

@interface AKDServerUIController : NSObject
{
    AKAuthenticationUILiaison *_authUILiaison;	// 8 = 0x8
    id <AKDServerUIDelegate> _delegate;	// 16 = 0x10
    AKClient *_client;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000008ad58
- (id)_fetchPhoneInformationWithAdditionalInfo:(id)arg1 error:(id *)arg2;	// IMP=0x001000000008accb
- (void)_fetchIDSCertificateWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000008ac50
- (void)_decorateLoadDelegate:(id)arg1 withContext:(id)arg2;	// IMP=0x001000000008a873
- (id)resourceLoadDelegateWithContext:(id)arg1 authResponse:(id)arg2;	// IMP=0x001000000008a552
- (id)resourceLoadDelegateWithContext:(id)arg1;	// IMP=0x001000000008a4f7
- (void)getServerUILoadDelegateWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000008a213
- (void)getServerUILoadDelegateWithServerContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000089ea0
- (id)_errorFromServerResponse:(id)arg1;	// IMP=0x0010000000089d0d
- (void)_showServerUIWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000892b7
- (void)showServerUIWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000008905d
- (id)_AKIDSCertificateFetchQueue;	// IMP=0x0010000000088fdc
- (id)initWithLiaison:(id)arg1 client:(id)arg2 delegate:(id)arg3;	// IMP=0x0010000000088f32
- (id)initWithClient:(id)arg1;	// IMP=0x0010000000088ed8

@end

