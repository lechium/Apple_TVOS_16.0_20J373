//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesStore/ISOperation.h>

@interface DownloadsDatabaseGarbageCollectionOperation : ISOperation
{
}

+ (_Bool)garbageCollectionTimerIsExpired;	// IMP=0x004000000018fca9
- (void)_garbageCollectWorkingDirectoryPath:(id)arg1;	// IMP=0x0040000000190d54
- (void)_garbageCollectWorkingDirectory;	// IMP=0x0010000000190c7a
- (void)_garbageCollectSoftwareDownloads;	// IMP=0x00100000001904d7
- (void)_garbageCollectPersistentManagers;	// IMP=0x001000000018fd8f
- (void)run;	// IMP=0x001000000018fd04

@end

