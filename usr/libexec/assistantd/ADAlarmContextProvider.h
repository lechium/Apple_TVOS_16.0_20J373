//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AFInstanceContext, NSString, SOClockAlarmObserver;
@protocol AFContextDonation;

@interface ADAlarmContextProvider : NSObject
{
    id <AFContextDonation> _donationService;	// 8 = 0x8
    AFInstanceContext *_instanceContext;	// 16 = 0x10
    SOClockAlarmObserver *_observer;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000019d1dc
- (void)getRedactedContextForContextSnapshot:(id)arg1 metadata:(id)arg2 privacyPolicy:(long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000019ce62
- (void)clockAlarmObserver:(id)arg1 snapshotDidUpdateFrom:(id)arg2 to:(id)arg3;	// IMP=0x001000000019cd3f
- (void)clockAlarmObserver:(id)arg1 alarmDidDismiss:(id)arg2;	// IMP=0x001000000019ccf6
- (void)clockAlarmObserver:(id)arg1 alarmDidFire:(id)arg2;	// IMP=0x001000000019cc6a
- (id)initWithDonationService:(id)arg1 instanceContext:(id)arg2;	// IMP=0x001000000019cb40

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
