//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GeoServices/GEOServer.h>

@interface GEOMobileAssetResourceServer : GEOServer
{
    double _lastCorruptMessage;	// 8 = 0x8
}

+ (unsigned long long)launchMode;	// IMP=0x0020000000017f41
+ (id)identifier;	// IMP=0x0010000000017f34
- (void)purgeDiskCacheWithRequest:(id)arg1;	// IMP=0x001000000003cbf5
- (void)calculateFreeableWithRequest:(id)arg1;	// IMP=0x001000000003cb11
- (unsigned long long)freePurgableDiskSpace:(unsigned long long)arg1 urgency:(int)arg2;	// IMP=0x001000000003caf4
- (unsigned long long)purgableDiskSpaceForUrgency:(int)arg1;	// IMP=0x001000000003cadd
- (unsigned long long)_processPurgableResourcesForUrgency:(int)arg1 purgeSize:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x001000000003c4c5
- (void)reportCorruptWithRequest:(id)arg1;	// IMP=0x001000000003bf73
- (void)fetchWithRequest:(id)arg1;	// IMP=0x001000000003af1f
- (void)updateWithMessage:(id)arg1;	// IMP=0x001000000003add6
- (id)initWithDaemon:(id)arg1;	// IMP=0x001000000003ad8b
- (_Bool)handleIncomingMessage:(id)arg1 withObject:(id)arg2 fromPeer:(id)arg3;	// IMP=0x0010000000017f4c

@end

