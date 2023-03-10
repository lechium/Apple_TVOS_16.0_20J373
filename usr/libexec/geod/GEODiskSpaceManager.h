//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface GEODiskSpaceManager : NSObject
{
    NSString *_cacheDeleteID;	// 8 = 0x8
    NSMutableArray *_diskSpaceProviders;	// 16 = 0x10
    _Bool _freePurgableInProgress;	// 24 = 0x18
    double _lastSignificantUpdate;	// 32 = 0x20
    double _cachedPurgableTime[4];	// 40 = 0x28
    unsigned long long _cachedPurgableSpace[4];	// 72 = 0x48
}

+ (id)sharedManager;	// IMP=0x00200000000307cb
- (void).cxx_destruct;	// IMP=0x002000000003188f
@property(readonly, copy, nonatomic) NSString *cacheDeleteID; // @synthesize cacheDeleteID=_cacheDeleteID;
- (unsigned long long)freePurgableDiskSpace:(unsigned long long)arg1 urgency:(int)arg2;	// IMP=0x00100000000316cc
- (unsigned long long)purgableDiskSpaceForUrgency:(int)arg1;	// IMP=0x0010000000031504
- (void)reportSignificantPurgableDiskSpaceUpdate;	// IMP=0x00100000000312c2
- (id)diskSpaceProviderForIdentifier:(id)arg1;	// IMP=0x00100000000310a5
- (void)addDiskSpaceProvider:(id)arg1;	// IMP=0x0010000000030ff8
- (void)_registerCacheDeleteCallbacks;	// IMP=0x00100000000309ef
- (id)_validVolume:(id)arg1;	// IMP=0x00100000000308e9
- (id)initWithCacheDeleteID:(id)arg1;	// IMP=0x0010000000030861
- (id)init;	// IMP=0x0010000000030837

@end

