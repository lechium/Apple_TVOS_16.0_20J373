//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AKAuthorizationTVServicePresenter, AKClient, AKCredentialRequestContext, MISSING_TYPE, NSData, NSNumber, RPAppSignInService, RPCompanionLinkClient;

@interface AKAuthorizationRapportClient : NSObject
{
    _Bool _hasEndorserAuthorizing;	// 8 = 0x8
    AKClient *_client;	// 16 = 0x10
    RPCompanionLinkClient *_linkClient;	// 24 = 0x18
    CDUnknownBlockType _authorizationCompletion;	// 32 = 0x20
    AKAuthorizationTVServicePresenter *_companionServicePresenter;	// 40 = 0x28
    RPAppSignInService *_advertisingService;	// 48 = 0x30
    AKCredentialRequestContext *_credentialRequestContext;	// 56 = 0x38
    NSData *_tvAppIconData;	// 64 = 0x40
    NSNumber *_tvAppIconScale;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00200000000a064d
@property(retain, nonatomic) NSNumber *tvAppIconScale; // @synthesize tvAppIconScale=_tvAppIconScale;
@property(retain, nonatomic) NSData *tvAppIconData; // @synthesize tvAppIconData=_tvAppIconData;
@property(retain, nonatomic) AKCredentialRequestContext *credentialRequestContext; // @synthesize credentialRequestContext=_credentialRequestContext;
@property(nonatomic) _Bool hasEndorserAuthorizing; // @synthesize hasEndorserAuthorizing=_hasEndorserAuthorizing;
@property(retain, nonatomic) RPAppSignInService *advertisingService; // @synthesize advertisingService=_advertisingService;
@property(retain, nonatomic) AKAuthorizationTVServicePresenter *companionServicePresenter; // @synthesize companionServicePresenter=_companionServicePresenter;
@property(copy, nonatomic) CDUnknownBlockType authorizationCompletion; // @synthesize authorizationCompletion=_authorizationCompletion;
@property(retain, nonatomic) RPCompanionLinkClient *linkClient; // @synthesize linkClient=_linkClient;
@property(readonly, nonatomic) AKClient *client; // @synthesize client=_client;
- (void)_handleDidStartServerAuthorizationWithEvent:(id)arg1 options:(id)arg2;	// IMP=0x00100000000a0570
- (void)_fetchAssociatedDomainsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000a02ab
- (void)_invalidate;	// IMP=0x00100000000a023d
- (void)_dismissUI;	// IMP=0x00100000000a0237
- (void)_handleAuthorizationDidFinishWithRequest:(id)arg1 options:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000009ff4a
- (void)_sendDidTapNotificationMessage;	// IMP=0x001000000009ff44
- (void)_handleStartAuthorizingWithRequest:(id)arg1 options:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000009fa10
- (MISSING_TYPE *)_fetchTVAppIcon;	// IMP=0x001000000009fa0a
- (void)_presentUI;	// IMP=0x001000000009f81c
- (void)_presentUIWithControllerClassName:(id)arg1 extraOptions:(id)arg2 presentationServiceCompletion:(CDUnknownBlockType)arg3;	// IMP=0x001000000009f7c0
- (void)_callCompletionWithAuthorization:(id)arg1 error:(id)arg2;	// IMP=0x001000000009f607
- (void)performAuthorization:(id)arg1 companionLinkClient:(id)arg2 advertisingService:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000009f3ce
- (void)_configureLinkClientWithService:(id)arg1 companionLinkClient:(id)arg2 requestContext:(id)arg3;	// IMP=0x001000000009ebe5
- (void)_verifyAccountTrustWithRequestContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000009e927
- (void)performAuthorization:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000009e6cc
- (id)initWithClient:(id)arg1;	// IMP=0x001000000009e647
- (id)init;	// IMP=0x001000000009e61c

@end

