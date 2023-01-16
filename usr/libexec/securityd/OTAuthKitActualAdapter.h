//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKKSListenerCollection;
@protocol OTAuthKitAdapterNotifier;

@interface OTAuthKitActualAdapter : NSObject
{
    CKKSListenerCollection<OTAuthKitAdapterNotifier> *_notifiers;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000137b13
@property(retain) CKKSListenerCollection<OTAuthKitAdapterNotifier> *notifiers; // @synthesize notifiers=_notifiers;
- (void)deliverAKDeviceListDeltaMessagePayload:(id)arg1;	// IMP=0x001000000013796e
- (void)notifyAKDeviceList:(id)arg1;	// IMP=0x001000000013789e
- (void)registerNotification:(id)arg1;	// IMP=0x001000000013776f
- (void)fetchCurrentDeviceListByAltDSID:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000013748d
- (id)machineID:(id *)arg1;	// IMP=0x0010000000137168
- (_Bool)accountIsDemoAccountByAltDSID:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000137035
- (_Bool)accountIsHSA2ByAltDSID:(id)arg1;	// IMP=0x0010000000136e85

@end
