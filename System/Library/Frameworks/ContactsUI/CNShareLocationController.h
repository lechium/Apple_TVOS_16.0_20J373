//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNContact, CNFuture, CNUIIDSAvailabilityProvider, NSSet;
@protocol CNCancelable, CNShareLocationProtocol;

__attribute__((visibility("hidden")))
@interface CNShareLocationController : NSObject
{
    _Bool _isSharingIndefinitely;	// 8 = 0x8
    CNContact *_contact;	// 16 = 0x10
    NSObject<CNShareLocationProtocol> *_shareLocationDelegate;	// 24 = 0x18
    NSSet *_handles;	// 32 = 0x20
    CNUIIDSAvailabilityProvider *_idsAvailabilityProvider;	// 40 = 0x28
    id <CNCancelable> _bestPropertyCancelable;	// 48 = 0x30
    CNFuture *_bestPropertyFuture;	// 56 = 0x38
}

+ (id)fmfHandleFromContactProperty:(id)arg1;	// IMP=0x006000000009d49c
+ (id)fmfHandlesFromContact:(id)arg1;	// IMP=0x006000000009cf26
- (void).cxx_destruct;	// IMP=0x000000000009d68a
@property(retain, nonatomic) CNFuture *bestPropertyFuture; // @synthesize bestPropertyFuture=_bestPropertyFuture;
@property(retain, nonatomic) id <CNCancelable> bestPropertyCancelable; // @synthesize bestPropertyCancelable=_bestPropertyCancelable;
@property(retain, nonatomic) CNUIIDSAvailabilityProvider *idsAvailabilityProvider; // @synthesize idsAvailabilityProvider=_idsAvailabilityProvider;
@property(nonatomic) _Bool isSharingIndefinitely; // @synthesize isSharingIndefinitely=_isSharingIndefinitely;
@property(retain, nonatomic) NSSet *handles; // @synthesize handles=_handles;
@property(nonatomic) __weak NSObject<CNShareLocationProtocol> *shareLocationDelegate; // @synthesize shareLocationDelegate=_shareLocationDelegate;
@property(retain, nonatomic) CNContact *contact; // @synthesize contact=_contact;
- (void)notifySharingStatusDidChange;	// IMP=0x000000000009d3bf
- (void)initiateIDSRequest;	// IMP=0x000000000009cf20
- (id)endOfDayDate;	// IMP=0x000000000009ce87
- (void)stopSharingLocation;	// IMP=0x000000000009cd9c
- (void)shareLocationUntilEndDate:(id)arg1;	// IMP=0x000000000009cbba
- (void)perform:(id)arg1;	// IMP=0x000000000009c33a
@property(readonly, nonatomic) _Bool isSharing;
@property(readonly, nonatomic) _Bool canShare;
- (id)initWithIDSAvailabilityProvider:(id)arg1;	// IMP=0x000000000009bfea

@end

