//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol AFContextDonation;

@interface ADSystemStateContextProvider : NSObject
{
    id <AFContextDonation> _donationService;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000001d9748
- (void)getRedactedContextForContextSnapshot:(id)arg1 metadata:(id)arg2 privacyPolicy:(long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000001d9734
- (void)pineBoardSystemStateObserver:(id)arg1 pineBoardStateDidChangeFrom:(long long)arg2 to:(long long)arg3;	// IMP=0x00100000001d96ee
- (void)_donateSystemStateContextWithSnapshot:(id)arg1;	// IMP=0x00100000001d95e4
- (void)_handleSleepStateChangedToState:(long long)arg1 fromState:(long long)arg2;	// IMP=0x00100000001d9558
- (id)initWithDonationService:(id)arg1;	// IMP=0x00100000001d940a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

