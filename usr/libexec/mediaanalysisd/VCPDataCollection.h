//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface VCPDataCollection : NSObject
{
}

+ (void)reportMetric:(const struct __CFString *)arg1 withValue:(unsigned long long)arg2;	// IMP=0x004000000003c9ef
+ (unsigned long long)truncate:(unsigned long long)arg1;	// IMP=0x001000000003c965
+ (id)sharedDataCollection;	// IMP=0x001000000003c910
- (void)reportBackgroundAnalysisProgressMetrics:(id)arg1;	// IMP=0x004000000003e169
- (void)reportDailyBackgroundAnalysisMetrics:(id)arg1 withNormalizeRatio:(double)arg2;	// IMP=0x001000000003d2ed
- (void)reportDatabaseCorruption;	// IMP=0x001000000003d2c8
- (void)reportDatabaseSizeBytes:(unsigned long long)arg1;	// IMP=0x001000000003d2a5
- (void)reportBlacklistedAssetCount:(unsigned long long)arg1;	// IMP=0x001000000003d282
- (void)reportLivePhotoStatistics:(id)arg1 forPhotoLibrary:(id)arg2;	// IMP=0x001000000003cdd4
- (void)reportMovieStatistics:(id)arg1 forPhotoLibrary:(id)arg2;	// IMP=0x001000000003cdb9
- (void)reportPhotoStatistics:(id)arg1 forPhotoLibrary:(id)arg2;	// IMP=0x001000000003cd9e
- (void)reportStatistics:(id)arg1 forMediaType:(long long)arg2 forPhotoLibrary:(id)arg3;	// IMP=0x001000000003c9f5

@end

