//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, _OSLogCollectionReference, _OSLogEventStoreMetadata;

__attribute__((visibility("hidden")))
@interface _OSLogIndex : NSObject
{
    NSMutableArray *_fileq;	// 8 = 0x8
    _OSLogCollectionReference *_lcr;	// 16 = 0x10
    NSString *_file;	// 24 = 0x18
    CDStruct_42ec109f _metadata;	// 32 = 0x20
    _Bool _metadataValid;	// 344 = 0x158
    _OSLogEventStoreMetadata *_metadata2;	// 352 = 0x160
    struct _os_timesync_db_s *_tsdb;	// 360 = 0x168
}

- (void).cxx_destruct;	// IMP=0x000000000001df0d
@property(readonly, nonatomic) struct _os_timesync_db_s *timesync; // @synthesize timesync=_tsdb;
- (void)enumerateFilesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000001dd20
- (void)enumerateEntriesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000001dd04
- (void)enumerateEntriesInRange:(struct os_timesync_range_s *)arg1 options:(unsigned int)arg2 usingCatalogFilter:(id)arg3 usingBlock:(CDUnknownBlockType)arg4;	// IMP=0x000000000001d9db
- (void)_enumerateEntriesInRange:(struct os_timesync_range_s *)arg1 options:(unsigned int)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000001d69e
- (void)enumerateEntriesFromLastBootWithOptions:(unsigned int)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000001d62a
- (void)enumerateEntriesFrom:(unsigned long long)arg1 to:(unsigned long long)arg2 options:(unsigned int)arg3 usingBlock:(CDUnknownBlockType)arg4;	// IMP=0x000000000001d5ab
@property(readonly, nonatomic) unsigned long long endWalltime;
@property(readonly, nonatomic) unsigned long long specialStartWalltime;
@property(readonly, nonatomic) unsigned long long persistStartWalltime;
- (_Bool)_buildSingleFileIndex:(id *)arg1;	// IMP=0x000000000001d475
- (_Bool)_buildFileIndex;	// IMP=0x000000000001d248
- (void)insertIndexFile:(id)arg1;	// IMP=0x000000000001d237
- (void)insertChunkStore:(id)arg1;	// IMP=0x000000000001d1bb
- (void)_foreachIndexFile:(CDUnknownBlockType)arg1;	// IMP=0x000000000001d093
- (_Bool)_addFileToIndex:(const char *)arg1 error:(id *)arg2;	// IMP=0x000000000001d020
- (_Bool)addReferenceToIndex:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001cf9d
- (_Bool)_openTimesyncDatabase;	// IMP=0x000000000001cf2b
- (_Bool)_readArchiveMetadata:(id *)arg1;	// IMP=0x000000000001c37a
- (void)dealloc;	// IMP=0x000000000001c338
- (id)initWithCollection:(id)arg1 timesync:(struct _os_timesync_db_s *)arg2 metadata:(id)arg3;	// IMP=0x000000000001bebb
- (id)initWithCollection:(id)arg1 buildLocalIndex:(_Bool)arg2;	// IMP=0x000000000001be05
- (id)init;	// IMP=0x000000000001bdaf

@end

