//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOSQLiteDB, NSURL;

@interface GEOImageServicePersistence : NSObject
{
    NSURL *_dbFileURL;	// 8 = 0x8
    GEOSQLiteDB *_db;	// 16 = 0x10
    double _maximumAge;	// 24 = 0x18
    unsigned long long _numberOfEntries;	// 32 = 0x20
    unsigned long long _totalDataSize;	// 40 = 0x28
    unsigned long long _maxTotalDataSize;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x002000000003ec01
- (void)getDataForIdentifier:(id)arg1 width:(unsigned int)arg2 height:(unsigned int)arg3 callbackQueue:(id)arg4 callback:(CDUnknownBlockType)arg5;	// IMP=0x001000000003e5ef
- (void)addData:(id)arg1 forIdentifier:(id)arg2 width:(unsigned int)arg3 height:(unsigned int)arg4;	// IMP=0x001000000003e100
- (unsigned long long)shrinkBySize:(unsigned long long)arg1;	// IMP=0x001000000003e008
- (unsigned long long)shrinkToSize:(unsigned long long)arg1;	// IMP=0x001000000003df10
- (unsigned long long)calculateFreeableSize;	// IMP=0x001000000003de4c
- (unsigned long long)_shrinkBySize:(unsigned long long)arg1;	// IMP=0x001000000003dba6
- (unsigned long long)_shrinkToSize:(unsigned long long)arg1;	// IMP=0x001000000003db61
- (_Bool)_deleteAndRecreateDB;	// IMP=0x001000000003db1b
- (unsigned long long)_evictAssetsOlderThanAllowedThreshold;	// IMP=0x001000000003d80d
- (void)_evictIfNecessary;	// IMP=0x001000000003d7ef
- (void)_updateDataSizeOnDBQueue;	// IMP=0x001000000003d714
- (void)tearDown;	// IMP=0x001000000003d660
- (_Bool)_setup:(id)arg1;	// IMP=0x001000000003d42e
- (id)initWithDBFileURL:(id)arg1 maximumTotalDataSize:(unsigned long long)arg2 maximumAge:(double)arg3;	// IMP=0x001000000003d0ff
- (id)initWithDBFileURL:(id)arg1;	// IMP=0x001000000003d0e3
- (id)init;	// IMP=0x001000000003d0cf

@end
