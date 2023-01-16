//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AFInstanceContext, NSString;
@protocol AFContextDonation;

@interface ADMultiUserStateContextProvider : NSObject
{
    id <AFContextDonation> _donationService;	// 8 = 0x8
    AFInstanceContext *_instanceContext;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000002cf4ce
- (void)getRedactedContextForContextSnapshot:(id)arg1 metadata:(id)arg2 privacyPolicy:(long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000002cf4ba
- (void)handleMultiUserDidReceiveScoresNotification:(id)arg1;	// IMP=0x00100000002cf104
- (id)initWithDonationService:(id)arg1 instanceContext:(id)arg2;	// IMP=0x00100000002cefb1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

