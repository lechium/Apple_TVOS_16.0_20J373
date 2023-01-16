//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ML3MusicLibrary;

__attribute__((visibility("hidden")))
@interface MLITDBGeniusDatabase : NSObject
{
}

+ (id)sharedGeniusDatabase;	// IMP=0x00600000000e3d3f
- (_Bool)getGeniusSimilaritiesDataAndBytesForGlobalID:(unsigned long long)arg1 intoData:(id)arg2;	// IMP=0x00000000000e3817
- (_Bool)getGeniusMetadataDataAndBytesForGlobalID:(unsigned long long)arg1 intoData:(id)arg2;	// IMP=0x00000000000e37f7
- (_Bool)getGeniusConfigrationDataAndBytesIntoData:(id)arg1;	// IMP=0x00000000000e37d4
- (id)copyGeniusSimilaritiesDataAndBytesForGlobalID:(unsigned long long)arg1;	// IMP=0x00000000000e3760
- (id)copyGeniusMetadataDataAndBytesForGlobalID:(unsigned long long)arg1;	// IMP=0x00000000000e36ec
- (unsigned int)geniusConfigurationVersion;	// IMP=0x00000000000e36cc
- (id)copyGeniusConfigrationDataAndBytes;	// IMP=0x00000000000e36a9
- (unsigned long long)defaultTrackCount;	// IMP=0x00000000000e367e
- (unsigned long long)defaultMinTrackCount;	// IMP=0x00000000000e3653
- (_Bool)hasGeniusFeatureEnabled;	// IMP=0x00000000000e363a
- (_Bool)hasGeniusDataAvailable;	// IMP=0x00000000000e35fa
- (_Bool)_hasAnySongs;	// IMP=0x00000000000e3539
- (_Bool)_readBlobForRowID:(unsigned long long)arg1 intoData:(id)arg2 table:(const char *)arg3 blobColumn:(const char *)arg4;	// IMP=0x00000000000e3434
- (_Bool)_readBlobIntoData:(id)arg1 table:(id)arg2 blobColumn:(id)arg3 where:(id)arg4;	// IMP=0x00000000000e33a5
- (id)_copyBlobDataAndBytesInTable:(id)arg1 blobColumn:(id)arg2 where:(id)arg3;	// IMP=0x00000000000e3363
- (_Bool)_copyBlobData:(id *)arg1 blobAllocType:(int)arg2 table:(id)arg3 blobColumn:(id)arg4 where:(id)arg5;	// IMP=0x00000000000e3035
- (unsigned long long)_getInt64ValueInTable:(id)arg1 column:(id)arg2 where:(id)arg3 limit:(unsigned int)arg4;	// IMP=0x00000000000e2e37
- (unsigned int)_getInt32ValueInTable:(id)arg1 column:(id)arg2;	// IMP=0x00000000000e2cf7
- (_Bool)_hasRowsInTable:(id)arg1;	// IMP=0x00000000000e2bdd
- (void)performGeniusDatabaseReadWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000e2b20
@property(readonly, nonatomic) ML3MusicLibrary *musicLibrary;
- (id)init;	// IMP=0x00000000000e2ad8

@end
