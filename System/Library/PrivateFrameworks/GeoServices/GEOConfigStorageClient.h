//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface GEOConfigStorageClient : NSObject
{
}

+ (id)shared;	// IMP=0x0010000000d1cebf
- (void)resync;	// IMP=0x0000000000d1d5fd
- (void)setConfigValue:(id)arg1 forKey:(id)arg2 options:(unsigned long long)arg3 synchronous:(_Bool)arg4;	// IMP=0x0000000000d1d4f5
- (id)getConfigValueForKey:(id)arg1 countryCode:(id)arg2 options:(unsigned long long)arg3 source:(long long *)arg4;	// IMP=0x0000000000d1d39e
- (void)setConfigKeyExpiry:(id)arg1 options:(unsigned long long)arg2 date:(id)arg3 osVersion:(id)arg4;	// IMP=0x0000000000d1d299
- (void)getExpiringKeys:(unsigned long long)arg1 result:(CDUnknownBlockType)arg2;	// IMP=0x0000000000d1d157
- (id)getAllKeysAndValuesForOptions:(unsigned long long)arg1;	// IMP=0x0000000000d1d14a
- (void)getConfigValueForKey:(id)arg1 countryCode:(id)arg2 options:(unsigned long long)arg3 result:(CDUnknownBlockType)arg4;	// IMP=0x0000000000d1cf83
- (id)_init;	// IMP=0x0000000000d1cf54

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
