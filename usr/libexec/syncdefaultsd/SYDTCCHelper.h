//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSet;
@protocol OS_dispatch_queue;

@interface SYDTCCHelper : NSObject
{
    int _notifyToken;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSSet *_cachedDisabledStoreIdentifiers;	// 24 = 0x18
}

+ (id)sharedHelper;	// IMP=0x004000000000bebb
- (void).cxx_destruct;	// IMP=0x002000000000cf22
@property(retain, nonatomic) NSSet *cachedDisabledStoreIdentifiers; // @synthesize cachedDisabledStoreIdentifiers=_cachedDisabledStoreIdentifiers;
@property(nonatomic) int notifyToken; // @synthesize notifyToken=_notifyToken;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)stopListeningToTCCAccessChangedNotifications;	// IMP=0x001000000000ce66
- (void)startListeningToTCCAccessChangedNotifications;	// IMP=0x001000000000cc94
- (void)enableUbiquityIfNecessaryForAuditToken:(CDStruct_6ad76789)arg1;	// IMP=0x001000000000c899
- (id)findDisabledStoreIdentifiers;	// IMP=0x001000000000c2e0
- (_Bool)isUbiquityDisabledForStoreIdentifier:(id)arg1;	// IMP=0x001000000000bfe7
- (void)dealloc;	// IMP=0x001000000000bfa9
- (id)init;	// IMP=0x001000000000bf10

@end
