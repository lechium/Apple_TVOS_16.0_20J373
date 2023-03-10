//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CNMockFavoritesLogger : NSObject
{
}

- (void)reportFavoritesAccessedBeforeFirstUnlock;	// IMP=0x0000000000099156
- (void)failedToWriteFavoritesToPath:(id)arg1 error:(id)arg2 simulateCrashReport:(_Bool)arg3;	// IMP=0x0000000000099150
- (void)failedToVerifyWrittenFavoritesExistsAtPath:(id)arg1;	// IMP=0x000000000009914a
- (void)failedToWriteRemoteFavorites:(id)arg1;	// IMP=0x0000000000099144
- (void)failedToVerifyFavorites:(id)arg1 withPropertyListFavorites:(id)arg2 error:(id)arg3;	// IMP=0x000000000009913e
- (void)failedToConvertFavoritesToPropertyList:(id)arg1;	// IMP=0x0000000000099138
- (void)failedToReadFavoritesFromPath:(id)arg1 error:(id)arg2 simulateCrashReport:(_Bool)arg3;	// IMP=0x0000000000099132
- (void)failedToReadRemoteFavorites:(id)arg1;	// IMP=0x000000000009912c
- (void)finishedWritingFavoritesToPath:(id)arg1 entriesCount:(unsigned long long)arg2;	// IMP=0x0000000000099126
- (void)finishedWritingRemoteFavorites;	// IMP=0x0000000000099120
- (void)finishedReadingFavoritesFromPath:(id)arg1 entriesCount:(unsigned long long)arg2;	// IMP=0x000000000009911a
- (void)finishedReadingRemoteFavorites;	// IMP=0x0000000000099114
- (void)rematchingFavorites:(CDUnknownBlockType)arg1;	// IMP=0x00000000000990f9
- (void)writingFavorites:(CDUnknownBlockType)arg1;	// IMP=0x00000000000990de
- (void)readingFavorites:(CDUnknownBlockType)arg1;	// IMP=0x00000000000990c3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

