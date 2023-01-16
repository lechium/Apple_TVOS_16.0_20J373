//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKit/CKDatabase.h>

@class NSDictionary;

@interface IMDCKMockDatabase : CKDatabase
{
    NSDictionary *_identifierToZoneMap;	// 8 = 0x8
}

@property(readonly, nonatomic) NSDictionary *identifierToZoneMap; // @synthesize identifierToZoneMap=_identifierToZoneMap;
- (void)addOperation:(id)arg1;	// IMP=0x00000000000553ef
- (id)_zoneIdentifierForOperation:(id)arg1;	// IMP=0x0000000000054f6e
- (id)_zoneManager;	// IMP=0x0000000000054f55
- (void)dealloc;	// IMP=0x0000000000054f13
- (id)init;	// IMP=0x0000000000054e59
- (id)_initWithContainer:(id)arg1 scope:(long long)arg2;	// IMP=0x0000000000054cb0

@end
