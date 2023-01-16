//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AdCore/DSIDRecord.h>

@class NSString;

@interface DSIDRecord (Private)
- (_Bool)isEqual:(id)arg1;	// IMP=0x0030000000002844
- (void)sendPersonalizedAdsStatusToAdPlatforms:(CDUnknownBlockType)arg1;	// IMP=0x00300000000027a9
- (void)sendSegmentDataToAdPlatforms:(CDUnknownBlockType)arg1;	// IMP=0x003000000000270e
- (void)retrieveSegmentDataFromiTunes:(CDUnknownBlockType)arg1;	// IMP=0x0030000000002672
- (_Bool)isActiveRecord;	// IMP=0x00300000000025b4
- (void)resetiAdIDsAndDPID:(CDUnknownBlockType)arg1;	// IMP=0x003000000000244c
- (void)resetiAdIDs;	// IMP=0x0030000000002051
- (void)ensureiAdIDs;	// IMP=0x0030000000001e0e
- (void)removeIDForClientType:(long long)arg1;	// IMP=0x0030000000001ccd
- (_Bool)hasIDForClientType:(long long)arg1;	// IMP=0x0030000000001c00

// Remaining properties
@property(nonatomic) _Bool accountAgeUnknown; // @dynamic accountAgeUnknown;
@property(nonatomic) _Bool accountIsT13; // @dynamic accountIsT13;
@property(nonatomic) _Bool accountIsU13; // @dynamic accountIsU13;
@property(nonatomic) _Bool accountIsU18; // @dynamic accountIsU18;
@property(retain, nonatomic) NSString *iAdIDBeforeReset; // @dynamic iAdIDBeforeReset;
@property(retain, nonatomic) NSString *iCloudDSID; // @dynamic iCloudDSID;
@property(nonatomic) _Bool isDPIDManatee; // @dynamic isDPIDManatee;
@property(nonatomic) int lastSegmentServedTimestamp; // @dynamic lastSegmentServedTimestamp;
@property(nonatomic) int lastSentSegmentDataTimestamp; // @dynamic lastSentSegmentDataTimestamp;
@property(nonatomic) int personalizedAdsTimestamp; // @dynamic personalizedAdsTimestamp;
@property(retain, nonatomic) NSString *segmentData; // @dynamic segmentData;
@property(nonatomic) int segmentDataTimestamp; // @dynamic segmentDataTimestamp;
@end

