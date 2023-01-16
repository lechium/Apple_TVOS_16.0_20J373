//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface IDSRestrictions : NSObject
{
    NSMutableDictionary *_parentalControls;	// 8 = 0x8
    _Bool _active;	// 16 = 0x10
    _Bool _shouldPostNotifications;	// 17 = 0x11
}

+ (id)sharedInstance;	// IMP=0x0040000000287000
- (void).cxx_destruct;	// IMP=0x00200000002884c0
@property(readonly, nonatomic) _Bool active; // @synthesize active=_active;
@property(nonatomic) _Bool shouldPostNotifications; // @synthesize shouldPostNotifications=_shouldPostNotifications;
- (void)_managedPrefsNotification:(id)arg1;	// IMP=0x0010000000288360
- (_Bool)shouldDisableAccount:(id)arg1;	// IMP=0x0010000000288260
- (_Bool)shouldDisableService:(id)arg1;	// IMP=0x0010000000288160
- (void)updateAccountActivation;	// IMP=0x0010000000287a20
- (void)_updateParentalSettings;	// IMP=0x0010000000287530
- (void)_setIsDisabled:(_Bool)arg1 forService:(id)arg2;	// IMP=0x0010000000287460
- (_Bool)_isDisabledService:(id)arg1;	// IMP=0x00100000002873d0
- (id)init;	// IMP=0x00100000002871d0

@end

