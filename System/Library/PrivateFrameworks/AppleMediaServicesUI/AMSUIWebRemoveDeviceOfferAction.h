//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ACAccount, NSString;

__attribute__((visibility("hidden")))
@interface AMSUIWebRemoveDeviceOfferAction
{
    ACAccount *_account;	// 8 = 0x8
    NSString *_identifier;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000863c4
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) ACAccount *account; // @synthesize account=_account;
- (id)runAction;	// IMP=0x000000000008618f
- (id)initWithJSObject:(id)arg1 context:(id)arg2;	// IMP=0x0000000000085fee

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

