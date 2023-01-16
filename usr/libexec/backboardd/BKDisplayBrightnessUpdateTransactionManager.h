//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BKDisplayBrightnessController;
@protocol BSInvalidatable;

@interface BKDisplayBrightnessUpdateTransactionManager : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    int _numPendingTransactions;	// 12 = 0xc
    float _systemDisplayBrightness;	// 16 = 0x10
    id <BSInvalidatable> _suppressBrightnessNotifications;	// 24 = 0x18
    BKDisplayBrightnessController *_brightnessController;	// 32 = 0x20
    _Bool _commitPending;	// 40 = 0x28
    _Bool _shouldRestoreSystemBrightness;	// 41 = 0x29
}

+ (id)sharedInstance;	// IMP=0x004000000004b67a
- (void).cxx_destruct;	// IMP=0x002000000004b652
- (void)_lock_commitDisplayBrightness;	// IMP=0x001000000004b570
- (void)_endUpdateTransaction:(id)arg1;	// IMP=0x001000000004b330
- (void)_beginUpdateTransaction:(id)arg1;	// IMP=0x001000000004b221
- (void)restoreSystemDisplayBrightness;	// IMP=0x001000000004b186
- (float)systemDisplayBrightness;	// IMP=0x001000000004b143
- (void)setDisplayBrightness:(float)arg1 permanently:(_Bool)arg2;	// IMP=0x001000000004b08d
- (void)synchronizeALSPreferencesAndSystemDisplayBrightness;	// IMP=0x001000000004b022
- (id)_initWithBrightnessController:(id)arg1;	// IMP=0x001000000004af37

@end
