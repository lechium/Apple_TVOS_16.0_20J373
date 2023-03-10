//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppleMediaServices/AMSURLProtocolHandler.h>

@class ACAccount, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface AMSUIPaymentVerificationProtocolHandler : AMSURLProtocolHandler
{
    ACAccount *_account;	// 8 = 0x8
    NSMutableDictionary *_accountParameters;	// 16 = 0x10
}

+ (void)_setHeaders:(id)arg1 on:(id)arg2;	// IMP=0x0010000000042f55
+ (id)_headersFromAccountParameters:(id)arg1;	// IMP=0x0010000000042d5d
+ (id)_headersFromAccount:(id)arg1;	// IMP=0x0010000000042d50
+ (id)headersFromAccount:(id)arg1 accountParameters:(id)arg2;	// IMP=0x0010000000042d1d
+ (id)requestAddingHeaders:(id)arg1 to:(id)arg2;	// IMP=0x0010000000042c7e
- (void).cxx_destruct;	// IMP=0x0000000000043a3a
@property(retain, nonatomic) NSMutableDictionary *accountParameters; // @synthesize accountParameters=_accountParameters;
@property(retain, nonatomic) ACAccount *account; // @synthesize account=_account;
- (void)AMSURLSession:(id)arg1 task:(id)arg2 handleAuthenticateRequest:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000043303
- (void)reconfigureNewRequest:(id)arg1 originalTask:(id)arg2 redirect:(_Bool)arg3 error:(id *)arg4;	// IMP=0x0000000000042ffe
- (id)initWithAccount:(id)arg1 accountParameters:(id)arg2;	// IMP=0x0000000000042bc9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

