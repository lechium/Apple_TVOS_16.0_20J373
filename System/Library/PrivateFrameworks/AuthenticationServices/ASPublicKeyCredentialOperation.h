//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class LAContext, NSDictionary, NSError, NSMutableDictionary, NSString, NSUUID, _WKWebAuthenticationPanel;
@protocol ASPublicKeyCredentialManagerDelegate, OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface ASPublicKeyCredentialOperation : NSObject
{
    NSObject<OS_dispatch_semaphore> *_internalSemaphore;	// 8 = 0x8
    NSMutableDictionary *_identifiersToAssertionResponses;	// 16 = 0x10
    CDUnknownBlockType _selectPlatformAssertionCallback;	// 24 = 0x18
    CDUnknownBlockType _selectSecurityKeyAssertionCallback;	// 32 = 0x20
    _Bool _hasTornDown;	// 40 = 0x28
    NSUUID *_uuid;	// 48 = 0x30
    id <ASPublicKeyCredentialManagerDelegate> _delegate;	// 56 = 0x38
    NSString *_relyingPartyIdentifier;	// 64 = 0x40
    _WKWebAuthenticationPanel *_panel;	// 72 = 0x48
    NSString *_sourceApplicationIdentifier;	// 80 = 0x50
    LAContext *_authenticatedLAContext;	// 88 = 0x58
    NSError *_overrideError;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x00000000000084ca
@property(copy, nonatomic) NSError *overrideError; // @synthesize overrideError=_overrideError;
@property(retain, nonatomic) LAContext *authenticatedLAContext; // @synthesize authenticatedLAContext=_authenticatedLAContext;
@property(copy, nonatomic) NSString *sourceApplicationIdentifier; // @synthesize sourceApplicationIdentifier=_sourceApplicationIdentifier;
@property(retain, nonatomic) _WKWebAuthenticationPanel *panel; // @synthesize panel=_panel;
@property(copy, nonatomic) NSString *relyingPartyIdentifier; // @synthesize relyingPartyIdentifier=_relyingPartyIdentifier;
@property(nonatomic) __weak id <ASPublicKeyCredentialManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
- (void)tearDownIfNecessary;	// IMP=0x0000000000008298
@property(readonly, nonatomic) _Bool hasTornDown; // @synthesize hasTornDown=_hasTornDown;
- (void)selectSecurityKeyAssertion:(id)arg1;	// IMP=0x0000000000008204
- (void)selectPlatformAssertion:(id)arg1;	// IMP=0x000000000000819f
- (void)setSecurityKeyAssertionSelectionCallback:(CDUnknownBlockType)arg1;	// IMP=0x000000000000813e
- (void)setPlatformAssertionSelectionCallback:(CDUnknownBlockType)arg1;	// IMP=0x00000000000080dd
- (void)mergeIdentifiersToAssertionResponses:(id)arg1;	// IMP=0x0000000000007e71
@property(readonly, copy, nonatomic) NSDictionary *identifiersToAssertionResponses;
- (id)initWithRelyingPartyIdentifier:(id)arg1 delegate:(id)arg2;	// IMP=0x0000000000007d5b

@end
