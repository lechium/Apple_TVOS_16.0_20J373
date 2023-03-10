//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCountedSet, NSLock, NSMutableSet, NSTimer;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface TVHKPreferenceManager : NSObject
{
    NSLock *_preferencesLock;	// 8 = 0x8
    NSTimer *_prefsSyncTimer;	// 16 = 0x10
    NSMutableSet *_notificationDomains;	// 24 = 0x18
    NSMutableSet *_dirtyDomains;	// 32 = 0x20
    NSCountedSet *_pendingNotifcations;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_callbackDispatchQueue;	// 48 = 0x30
}

+ (id)sharedInstance;	// IMP=0x00600000000927d1
- (void).cxx_destruct;	// IMP=0x0000000000093fbb
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *callbackDispatchQueue; // @synthesize callbackDispatchQueue=_callbackDispatchQueue;
- (void)_postPrefsDidChangeForDomains:(id)arg1;	// IMP=0x0000000000093c8d
- (void)_handleDistributedSyncForDomain:(id)arg1 notificationKey:(id)arg2;	// IMP=0x0000000000093af8
- (void)_flushPreferences:(id)arg1;	// IMP=0x00000000000939fc
- (void)_markPreferencesDirtyForDomain:(id)arg1;	// IMP=0x00000000000938a2
- (id)_valueForKey:(id)arg1 forDomain:(id)arg2;	// IMP=0x0000000000093746
- (void)_setValue:(id)arg1 forKey:(id)arg2 forDomain:(id)arg3;	// IMP=0x00000000000935c9
- (void)syncAllDomains;	// IMP=0x000000000009354d
- (void)_syncDomains:(id)arg1;	// IMP=0x000000000009325a
- (_Bool)syncDomain:(id)arg1;	// IMP=0x00000000000930ea
- (void)enableDistributedSyncForDomain:(id)arg1;	// IMP=0x0000000000092f28
- (_Bool)setObject:(id)arg1 forKey:(id)arg2 forDomain:(id)arg3;	// IMP=0x0000000000092e8b
- (_Bool)setBool:(_Bool)arg1 forKey:(id)arg2 forDomain:(id)arg3;	// IMP=0x0000000000092dd0
- (_Bool)setDouble:(double)arg1 forKey:(id)arg2 forDomain:(id)arg3;	// IMP=0x0000000000092d12
- (_Bool)setInteger:(int)arg1 forKey:(id)arg2 forDomain:(id)arg3;	// IMP=0x0000000000092c58
- (_Bool)setInt64:(long long)arg1 forKey:(id)arg2 forDomain:(id)arg3;	// IMP=0x0000000000092b9e
- (_Bool)canSetPreferencesForKey:(id)arg1 forDomain:(id)arg2;	// IMP=0x0000000000092b88
- (id)numberForKey:(id)arg1 forDomain:(id)arg2;	// IMP=0x0000000000092b23
- (id)stringForKey:(id)arg1 forDomain:(id)arg2;	// IMP=0x0000000000092abe
- (_Bool)boolForKey:(id)arg1 forDomain:(id)arg2 defaultValue:(_Bool)arg3;	// IMP=0x0000000000092a85
- (double)doubleForKey:(id)arg1 forDomain:(id)arg2 defaultValue:(double)arg3;	// IMP=0x0000000000092a02
- (int)integerForKey:(id)arg1 forDomain:(id)arg2 defaultValue:(int)arg3;	// IMP=0x0000000000092986
- (long long)int64ForKey:(id)arg1 forDomain:(id)arg2 defaultValue:(long long)arg3;	// IMP=0x000000000009290a
- (id)objectForKey:(id)arg1 forDomain:(id)arg2;	// IMP=0x00000000000928f8
- (id)init;	// IMP=0x0000000000092826

@end

