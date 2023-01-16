//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface GEODBReader : NSObject
{
    _Bool _defunct;	// 8 = 0x8
    _Bool _closed;	// 9 = 0x9
    int _editionUpdating;	// 12 = 0xc
    NSObject<OS_dispatch_queue> *_readQueue;	// 16 = 0x10
    NSString *_path;	// 24 = 0x18
    NSDictionary *_pragmaOverrides;	// 32 = 0x20
    struct sqlite3 *_db;	// 40 = 0x28
    struct sqlite3_stmt *_tileQuery;	// 48 = 0x30
    struct sqlite3_stmt *_versionQuery;	// 56 = 0x38
    CDStruct_4e27301a *_expirationRecords;	// 64 = 0x40
    unsigned long long _expirationRecordCount;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000000031a8f9
- (void)setExpirationRecords:(CDStruct_4e27301a *)arg1 count:(unsigned long long)arg2;	// IMP=0x000000000031a838
- (void)dataForKeys:(id)arg1 callbackQueue:(id)arg2 asyncHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000031a141
- (id)dataForKey:(struct _GEOTileKey *)arg1 isCurrent:(_Bool *)arg2 eTag:(id *)arg3;	// IMP=0x0000000000319fba
- (id)_dataForKey:(struct _GEOTileKey)arg1 isCurrent:(_Bool *)arg2 eTag:(id *)arg3;	// IMP=0x0000000000319f7d
- (id)_dataForA:(unsigned int)arg1 andB:(unsigned int)arg2 andC:(unsigned int)arg3 andD:(unsigned int)arg4 isCurrent:(_Bool *)arg5 eTag:(id *)arg6;	// IMP=0x0000000000319ced
@property _Bool closed;
- (void)_openDB;	// IMP=0x000000000031992b
- (void)_closeDB;	// IMP=0x00000000003198d9
- (void)_editionUpdateEnd:(id)arg1;	// IMP=0x00000000003198cf
- (void)_editionUpdateBegin:(id)arg1;	// IMP=0x00000000003198c5
- (void)_databaseReset:(id)arg1;	// IMP=0x00000000003197b0
- (void)dealloc;	// IMP=0x000000000031970e
- (id)initWithPath:(id)arg1 pragmaOverrides:(id)arg2;	// IMP=0x0000000000319502
- (id)initWithPath:(id)arg1;	// IMP=0x00000000003194ee

@end

