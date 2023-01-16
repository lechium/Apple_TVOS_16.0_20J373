//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface IDSLinkPreferencesManager : NSObject
{
    struct _opaque_pthread_mutex_t _preferencesLock;	// 8 = 0x8
    NSMutableDictionary *_servicesWithPreferences;	// 72 = 0x48
    NSObject<OS_dispatch_queue> *_power_log_queue;	// 80 = 0x50
}

+ (id)sharedInstance;	// IMP=0x00400000001ebcd0
- (void).cxx_destruct;	// IMP=0x00200000001ed650
- (void)_logRequestInPowerDictionaryForService:(id)arg1 preferences:(id)arg2;	// IMP=0x00100000001ed510
- (id)accumulativePreferencesForAllServices;	// IMP=0x00100000001eccd0
- (id)preferencesForService:(id)arg1;	// IMP=0x00100000001ecc10
- (_Bool)_validatePreferences:(id)arg1 forService:(id)arg2;	// IMP=0x00100000001ec880
- (void)resetPreferencesForAllServices;	// IMP=0x00100000001ec270
- (void)updateService:(id)arg1 withPreferences:(id)arg2;	// IMP=0x00100000001ebf00
- (void)dealloc;	// IMP=0x00100000001ebe90
- (id)init;	// IMP=0x00100000001ebd90

@end

