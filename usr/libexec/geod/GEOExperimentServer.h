//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GeoServices/GEOServer.h>

@interface GEOExperimentServer : GEOServer
{
}

+ (unsigned long long)launchMode;	// IMP=0x0020000000015f50
+ (id)identifier;	// IMP=0x0010000000015f43
- (void)fetchAssignUUIDSyncWithMessage:(id)arg1;	// IMP=0x001000000001a5dd
- (void)fetchAssignUUIDWithMessage:(id)arg1;	// IMP=0x001000000001a3a1
- (void)fetchAllExperimentsWithMessage:(id)arg1;	// IMP=0x001000000001a0a3
- (void)setBucketIdWithMessage:(id)arg1;	// IMP=0x001000000001a00b
- (void)setActiveBranchWithMessage:(id)arg1;	// IMP=0x0010000000019ee4
- (void)setQuerySubstringWithMessage:(id)arg1;	// IMP=0x0010000000019cfd
- (void)refreshDatasetWithMessage:(id)arg1;	// IMP=0x0010000000019c37
- (void)updateWithMessage:(id)arg1;	// IMP=0x0010000000019bf3
- (id)initWithDaemon:(id)arg1;	// IMP=0x0010000000019b89
- (_Bool)handleIncomingMessage:(id)arg1 withObject:(id)arg2 fromPeer:(id)arg3;	// IMP=0x0010000000015f5b

@end
